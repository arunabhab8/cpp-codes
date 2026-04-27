// Friend function


#include <iostream>
using namespace std;

class A{
private:
    int secret;

    friend void show(A &obj);
public:
    A(){
        secret  = 10;
    }
};

void show(A &obj){
    cout << "secret: " << obj.secret << endl;
}

int main(){

    A obj;
    show(obj);

    return 0;
}