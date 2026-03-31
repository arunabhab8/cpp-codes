// Number is Armstrong or not

#include<iostream>
using namespace std;

int main(){

    int i, n, rem, sum=0, temp;
    cout << "Entet the number: ";
    cin >> n;
    temp=n;

    while (n>0){

        rem=n%10;
        sum+=(rem * rem * rem);
        n/=10;
    }

    if (temp==sum){
        cout << "Armstrong number" << endl;
    }
    else{
        cout << "Not an Armstrong number" << endl;
    }


    return 0;
}