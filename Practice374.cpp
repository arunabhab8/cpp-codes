// WAF to print if a number is odd or even


#include <iostream>
using namespace std;

bool isOddEven(int num){

    if (num % 2 == 0){
        return true;
    } else {
        return false;
    }
}

int main(){

    int num;

    cout << "Enter the value of num: ";
    cin >> num;

    bool res = isOddEven(num);
    if (res){
        cout << "Number is even" << endl;
    }else {
        cout << "Number is odd" << endl;
    }

    return 0;
}