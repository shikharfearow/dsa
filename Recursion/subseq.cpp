#include<iostream>
#include<conio.h>
#include<bits/stdc++.h>
#include<vector>

using namespace std;

void subseq(int i,vector<int> &ds ,int a[],int n){
    if(i>=n){
        for(auto it:ds ){
            cout<<it;
        }
        cout<<endl;
        return;
    }

    ds.push_back(a[i]);
    subseq(i+1,ds,a,n);
    ds.pop_back();
    subseq(i+1,ds,a,n);
}

int main(){
    int a[3] = {3,1,2};
    vector<int> ds;
    int n  = sizeof(a)/sizeof(a[0]);
    subseq(0,ds,a,n);
    return 0;
}