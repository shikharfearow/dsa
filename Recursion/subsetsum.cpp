#include<iostream>
#include<conio.h>
#include<vector>
using namespace std;

void subsetsum(int i,int a[],vector<int> &ds, int sum,int n){
    if(i==n){
        ds.push_back(sum);
        return;
    }

    subsetsum(i+1,a,ds,sum+a[i],n);
    subsetsum(i+1,a,ds,sum,n);   
}

int main(){

    int a[] = {3,1,2};
    int n = sizeof(a)/sizeof(a[0]);
    vector<int> ds;
    subsetsum(0,a,ds,0,n);
    for(auto it: ds) cout<<it<<" ";
    return 0;
}