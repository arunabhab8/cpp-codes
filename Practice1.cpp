// Practice for const keyword and macros

#include<iostream>
using namespace std;
#define X 25

int main(){

    int number;
    number=25;

    const int number1 = 30;
    const float number2 =30.001;
    const char ch = 'A';

    cout << "number: " << number << endl;
    cout << "number2: " << number2 << endl;
    cout << "char: " << ch << endl;
     cout << "ASCII of char: " << ch + 0 << endl;
    cout << "Macro: " << X<< endl;

    return 0;
}


// Notes:

// const int occupies memory and stores the value in that memory location. On runtime the value is fetched from memory
// Macro doesn't occupy any memory and the value is substituted as part of compile time as it is pre-processor directive