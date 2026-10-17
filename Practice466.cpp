// Friend class and Friend function


#include <iostream>
#include <string>
using namespace std;

class A {

    string password = "abcd";
    friend class B;
    friend void showPassword(A &obj);
};

class B {

public:
    void showPassword(A &obj){
        cout << "Password: " << obj.password << endl;
    }
};

void showPassword(A &obj){
    cout << "Inside friend function, password: " << obj.password << endl;
}

int main(){

    A a1;
    B b1;

    b1.showPassword(a1);

    showPassword(a1);
    return 0;
}