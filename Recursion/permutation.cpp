#include<iostream>
#include<conio.h>
#include<vector>

using namespace std;

void func(vector<int> a, vector<int> &ds, vector<vector <int>> &ans, int n, int map[]){
    
    if(ds.size() == a.size()){
        ans.push_back(ds);
        return;
    }

    for(int i = 0;i<n;i++){
        if(!map[i]){
            ds.push_back(a[i]);
            map[i] = 1;
            func(a,ds,ans,n,map);
            ds.pop_back();
            map[i]=0;
        }
    }

}

int main(){
    
    vector<int> a{1,2,3};
    int map[a.size()] = {0};
    vector<int> ds; vector<vector<int>> ans;
    func(a,ds,ans,a.size(),map);
    for(auto it: ans){
        for(auto itt: it) cout<< itt << " ";
        cout<<endl;
    }
    return 0;
}