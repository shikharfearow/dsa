#include<iostream>
#include<conio.h>

using namespace std;

//single inheritence
class A{
    protected:
    int b;
    public:
    void setb(int b){
        this->b = b;
    }
};

class B : public A{
    public:
    void getb(){
        cout<<b;
    }
};

int main(){
    B ob;
    ob.setb(12);
    ob.getb();
    return 0;
}
