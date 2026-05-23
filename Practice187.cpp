//WAF that accepts a character (ch) as parameter and outputs the next character in the English alphabet set


#include <iostream>
using namespace std;

char nextChar(char ch){

    if (ch == 'z'){
        return 'a';
    } else if (ch == 'Z'){
        return 'A';
    } else if ((ch >='a' && ch <='z') || (ch >='A' && ch <= 'Z')){
        return ch + 1;
    } else {
        return '@';
    }
}
int main(){

    char ch;

    cout << "Enter the character: ";
    cin >> ch;

    cout << "Next character: " << nextChar(ch) << endl;

    return 0;
}