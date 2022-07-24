#include<iostream>
#include<conio.h>
#include<bits/stdc++.h>

using namespace std;

string func(int a[],vector<int> &ds,int n, int sum){

    for(int i=0;i<n;i++){
        ds.push_back(a[i]);
        if(ds.size()==2){
            for(auto it:ds){
                sum+=it;
            }
            if(sum != 0)
                return "NO";
            ds.clear();
        }
    }

    return "YES";

}

int main(){
   
    int arr[] = {8,-8,7,-7}; int n = sizeof(arr)/sizeof(arr[0]); long long s = 12;
    vector<int> ds;
    cout<<func(arr,ds,n,0);
    return 0;
}