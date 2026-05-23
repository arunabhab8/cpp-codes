// A number is odd or even


#include <iostream>
using namespace std;

int main(){

    int num;

    cout << "Enter the value of n: ";
    cin >> num;

    if (num%2 == 0){
        cout << "Entered number is even" << endl;
    } else {
        cout << "Entered number is odd" << endl;
    }

    return 0;
}