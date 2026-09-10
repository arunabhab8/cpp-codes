// WAF to check if a number is palindrome or not


#include <iostream>
using namespace std;

bool isPalindrome(int num){

    int tempVal, rem, revNum = 0;

    tempVal = num;

    while (num > 0){
        rem = num % 10;
        revNum = (revNum * 10) + rem;
        num = num / 10;
    }

    if (revNum == tempVal){
        return true;
    } else{
        return false;
    }
}

int main(){

    int n;

    cout << "Enter the value of n: ";
    cin >> n;

    cout << isPalindrome(n) << endl;

    return 0;
}