#include<iostream>
#include<conio.h>

using namespace std;

void binary_search(int a[],int mid,int l,int r, int f){
    if(f == a[mid]){
        cout<<mid;
        return;
    }
    else if(mid>=r){
        cout<<"not found";
        return;
    }
    else if( f>a[mid] )
        binary_search(a,(mid+r+1)/2,mid+1,r,f);
    else if( f<a[mid] )
        binary_search(a,(mid+l+1)/2,l,mid-1,f);
}

int main(){
    int a[5] = {12,23,32,41,55};
    int mid = sizeof(a)/sizeof(a[0])/2;
    int l = 0;
    int r = sizeof(a)/sizeof(a[0])-1;
    int f = 104;
    binary_search(a,mid,l,r,f);
    return 0;
}