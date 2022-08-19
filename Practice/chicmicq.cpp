#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> a{1,58,98,1,4,6,6,8,9,1,4}; //1,4
    //BRUTE FORCE
    // for(int i=0;i<sizeof(a)/sizeof(a[0]);i++){
    //     for(int j=1;j<sizeof(a)/sizeof(a[0]);j++){
    //         if(a[i] == a[j] && count<2){
    //             b[k++] = a[i];
    //             count++;
    //         }
    //     }
    // }
    //using sort
    sort(a.begin(),a.end());
    int i=0;
    int j=1;
    int count=0;
    while(count<2){
        if(a[i] == a[j]){
            j++;
            continue;
        }
        if(j>0){
            count++;
            cout<<a[i]<<" ";
        }
        i = j;
    }
    
    return 0;
}