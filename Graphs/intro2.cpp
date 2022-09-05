//create and print a graph using adjacent list

#include<bits/stdc++.h>

using namespace std;

class graph{
    unordered_map<int,list<int>> adjlist;
    public:
    void addEdges(int u,int v,int dir){
        adjlist[u].push_back(v);
        if(dir) adjlist[v].push_back(u);
    }
    void printGraph(){
        for(auto i: adjlist){
            cout<<i.first<<": ";
            for(auto j: adjlist[i.first]){
                cout<<j<<" ";
            }
            cout<<endl;
        }
    }
};

int main(){
    graph g;
    g.addEdges(0,1,1);
    g.addEdges(1,2,1);
    g.addEdges(2,0,1);
    g.printGraph();
}