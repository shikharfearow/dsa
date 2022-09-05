//create graph using adjacency matrix

#include<bits/stdc++.h>

using namespace std;
int adjmatrix[20][20];
void addEdge(int u,int v,bool dir){
    adjmatrix[u][v] = 1;
    if(dir) adjmatrix[v][u] = 1;
}

void printGraph(int n){
    for(int i=0;i<n;i++){
        cout<<i<<": ";
        for(int j=0;j<n;j++){
            cout<<j<<":"<<adjmatrix[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main(){
    int n;
    cin>>n;
    int a,b;
    addEdge(0,1,1);
    addEdge(1,2,1);
    addEdge(2,0,1);
    printGraph(n);
}