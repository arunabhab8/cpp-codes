// Average of 3 subjects

#include <iostream>
using namespace std;

int main(){

    float sub1, sub2, sub3, avg;

    cout << "Enter the marks of sub1: ";
    cin >> sub1;

    cout << "Enter the marks of sub2: ";
    cin >> sub2;

    cout << "Enter the marks of sub3: ";
    cin >> sub3;

    avg = (sub1 + sub2 + sub3)/3;

    cout << "Average of 3 subjects: " << avg << endl;

    return 0;
}