// Unary Operators (Part-2)

#include <iostream>
using namespace std;

int main(){

    int a = 10;

    int b = a++;

    cout << "a: " << a << endl; //11 
    cout << "b: " << b << endl; //10

    int c = ++a;
  

    cout << "a: " << a << endl; //12
    cout << "c: " << c << endl; //12

    int d = a--;
    
    cout << "a: " << a << endl; //11
    cout << "d: " << d << endl; //12

    return 0;
}