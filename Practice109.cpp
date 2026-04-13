//Valid palindromes

#include <iostream>
using namespace std;

int main(){

    char ch[50];
    bool isPalindrome = true;

    cout << "Enter the string: ";
    cin.getline(ch, 50);

    int st=0, end = strlen(ch) - 1;

    while (st < end){
        if(ch[st] != ch[end]){
            isPalindrome = false;
            break;
        }
        st++;
        end--;
    }

    if (isPalindrome){
        cout << "Valid Palindrome" << endl;
    } else {
        cout << "Not a palindrome" << endl;
    }

    return 0;
}