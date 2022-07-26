#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int a[]={1,5,1,5,2,5,2,3};
    int ans=0;
    for(int i=0;i<sizeof(a)/sizeof(a[0]);i++){
        ans=ans^a[i];
    }
    cout<<ans;
    return 0;
}