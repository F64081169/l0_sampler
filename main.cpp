#include "main.h"
#include "graph.h"

int main(){
    int vertexNum,k;
    cout << "Please enter the number of nodes and interger k.\n";
    cin >> vertexNum >> k ;
    graph G(vertexNum);
    int i = 0;
    while(i<5){
        G.stream_edges(vertexNum);
        i++;
    }
    cout << endl;
    G.print_graph(vertexNum);

    return 0;
}