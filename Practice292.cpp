// Using virtual functions


#include <iostream>
using namespace std;

class Parent {

public:
    void show(){
        cout << "Parent class show...\n";
    }
};

class Child : public Parent{

public:
    void show(){
        cout << "Child class show...\n";

    }
};

int main(){

    Parent *ptr;

    Child chld;

    ptr = &chld;

    ptr->show();

    return 0;
}