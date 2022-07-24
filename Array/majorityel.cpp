#include<iostream>
#include<conio.h>

using namespace std;

//bruteforce method
void brutef(int a[],int n){
    int count=0, majority=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[i] == a[j])
                count++;
        }
        if(count>n/2 && count>majority){
            majority = a[i];
        }
    }
    cout<<"Majority element is:"<<majority;
}

//moores voting algorithm
void votingf(int a[],int n){
    int index = 0;
    int count = 1;
    for(int i=1;i<n;i++){
        if(a[i] == a[index])
            count++;
        else
            count--;
        if(count == 0){
            index = i;
            count=1;
        }
    }
    count = 0;
    for(int j=0;j<n;j++) if(a[j] == a[index]) count++;
    if(count>n/2) cout<<"Majority Element is:"<<a[index];
    else cout<<"No Majortiy Element.";
}

int main(){
    int a[] = {5,1,2,2,2};
    int n = sizeof(a)/sizeof(a[0]);
    votingf(a,n);
    return 0;
}