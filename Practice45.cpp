// Reference variables

#include<iostream>
using namespace std;

// void swap(int *a, int *b){
//     *a = *a + *b;
//     *b = *a - *b;
//     *a = *a - *b;
// }

// int main(){

//     int num1, num2;
//     cout << "Enter the value of num1: ";
//     cin >> num1;
//     cout << "Enter the value of num2: ";
//     cin >> num2;

//     swap(&num1, &num2);

//     cout << "Value of num1: " << num1 << endl;
//     cout << "Value of num2: " << num2 << endl;

//     return 0;
//}

void swap(int &a, int &b){
    a = a + b;
    b = a - b;
    a = a - b;
}

int main(){

    int num1, num2;
    cout << "Enter the value of num1: ";
    cin >> num1;
    cout << "Enter the value of num2: ";
    cin >> num2;
    int &a = num1;
    int &b = num2;

    swap(a, b);

    cout << "Value of num1: " << num1 << endl;
    cout << "Value of num2: " << num2 << endl;

    return 0;
}