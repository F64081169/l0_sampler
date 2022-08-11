# include<iostream>
using namespace std;

#include <cstdio>
#include <cstdlib>
#include <time.h>
#include <algorithm>
#include <deque>
#include <fstream>

/* 2D deque undirected graph G */
deque<deque<int> > G;
int vertexNum,edges,passes,k;
int sign,x,y;
clock_t start_time,finish_time;
fstream fin,fout;
void print_graph(int,int);
void generate_edges(int);
void stream_edges(int,int,int);
