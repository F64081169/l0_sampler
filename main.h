# include<iostream>
using namespace std;

#include <cstdio>
#include <cstdlib>
#include <time.h>
#include <algorithm>
#include <deque>
#include <fstream>
#include <math.h>

/* 2D deque undirected graph G */
deque<deque<int> > G;
int vertexNum,edges,passes,k;
int sign,x,y;
clock_t start_time,finish_time;
fstream fin,fout;
void print_graph(int,int);
void generate_edges(int);
// void stream_edges(int,int,int);
void post_processing(int);

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