#include<iostream>
#include<conio.h>
#include<vector>
#include <bits/stdc++.h> 

using namespace std;

void combsum(int i,vector<int> &ds,int a[],int sum,int n){
    if(sum == 0 and ds.size()==3){
        for(auto it: ds){
            cout<<it<<" ";
        }
        cout<<endl;
        return;
    }

    for(int j = i;j<n;j++){
        if(j>i && a[j] == a[j-1]) continue;
        if(a[j]>sum) break;
        ds.push_back(a[j]);
        combsum(j+1,ds,a,sum-a[j],n);
        ds.pop_back();
    }
}

int  main(){
    int a[] = {10, 5, 5, 5, 2};
    vector<int> ds;
    int n = sizeof(a)/sizeof(a[0]);
    sort(a,a+n);
    combsum(0,ds,a,12,n);
    return 0;
}