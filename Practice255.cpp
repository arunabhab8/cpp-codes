// Count set bits of a number

#include <iostream>
using namespace std;

int main(){

    int num, rem, count=0;

    cout << "Enter the value of num: ";
    cin >> num;

    // while (num > 0){
    //     rem = num % 2;
    //     if (rem){
    //         count++;
    //     }
    //     num = num / 2;
    // }

    while (num > 0){
        count += (num & 1);
        num = num >> 1;
    }

    cout << "Count of set bits: " << count << endl;

    return 0;
}