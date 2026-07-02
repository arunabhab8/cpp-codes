// Strings, Part-III, String functions

#include <iostream>
#include <string>

using namespace std;

int main(){

    string str = "Hello, World";

    cout << str.length() << endl;
    cout << str.at(7) << "=" << str[7] << endl;
    cout << str.substr(1, 7) << endl;

    int idx = str.find("orl");
    int idx1 = str.find("Arun");
    cout << idx << endl;
    cout << idx1 << endl;

    return 0;
}