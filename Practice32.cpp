// WAF to print factorial of a number

#include <iostream>
using namespace std;

int fact(int);


int main(){

    int num;
    cout << "Enter the number: ";
    cin >> num;
    cout << "Factorial of " << num << " is: " << fact(num) << endl;
    return 0;
}

int fact(int a){
    int i,fact=1;
    for(i=1;i<=a;i++){
        fact=fact*i;
    }
    return fact;
}