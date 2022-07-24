#include<iostream>
#include<conio.h>
#include<vector>
using namespace std;

void func(int ind,vector<int> a,vector<vector<int>> &ans,int n){
    
    if(ind == n){
        ans.push_back(a);
        return;
    }
    for(int i=ind;i<n;i++){
        swap(a[ind],a[i]);
        func(ind+1,a,ans,n);
        swap(a[ind],a[i]);
    }

}

int main(){
    vector<vector<int>> ans;
    vector<int> a{1,2,3};
    int n = sizeof(a)/sizeof(a[0]);
    func(0,a,ans,n);
    for(auto it: ans){
        for(auto itt: it) cout<< itt << " ";
        cout<<endl;
    }
    return 0;
}