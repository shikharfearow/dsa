#include<iostream>
#include<conio.h>
#include<bits/stdc++.h>

using namespace std;

void func(int a[],vector<int> &ds,int n, int sum){

    for(int i=0;i<n;i++){
        if(sum==12){
            return;
        }
        sum+=a[i];
        ds.push_back(a[i]);
        if(sum>12){
            sum-=ds.front();
            ds.erase(ds.begin());
        }
    }

    for(auto it:ds){
        if(sum>12){
            sum-=it;
            ds.erase(ds.begin());
        }
    }

}

int main(){
   
    int arr[] = {1,2,4,7,5}; int n = sizeof(arr)/sizeof(arr[0]); long long s = 12;
    vector<int> ds;
    func(arr,ds,n,0);
    for(auto it:ds) cout<<it<<" ";
    return 0;
}