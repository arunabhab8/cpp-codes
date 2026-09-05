// Maximum of 3 numbers

#include <iostream>
using namespace std;

int main(){

    int a, b, c;

    cout << "Enter the numbers: ";
    cin >> a >> b >> c;

    if (a>=b && a>=c){
        cout << "Maximum: " << a << endl;
    }
    else if (b>=c){
        cout << "Maximum: " << b << endl;
    }
    else{
        cout << "Maximum: " << c << endl;
    }

    return 0;
}