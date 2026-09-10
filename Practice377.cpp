// WAF to print if a number is prime or not


#include <iostream>
using namespace std;

bool isPrime(int num){

    if (num < 2){
        return false;
    }

    for (int i=2; i*i<=num; i++){
        if (num % i == 0){
            return false;
        }
    }

    return true;
}

int main(){

    int num;

    cout << "Enter the value of num: ";
    cin >> num;

    bool res = isPrime(num);

    if (res){
        cout << "Entered number is a prime number" << endl;
    } else{
        cout << "Entered number is not a prime number" << endl;
    }

    return 0;
}