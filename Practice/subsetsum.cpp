//Given a list arr of N integers, print sums of all subsets in it.

#include<iostream>
#include<vector>
using namespace std;

    void func(int i,vector<int> a, vector<int> &ds, int n,int sum){        
        if(i==n){
            ds.push_back(sum);
            return;
        }
        
        sum+=a[i];
        func(i+1,a,ds,n,sum);
        sum-=a[i];
        func(i+1,a,ds,n,sum);
        
    }

int main()
{
    vector<int> ds;
    vector<int> a{2,3};
    func(0,a,ds,a.size(),0);
    for(auto it: ds){
        cout<<it<<" ";
    }
    return 0;
}