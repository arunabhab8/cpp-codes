// WAF that accepts character (ch) and returns character that occurs after ch in english alphabet


#include <iostream>
using namespace std;

char nextChar(char ch){

    if (ch >='a' && ch < 'z'){
        return ch + 1;
    } else if (ch >= 'A' && ch < 'Z'){
        return ch + 1;
    } else if (ch == 'z'){
        return 'a';
    } else if (ch == 'Z'){
        return 'A';
    } else {
        return '-';
    }
}

int main(){

    char ch;

    cout << "Enter the value of ch: ";
    cin >> ch;

    cout << nextChar(ch) << endl;

    return 0;
}