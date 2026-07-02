// Compile time polymorphism, Function OverLoading

#include <iostream>
#include <string>

using namespace std;

class Parent{

public:
    void show(){
        cout << "Parent class show...\n";
    }

    void show(string name){
        cout << "Name: " << name << endl;
    }

};

int main(){

    Parent p1;
    p1.show("arunabha");

    return 0;
}