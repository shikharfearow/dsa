#include<iostream>
#include<conio.h>

using namespace std;

class Address{
    string house, town;
    protected:
        void getAddress(){
            cout<<house<<", "<<town<<endl;
        }    
    public:
    Address(string house, string town){
        this->house = house;
        this->town = town;
        getAddress();
    }
};

class Employee{
    int id;
    string name;
    Address* address;
    public:
        Employee(int id, string name,Address* address){
        this->id = id;
        this->name = name;
        this->address = address;
        }
       void getEmployee(){
            cout<<id<<" "<<name<<endl;
        }
};

int main(){
    Address ad("J101","Meerut");
    Employee emp(1,"Shikhar",&ad);
    emp.getEmployee();
}