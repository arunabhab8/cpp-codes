// String comparisons

#include <iostream>
#include <string>

using namespace std;

int main(){

    string str1;
    string str2;

    cout << "Enter the value of str1: ";
    getline(cin, str1);

    cout << "Enter the value of str2: ";
    getline(cin, str2);

    cout << (str1 == str2) << endl;
    cout << (str1 < str2) << endl;
    cout << (str1 > str2) << endl;

    return 0;
}