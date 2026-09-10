// Function OverLoading


#include <iostream>
using namespace std;

int sum(int a, int b){

    return (a+b);
}

double sum (double a, double b){
    
    return (a + b);
}

int main(){

    double a, b;

    cout << "Enter the value of a: ";
    cin >> a;

    cout << "Enter the value of b: ";
    cin >> b;

    cout << sum (a, b) << endl;

    return 0;
}