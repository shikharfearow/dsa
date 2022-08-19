#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> a{1,1,2,2,3}; 
    // int a[] = {1,1,2,2,3}; 1^1^2^2^3
    //two pointer
    // int count = 0;
    // int i=0,j=1;
    // while(j<a.size()){
    //     if(a[i] == a[j]){
    //         j++;
    //     }
    //     else{
    //         i=j;
    //         j++;
    //     }
    // }
    // cout<<a[i];

    //bitwise operator
    int ans = a[0];
    for(int i=1;i<a.size();i++){
        ans = ans^a[i];
    }
    cout<<ans;
    return 0;
}