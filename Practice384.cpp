// WAF that prints largest of 3 numbers


#include <iostream>
using namespace std;

int largestNum(int a, int b, int c){

    int largest;

    if (a>=b && a>=c){
        largest = a;
    } else if (b >= c){
        largest = b;
    } else{
        largest = c;
    }

    return largest;
}


int main(){

    int a, b, c;

    cout << "Enter the value of a: ";
    cin >> a;

    cout << "Enter the value of b: ";
    cin >> b;

    cout << "Enter the value of c: ";
    cin >> c;

    cout << largestNum(a, b, c) << endl;

    return 0;
}