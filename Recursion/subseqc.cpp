#include<iostream>
#include<conio.h>
#include<vector>

using namespace std;

int subseqc(int i, int a[],int sum, int n){
    if(i==n){
        if(sum == 2) return 1;
        return 0;
    }
    sum = sum+a[i];
    int l = subseqc(i+1,a,sum,n);
    sum = sum-a[i];
    int r = subseqc(i+1,a,sum,n);
    return l+r;
}

int main(){
    int a[3] = {1,2,1};
    int n = sizeof(a)/sizeof(a[0]);
    cout<< subseqc(0,a,0,n);  
    return 0;
}