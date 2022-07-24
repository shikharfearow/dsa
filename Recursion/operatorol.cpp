#include<iostream>
#include<conio.h>

using namespace std;

class Sq{
    int x;
    public:
    Sq(int x){
        this->x = x;
    }
    void operator^(int);
    void printx(){
        cout<< x;
    }
};

void Sq::operator^(int n){
    int i = 1;
    int s = x;
    while(i<n){
        x*=s;
        i++;
    }
}

int main(){
    Sq s(3);
    s^3;
    s.printx();
    return 0;
}