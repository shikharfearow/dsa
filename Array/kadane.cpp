#include<iostream>
#include<conio.h>
#include<vector>
using namespace std;

/*kadane algo
int kadanesum(int a[],int n){
    int currsum=0;
    int max=0;

    for(int i=0;i<n;i++){
        currsum+=a[i];

        if(currsum>max) max = currsum;
        if(currsum<0) currsum = 0;
    }

    return max;
}*/


//for sum k
vector<int> kadanesum(int a[],int n){
    int currsum=0;
    int max=12;
    vector<int> ds;

    for(int i=0;i<n;i++){
        currsum+=a[i];
        ds.push_back(a[i]);
        if(currsum==max) return ds;
        if(currsum<0){
            currsum = 0;
            ds.clear();
        }
    }
    ds.clear();
    return ds;
}


int main(){
    int a[] = {1,2,3,7,5};
    int n = sizeof(a)/sizeof(a[0]);
    vector<int> ds = kadanesum(a,n);
    for(auto it: ds) cout<<it<<" ";
    return 0;
}
