// Function/Method Overriding using virtual


#include <iostream>
using namespace std;

class Parent{

public:
    virtual void show(){
        cout << "Parent class.." << endl;
    }
};

class Child : public Parent {

public:
    void show() override{
        cout << "Child class.." << endl;
    }

};

int main(){

    Child c1;

    Parent *ptr = &c1;

    ptr->show();

    return 0;
}