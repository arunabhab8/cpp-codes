//Print the digits of a given number in reverse order


#include <iostream>
using namespace std;

int main(){

    int num, rem;

    cout << "Enter the value of num: ";
    cin >> num;

    while (num > 0){
        rem = num % 10;
        cout << rem << " ";
        num = num / 10;
    }
    cout << endl;

    return 0;
}