// Friend class


#include <iostream>
using namespace std;

class A{

private: 
    int secret;

    friend class B;
   
public:
    A(){
        secret = 20;
    }
};

class B{

public:
    void show(A &obj){
        cout << "secret: " << obj.secret << endl;
    }
};

int main(){

    A a1;
    B b1;

    b1.show(a1);

    return 0;
}