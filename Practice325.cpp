// Maximum of 2 Numbers

#include <iostream>
using namespace std;

int main(){

    int a, b;

    cout << "Enter the value of a & b: ";
    cin >> a >> b;

    if (a > b){
        cout << "Maximum is: " << a << endl;
    }
    else{
        cout << "Maximum is: " << b << endl;
    }
    return 0;
}