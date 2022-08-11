#include "main.h"

int main(){
    srand(time(NULL));
    cout << "Please enter the number of n nodes, m edges, and an interger k.\n";
    cin >> vertexNum >> edges  >> k;
    passes = 160*pow(k,2)*log10(vertexNum);
    for(int i = 0;i<vertexNum;i++){
        G.push_back(deque<int>{});
    }
    int i = 0;
    fout.open("StreamingEdges.txt",ios::out); 
    while(i<edges){
        generate_edges(vertexNum);
        i++;
    }
    fout.close();
    fin.open("StreamingEdges.txt",ios::in);
    i = 0;
    start_time = clock();
    while(i<passes){
        // generate several random vertices in prob.(k/n)
        while(!fin.eof()){ 
            fin >> sign >> x >> y;
            // l0sampler to construct spanning trees
        }
        i++;
    }
    //k-vertex connectivity algorithm
    post_processing(k);
    finish_time = clock();
    fin.close();
    // Final result
    cout << "-----Final result-----";
    print_graph(vertexNum,k);
    cout << "The answer is \"YES\"" << endl;
    cout << "Total time : "<< double(finish_time-start_time)/CLOCKS_PER_SEC << endl;
    return 0;
}

// void stream_edges(int sign,int x,int y){
//     deque<int>::iterator itx = find_if(G[x].begin(), G[x].end(), bind2nd(equal_to<int>(), y));
//     deque<int>::iterator ity = find_if(G[y].begin(), G[y].end(), bind2nd(equal_to<int>(), x));
//     if(x!=y){
//         if(sign==1){/* '+' */
//             if((itx == G[x].end()) && (ity == G[y].end())){
//                 G[x].push_back(y);
//                 G[y].push_back(x);
//             }
//         }else{/* '-' */
//             if((itx != G[x].end()) && (ity != G[y].end())){
//                 G[x].erase(find(G[x].begin(),G[x].end(),y));
//                 G[y].erase(find(G[y].begin(),G[y].end(),x));
//             }
//         }
//     }
// }

void generate_edges(int vertexNum){
    x = rand()%vertexNum;
    y = rand()%vertexNum;
    int sign = rand()%2; 
    fout << sign <<' '<< x << ' ' << y << endl;   
}

void post_processing(int k){
    cout<<k;
}