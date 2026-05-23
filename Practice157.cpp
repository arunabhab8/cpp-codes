// Armstrong Number


#include <iostream>
using namespace std;

int main(){

    int num, rem, finalNumber = 0, temp;

    cout << "Enter the number: ";
    cin >> num;

    temp = num;
    while (num > 0){
        rem = num % 10;
        finalNumber = finalNumber + (rem * rem * rem);
        num = num / 10;
    }

    if (finalNumber == temp){
        cout << "Number is Armstrong" << endl;
    }else{
        cout << "Number is not Armstrong" << endl;
    }
    
    return 0;
}