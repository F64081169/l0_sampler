#include "main.h"
#include <deque>

class graph
{
private:
    int x,y;
public:
/* 2D deque undirected graph G */
    deque<deque<int> > G;
    graph(int vertexNum);
    ~graph();
    void print_graph(int vertexNum,int k);
    void stream_edges(int vertexNum);
};


