#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;

class Shape{
    
    protected:
    double width;
    double length;

    public:
    Shape(double w){
        width = w;
    }
    Shape(double w,double l){
        width = w;
        length = l;
    }
    virtual void getArea(){
        cout<<"Area is:"<< width*length;
    }
};

class Circle:public Shape{

    public:
    void getArea(){
        cout<<"Area is:"<< 3.14 * pow(width/2,2);
    }

};

int main(){
    Shape s(10,5);
    Shape c(10);
    Circle C;
    s.getArea();
    C.getArea();

    return 0;
}