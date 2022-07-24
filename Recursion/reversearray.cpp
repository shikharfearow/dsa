#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;

void reverse_array(int i, int a[],int n){
    if(i>=n/2)
        return;
    swap(a[i],a[n-i-1]);
    return reverse_array(i+1,a,n);    
}

bool check_palindrome(int i, string s,int n){
    if(i>=n/2)
        return true;
    if(s[i]!=s[n-i-1])
        return false;
    return check_palindrome(i+1,s,n); 
}

int main(){
    int a[5] = {1,2,3,4,5};
    string s = "madam";
    check_palindrome(0,s,s.length())? cout<<"Palindrome" : cout <<"Not a palindrome";
    //reverse_array(0,a,sizeof(a)/4);
    // for(int i=0;i<sizeof(a)/4;i++){
    //     cout<<a[i];
    // }
    return 0;
}