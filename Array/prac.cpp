#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> a;
    int k;
    int n;
    int sum=0;
    cin>>n;
    cin>>k;

    for(int i=0;i<n;i++) cin>>a[i];

    sort(a.begin(),a.end());

    for(int i=n-1;i>n-k;i--){
        sum+=a[i];
    }

    cout<<sum;

    return 0;
}