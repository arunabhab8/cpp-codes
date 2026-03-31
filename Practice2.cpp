// Practice for type castings, implicit and explicit

#include <iostream>
using namespace std;

int main(){

    char ch='A';
    int a = 10;
    float b=20;
    double c=30;

    cout << ch << endl; // 'A'
    cout << ch + 1 << endl; // 66
    cout << ch + ch << endl; // 65 + 65 = 130
    cout << ch + 'A' << endl; // 65 + 65 = 130
    cout << (char)(ch + 1) << endl; // 'B'
    cout << (a/b) << endl; //0.5
    cout << b/c << endl; //implicitly type casted to double and printed

    cout << (a/5) << endl; // 2
    cout << float(a)/7 << endl; // value of a is explicitly type casted to float data type

    return 0;
}