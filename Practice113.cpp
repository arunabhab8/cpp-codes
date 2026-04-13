// Normal practice

#include <iostream>
#include <string>
using namespace std;

int main(){

    string str = "hello world";

    cout << str.length() << endl;
    cout << str.at(6) << endl;
    cout << str.substr(0,6) << endl;

    for (char ch: str){
        cout << ch << " ";
    }

    cout << str.find("world") << endl;


    return 0;
}