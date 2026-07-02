// Virtual Destructor practice

#include <iostream>

using namespace std;

class Parent{

public:
    virtual void show(){
        cout << "Parent class show...\n";
    }

    ~Parent(){
        cout << "Calling Parent class destructor...\n";
    }
};

class Child : public Parent{

public:
    void show() override {
        cout << "Child class show...\n";
    }

    ~Child(){
        cout << "Calling Child class destructor...\n";
    }
};


int main(){

    Parent *ptr;
    Child c1;

    ptr = &c1;

    ptr->show();

    //delete ptr;

    return 0;
}