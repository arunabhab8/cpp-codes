// WAF to check if a number is palindrome or not

#include <iostream>
using namespace std;

bool isPalindrome(int n){

    int rem, revNumber = 0, temp;

    temp = n;

    while (n > 0){
        rem = n % 10;
        revNumber = revNumber * 10 + rem;
        n /= 10;
    }

    if (temp == revNumber){
        return true;
    } else {
        return false;
    }
}

int main(){

    int num;

    cout << "Enter the number: ";
    cin >> num;

    cout << isPalindrome(num) << endl;
    return 0;
}