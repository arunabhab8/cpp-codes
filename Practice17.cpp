// Armstrong number

#include <iostream>
using namespace std;

int main(){

    int num, sum=0, rem, temp;

    cout << "Enter the number: ";
    cin >>num;
    temp=num;
    while (num > 0){
        rem=num%10;
        sum=sum+rem*rem*rem;
        num=num/10;
    }
    if (temp == sum){
        cout << "Number is Armstrong" << endl;
    }else{
        cout << "Number is not Armstrong" << endl;
    }

    return 0;
}
