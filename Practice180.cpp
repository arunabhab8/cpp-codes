// WAF to print factorial of a number

#include <iostream>
using namespace std;

int fact(int num){

    if (num < 0){
        return -1;
    }
    int fact = 1;

    for (int i=1; i<=num; i++){
        fact = fact * i;
    }

    return fact;
}
int main(){

    int num;
    cout << "Enter the number: ";
    cin >> num;

    cout << "Factorial is: " << fact(num) << endl;
    return 0;
}