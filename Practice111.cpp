// String member functions

#include <iostream>
#include <string>
using namespace std;

int main(){

    string str = "hello world";

    cout << str.length() << endl;
    cout << str.at(4) << " " << str[4] << endl;
    cout << str.substr(0,5) << endl;


    return 0;
}