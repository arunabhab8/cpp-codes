// Swapping two values using pointers

#include <iostream>
using namespace std;

void swap(int *a, int *b){

    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main(){

    int a=10, b=20;
    cout << "Before swap: a & b: " << a << " " << b << endl;
    swap(&a, &b);
    cout << "After swap: a & b: " << a << " " << b << endl;
    return 0;

}