// Sum of digits of a number using while loop

#include <iostream>
using namespace std;

int main(){

    int n, rem, sum=0;
    
    cout << "Enter the value of n: ";
    cin >> n;

    while (n>0){
        rem = n%10;
        sum = sum + rem;
        n = n/10;
    }

    cout << "Sum of digits: " << sum << endl;
    return 0;
}