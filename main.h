# include<iostream>
using namespace std;

#include <cstdio>
#include <cstdlib>
#include <time.h>
#include <algorithm>
#include <signal.h>
#include <deque>
#include <fstream>

/* 2D deque undirected graph G */
deque<deque<int> > G;
int vertexNum,edges,passes,k;
int x,y;
clock_t start_time,finish_time;
fstream fout;
void Report(int);
void print_graph(int,int);
void stream_edges(int);