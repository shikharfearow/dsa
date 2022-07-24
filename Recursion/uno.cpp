#include<iostream>
#include<conio.h>

using namespace std;

string uno(int i,int sum){
    if(i==1){
        return "UNO";
    }
    if(i<=9)  return "NO";
    while(i>0){
        sum+=i%10;
        i=i/10;
    }
    return uno(sum,0);
}

int main(){
    cout<<uno(123,0);
    return 0;
}
