// WAF to accept a character as parameter and returns the char that occurs after ch in english alphabet

#include <iostream>
using namespace std;

char retch(char);

int main(){

    char ch;
    cout << "Enter the value of ch: ";
    cin >> ch;

    cout << retch(ch) << endl;
    return 0;
}

char retch(char ch){
    if (ch=='z'){
        return 'a';
    } else if (ch=='Z'){
        return 'A';
    } else{
        return ++ch;
    }
}