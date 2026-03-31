// Check if the number is palindrome or not

#include <iostream>
using namespace std;

int main(){

    int n, rem, res=0, temp;
    cout << "Enter the number: ";
    cin >> n;

    temp=n;

    while (n > 0){

        rem=n%10;
        res=res*10+rem;
        n/=10;
    }

    cout << "Reverse number is: " << res <<endl;

    if (temp==res){
        cout << "Number is palindrome" << endl;
    } else{
        cout << "Number is not palindrome" << endl;
    }

    return 0;
}