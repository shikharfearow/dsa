#include<iostream>
#include<conio.h>
#include<vector>

using namespace std;

void combsum (int i, vector<int> &ds,int a[], int sum,int n){

    if(i==n){
        if(sum==0){
            for(auto it: ds){
                cout<<it<<" ";
            }
            cout<<endl;
        }
        return;
    }

    ds.push_back(a[i]);
    if(a[i]<=sum)
        combsum(i,ds,a,sum-a[i],n);
    ds.pop_back();
    combsum(i+1,ds,a,sum,n);
}

int main(){
    int a[] = {2,3,6,7};
    vector<int> ds;
    int n = sizeof(a)/sizeof(a[0]);
    combsum(0,ds,a,7,n);
    return 0;
}