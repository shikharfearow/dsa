#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<vector <int>> ds;
    ds[0].push_back(1);
    cout<<ds[0][0];
    return 0;
}