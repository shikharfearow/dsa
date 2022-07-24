#include<iostream>
#include<conio.h>

using namespace std;

//operator overloading
class Dog{
    public:
        void display(){
            cout<< "Speak";
        }
        void display(string dog){
            cout<< "Bark " << dog;
        }
};

int main(){
    Dog d;
    d.display("Robin");
    return 0;
}