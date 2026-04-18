// Bit Manupulation

#include <iostream>
using namespace std;

int main(){

    int num;
    cout << "Enter the number: ";
    cin >> num;

    cout << ~6 << endl;

    cout << (3 << 2) << endl; //12
    cout << (3 >> 2) << endl; //0
    
    if (num & 1){
        cout << "Odd" << endl;
    } else{
        cout << "Even" << endl;
    }
 
    return 0;
}