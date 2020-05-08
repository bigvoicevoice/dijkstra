//
// Created by Xiaosheng Liu on 11/23/19.
//

#ifndef WEIGHTED_GRAPH_EDGE_H
#define WEIGHTED_GRAPH_EDGE_H


#include <iostream>

using namespace std;

template<typename Weight>

class Edge {
private:
    int a, b;  //这是两个顶点！
    Weight weight;

public:
    Edge(int a, int b, Weight weight)
    {
        this->a = a;
        this->b = b;
        this->weight = weight;
    }

    Edge(){}
    ~Edge(){}

    int v(){return a;}
    int w(){return b;}
    Weight wt() {return weight;}

    //已知一个边的顶点 求另外一个顶点
    int other(int x)
    {
        assert(x == a || x == b);
        return x == a ? b : a;
    }
    friend ostream& operator<<(ostream &os, const Edge &e){
        os<<e.a<<"-"<<e.b<<": "<<e.weight;
        return os;
    }

// 边的大小比较, 是对边的权值的大小比较
//比较函数应该写在edge里面！！！
    bool operator<=(Edge<Weight>& e){
        return weight <= e.wt();
    }
    bool operator>(Edge<Weight>& e){
        return weight > e.wt();
    }
    bool operator>=(Edge<Weight>& e){
        return weight >= e.wt();
    }
    bool operator==(Edge<Weight>& e){
        return weight == e.wt();
    }

};

template<typename Weight>
bool operator<(Edge<Weight>& a, Edge<Weight>& b) {
    return a.wt() <= b.wt();
}

#endif //WEIGHTED_GRAPH_EDGE_H
