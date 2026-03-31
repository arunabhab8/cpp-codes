// Reverse a given number

#include <iostream>
using namespace std;

int main(){

    int num, sum=0, rem;
    cout << "Enter the number: ";
    cin >> num;
    while (num > 0){
        rem=num%10;
        sum=(sum*10)+rem;
        num=num/10;
    }
    cout << "Reverse number is: " << sum << endl; 

    return 0;
}

// 12345

// num=12345, rem = 5, sum=5
// num=1234, rem = 4, sum=50 + 4 = 54
// num=123, rem = 3, sum= 540+ 3 = 543
// num=12, rem = 2, sum = 5430 + 2 = 5432
// num=1, rem= 1, sum = 54320 + 1 = 54321
// num=0, ....