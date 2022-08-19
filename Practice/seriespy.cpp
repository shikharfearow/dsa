#include<iostream>
using namespace std;

int main()
{
    int n;
    int steps=22;
    int st = 6;
    cin>>n;

    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            printf("%05d ",st);
            st = steps+st; 
            steps = steps + 16;
        }
        cout<<endl;
    }

    return 0;
}