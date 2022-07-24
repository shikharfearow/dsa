#include<iostream>
using namespace std;

string checkReturn(string s){
    int dir=0;
    for(auto it: s){
        if(it=='N') dir += 1;
        if(it=='S') dir -= 1;
        if(it=='E') dir += 1;
        if(it=='W') dir -= 1;
    }
    return dir==0?"Returned":"No";
}

int main()
{
    cout<<checkReturn("NESWW");
    return 0;
}