// Get ith bit of a number

#include <iostream>
using namespace std;

int main(){

    int num, i;

    cout << "Enter the value of num: ";
    cin >> num;

    cout << "Enter the value of i: ";
    cin >> i;

    int res = (num & (1 << i));

    if (res){
        cout << "Ith bit is 1";
    } else{
        cout << "Ith bit is 0";
    }

    cout << endl;

    return 0;
}