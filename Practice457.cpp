// Compile Time Polymorphism, Function OverLoading


#include <iostream>
#include <string>
using namespace std;

class Print{

public:
    void show(int x){
        cout << "int: " << x << endl;
    }

    void show(string str){
        cout << "string: " << str << endl;
    }
};


int main(){

    Print obj;

    obj.show(100);
    obj.show("helloworld");

    return 0;
}