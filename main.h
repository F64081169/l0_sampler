# include<iostream>
using namespace std;

#include <cstdio>
#include <cstdlib>
#include <time.h>
#include <algorithm>
#include <signal.h>
#include <deque>

/* 2D deque undirected graph G */
deque<deque<int> > G;
int vertexNum,k;
int x,y;
void Report(int);
void print_graph(int,int);
void stream_edges(int);