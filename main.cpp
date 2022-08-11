#include "main.h"

int main(){
    srand(time(NULL));
    cout << "Please enter the number of n nodes, m edges, p passes and an interger k.\n";
    cin >> vertexNum >> edges >> passes >> k;
    for(int i = 0;i<vertexNum;i++){
        G.push_back(deque<int>{});
    }
    signal(SIGTSTP, Report);
     
    int i = 0;
    fout.open("StreamingEdges.txt",ios::out) ; 
    start_time = clock();
    while(i<edges){
        stream_edges(vertexNum);
        i++;
    }
    fout.close();
    finish_time = clock();
    // Final result
    cout << "-----Final result-----";
    print_graph(vertexNum,k);
    cout << "The answer is \"YES\"" << endl;
    cout << "Total time : "<< double(finish_time-start_time)/CLOCKS_PER_SEC << endl;
    return 0;
}

void Report(int sign_no){
    if(sign_no == SIGTSTP){  
        print_graph(vertexNum,k);
    }  
}

void print_graph(int vertexNum,int k){
    cout << "\n Current graph with k = " << k << endl;
    for(int i = 0;i<vertexNum;i++){
        cout << i << " : " ;
        for(int j = 0;j<G[i].size();j++){
            cout << G[i][j] << ' ';
        }
        cout << endl;
    }
    
}

void stream_edges(int vertexNum){
    
    x = rand()%vertexNum;
    y = rand()%vertexNum;
    int sign = rand()%2; 
    fout << sign <<' '<< x << ' ' << y << endl;
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