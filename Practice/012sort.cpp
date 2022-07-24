#include<iostream>
#include<conio.h>
#include<vector>

using namespace std;

void sort012(int a[],int n){
    int count0=0, count1=0,count2;
    for(int i=0;i<n;i++){
        if(a[i]==0)
            count0++;
        if(a[i]==1)
            count1++;
    }
    count2 = n - count1 + count0;
    for(int i=0;i<n;i++){
        if(count0>0){
            a[i]=0;
            count0--;
        }
        else if(count1>0){
            a[i]=1;
            count1--;
        }
        else{
            a[i]=2;
        }
    }
}

int main(){
    int a[] = {0,1,2,1,2,0};
    sort012(a,6);
    for(int i=0;i<6;i++){
        cout<<a[i];
    }
    return 0;
}