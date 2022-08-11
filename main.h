# include<iostream>
using namespace std;

#include <cstdio>
#include <cstdlib>
#include <time.h>
#include <algorithm>
#include <deque>
#include <fstream>
#include <math.h>
#include "murmurhash3.h"
#include <vector>

/* 2D deque undirected graph G */
deque<deque<int> > G;
int vertexNum,edges,passes,k;
int sign,x,y;
bool answer;
clock_t start_time,finish_time;
fstream fin,fout;
void print_graph(int,int);
void generate_edges(int);
// void stream_edges(int,int,int);
void post_processing(int);
void sketch(vector<int>*);

void print_graph(int vertexNum,int k){
    cout << "\nn = " << vertexNum << " ,m = " << edges << " ,p = " << passes << " ,k = " << k <<  endl;
    for(int i = 0;i<vertexNum;i++){
        cout << i << " : " ;
        for(int j = 0;j<G[i].size();j++){
            cout << G[i][j] << ' ';
        }
        cout << endl;
    }   
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

