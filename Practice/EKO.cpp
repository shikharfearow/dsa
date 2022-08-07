#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool isPossible(int mid,vector<long long int>a,long long int N,long long int M){
    int treeSum = 0;
    for(int i=0;i<N;i++){
        if(mid<a[i]){
            treeSum+=a[i]-mid;
        }
    }
    if(treeSum>M){
        return true;
    }
    else{
        return false;
    }
}

long long int cutTree(vector<long long int> a,long long int N,long long int M){
    long long int ans=-1;
    sort(a.begin(),a.end());
    long long int s = a[0];
    long long int e = a[N-1];
    long long int mid = s + (e-s)/2;
    while(s<=e){
        if(isPossible(mid,a,N,M)){
            s = mid+1;
        }
        else{
            e = mid-1;
        }
        mid = s + (e-s)/2;
    }
    return s;
}

int main()
{
    long long int N, M;
    long long int ans;
    long long int input;
    cin>>N>>M;
    vector<long long int> a;
    for(int i=0;i<N;i++){
        cin>> input;
        a.push_back(input);
    }

    ans = cutTree(a,N,M);

    cout<<ans;
    return 0;
}