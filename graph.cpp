#include "graph.h"

void graph::print_graph(int vertexNum,int k){
    cout << "k = " << k << endl;
    for(int i = 0;i<vertexNum;i++){
        cout << i << " : " ;
        for(int j = 0;j<G[i].size();j++){
            cout << G[i][j] << ' ';
        }
        cout << endl;
    }
}
/*
    Random generate +(u,v) or -(u,v) 
    for each 0<=u<vertexNum,0<=v<vertexNum.
    If (u,v) exist , +(u,v) do nothing.
    If (u,v) not exist, -(u,v) do nothing.
    If u==v , do nothing.
*/
void graph::stream_edges(int vertexNum){
    x = rand()%vertexNum;
    y = rand()%vertexNum;
    int sign = rand()%2; 
    deque<int>::iterator itx = find_if(G[x].begin(), G[x].end(), bind2nd(equal_to<int>(), y));
    deque<int>::iterator ity = find_if(G[y].begin(), G[y].end(), bind2nd(equal_to<int>(), x));
    if(x!=y){
        if(sign==1){/* '+' */
            if((itx == G[x].end()) && (ity == G[y].end())){
                G[x].push_back(y);
                G[y].push_back(x);
            }
        }else{/* '-' */
            if((itx != G[x].end()) && (ity != G[y].end())){
                G[x].erase(find(G[x].begin(),G[x].end(),y));
                G[y].erase(find(G[y].begin(),G[y].end(),x));
            }
        }
    }
}

graph::graph(int vertexNum){
    for(int i = 0;i<vertexNum;i++){
        G.push_back(deque<int>{});
    }
}

graph::~graph(){

}