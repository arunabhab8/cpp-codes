// Function OverLoading, Calculator

#include <iostream>

using namespace std;


class Calculator{

public:
int add(int a, int b, int c){
    return (a+b+c);
}

int add(int a, int b){
    return (a+b);
}

double add (double a, double b){
    return (a+b);
}

};

int main(){

    Calculator c1;
    cout << c1.add(1,2,3) << endl;
    cout << c1.add(5,10) << endl;
    cout << c1.add(4.5, 11.51) << endl;

    return 0;
}