// Check if a char array is palindrome or not

#include <iostream>
using namespace std;

int main(){

    char arr[20];
    cin.getline (arr, 20);
    int n = strlen(arr);
    bool isPalindrome = true;

    int st=0, end=n-1;

    while (st < end){
        if (arr[st] != arr[end]){
            isPalindrome = false;
            break;
        }
        st++;
        end--;
    }

    if (isPalindrome){
        cout << "String is palindrome" << endl;
    } else{
        cout << "String is not palidrome" << endl;
    }
          
    return 0;
}