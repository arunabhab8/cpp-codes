// RunTime Polymorphism

#include <iostream>

using namespace std;

class Parent{

public:
    virtual void show(){
        cout << "Parent show function...\n";
    }
};

class Child : public Parent{

public:
    void show(){
        cout << "Child show function...\n";
    }

};

int main(){

    Child c1;
    Parent p1;

    Parent *ptr;

    ptr = &c1;
    
    ptr->show();

    return 0;
}