// Sum and Product of 2 Nos

#include <iostream>
using namespace std;

int main(){

    int a, b, sum, product, diff;
    cout << "Enter the value of a: ";
    cin >> a;
    cout << "Enter the value of b: ";
    cin >> b;

    sum = a + b;
    product = a * b;
    diff = a - b;

    cout << "Sum: " << sum << endl;
    cout << "Product: " << product << endl;
    cout << "Difference: " << diff << endl;

    return 0;
}