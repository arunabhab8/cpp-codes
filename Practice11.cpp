/* Function to print if a number is prime or not */

#include<iostream>
using namespace std;

bool isPrime(int a){

    int i;
    bool isTrue=true;
    for(i=2; i*i <=a; i++){
        if (a%i == 0){
            isTrue=false;
        } 
    }
    if (isTrue){
        return true;
    }else{
        return false;
    }
}

int main (){
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    cout << "isPrime: " << isPrime(n) << endl;
    return 0;
}