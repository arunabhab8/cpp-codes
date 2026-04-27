// Function OverLoading


#include <iostream>
#include <string>
using namespace std;

class Print{
    int x;
    string str;

public:
    void show(int x){
        cout << "Value of x: " << x << endl;
    }

    void show(string str){
        cout << "Value of str: " << str << endl;
    }

};

int main(){

    Print obj;
    obj.show(40);
    obj.show("hello");


    return 0;
}


