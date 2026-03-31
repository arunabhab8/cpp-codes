// Product of two numbers using function

#include<iostream>
using namespace std;

int product(int a, int b){
    return (a * b);

}
int main(){

    int num1, num2, pr;
    cout << "Enter num1: ";
    cin >> num1;
    cout << "Enter num2: ";
    cin >> num2;
    pr = product(num1, num2);
    cout << "product: " << pr << endl;
    return 0;
}