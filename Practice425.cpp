// Valid Palindrome


#include <iostream>
#include <cstring>
using namespace std;

bool validPalindrome(char *word, int n){

    bool isPalindrome = true;
    int st = 0, end = n - 1;

    while (st <= end){
        if (word[st] != word[end]){
            isPalindrome = false;
            break;
        }
        st++;
        end--;
    }

    return isPalindrome;
}

int main(){

    char word[50];

    cin.getline(word, 50);

    cout << validPalindrome(word, strlen(word)) << endl;

    return 0;
}