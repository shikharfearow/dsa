#include<iostream>
#include<conio.h>
#include<vector>
using namespace std;

void func(int ind, vector<int> &ds,vector<vector<int>> &ans,int a[], int n){

    ans.push_back(ds);

    for(int i=ind;i<n;i++){
        if(i!=ind && a[i]==a[i+1]) continue;    
        ds.push_back(a[i]);
        func(i+1,ds,ans,a,n);
        ds.pop_back();
    }

}

int main(){
    vector<int> ds;
    vector<vector<int>> ans;
    int a[] = {1,2,2};
    int n = 3;
    func(0,ds,ans,a,n);
    for(auto it: ans){
        for(auto itt: it)
            cout<< itt <<" ";
        cout<<endl;
    }
    return 0;
}