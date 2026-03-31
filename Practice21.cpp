// Check if a number is Prime or not

#include <iostream>
using namespace std;

int main(){

    int num, i;
    bool isPrime=true;
    cout << "Enter the number: ";
    cin >> num;
    if (num == 1)
    {
        isPrime=false;
    }
    for (i=2; i<num;i++){
        if (num%i == 0){
            isPrime=false;
            break;
        }
    }

    if (isPrime){
        cout << "Number is Prime" << endl;
    } else{
        cout<<"Number is not Prime" << endl;
    }


    return 0;
}