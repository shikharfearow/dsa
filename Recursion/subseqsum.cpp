#include<iostream>
#include<conio.h>
#include<vector>

using namespace std;
//only one sub seq
bool subseqsum(int i,int a[], vector<int> &ds,int sum,int n){
    if(i==n){
        if(sum==2){
            for(auto it: ds){
                cout<<it;
            }
            return true;
        }
        return false;
    }

    ds.push_back(a[i]);
    sum += a[i];
    if(subseqsum(i+1,a,ds,sum,n)) return true;
    ds.pop_back();
    sum -= a[i];
    if(subseqsum(i+1,a,ds,sum,n)) return true;

    return false;
}

int main(){
    int a[3] = {1,2,1};
    int n = sizeof(a)/sizeof(a[0]);
    vector<int> ds;
    subseqsum(0,a,ds,0,n);
    return 0;
}