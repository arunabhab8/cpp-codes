// Virtual Functions

#include <iostream>
using namespace std;

class Parent{
    public:
    
    void hello(){
        cout << "Parent class hello" << endl;
    }
};

class Child : public Parent {
    
    public:

    void hello(){
        cout << "Child class hello" << endl;
    }

};

int main(){

    Child c1;
    Parent *ptr;
    ptr = &c1;
    ptr->hello();

    return 0;
}