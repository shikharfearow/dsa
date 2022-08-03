#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> a{1,2,3,4,5};
    int s=0, e=a.size()-1;
    int mid = s + (e-s)/2;
    int key = 5;
    
    while(s<=e){
        if(a[mid] == key){
            cout<<key<<" is present at "<<mid;
            break;
        }
        else if(a[mid]<key) s = mid+1;
        else e = mid-1;

        mid = s + (e-s)/2;
    }

    return 0;
}