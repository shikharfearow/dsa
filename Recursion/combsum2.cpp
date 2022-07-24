#include<iostream>
#include<conio.h>
#include<vector>
#include <bits/stdc++.h> 

using namespace std;

void combsum(int i,vector<int> &ds,int a[],int sum,int n){
    if(sum == 0){
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
    int a[] = {10,1,2,7,6,1,5};
    vector<int> ds;
    int n = sizeof(a)/sizeof(a[0]);
    sort(a,a+n);
    combsum(0,ds,a,8,n);
    return 0;
}