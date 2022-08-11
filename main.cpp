#include "main.h"
int main(){
    fout.open("StreamingEdges.txt",ios::out); 
    int i = 0;
    srand(time(NULL));
    cout << "Please enter the number of n nodes, m edges, and an interger k.\n";
    cin >> vertexNum >> edges  >> k;
    vector<int> nodes; // nodes
    for(int i = 0;i<vertexNum;i++){
        nodes.push_back(i);
        G.push_back(deque<int>{});
    }
    passes = 160*pow(k,2)*log10(vertexNum);
    while(i<edges){
        generate_edges(vertexNum);
        i++;
    }
    fout.close();
    fin.open("StreamingEdges.txt",ios::in);
    start_time = clock();
    sketch(&nodes);
    //k-vertex connectivity algorithm
    post_processing(k);
    finish_time = clock();
    fin.close();
    // Final result
    cout << "-----Final result-----";
    print_graph(vertexNum,k);
    if(answer)
        cout << "The answer is \"YES\"" << endl;
    else 
        cout << "The answer is \"NO\"" << endl;
    cout << "Total time : "<< double(finish_time-start_time)/CLOCKS_PER_SEC << endl;
    return 0;
}




void sketch(vector<int>* nodes){
    int i = 0;
    while(i<passes){
        // generate several random vertices in prob.(k/n) with bad implement
        random_shuffle(nodes->begin(),nodes->end());
        while(!fin.eof()){ 
            fin >> sign >> x >> y;
            int cnt = 0;
            int l0arr[k/vertexNum][int(log2(vertexNum))];
            while(cnt < int(log2(vertexNum))){
                // l0sampler to construct spanning trees
                
                cnt++;
            }
        }
        i++;
    }
}
void generate_edges(int vertexNum){
    x = rand()%vertexNum;
    y = rand()%vertexNum;
    int sign = rand()%2; 
    fout << sign <<' '<< x << ' ' << y << endl;   
}

void post_processing(int k){
    //k-vertex connectivity algorithm
    cout<<k;
}