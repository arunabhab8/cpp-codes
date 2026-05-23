// WAF to print the largest of 3 numbers


#include <iostream>
using namespace std;

int printLargest (int a, int b, int c){

    if (a>=b && a>=c){
        return a;
    } else if (b>=c){
        return b;
    } else{
        return c;
    }

}
int main(){

    int a, b, c;

    cout << "Enter the value of a: ";
    cin >> a;

    cout << "Enter the value of b: ";
    cin >> b;

    cout << "Enter the value of c: ";
    cin >> c;

    cout << "Largest of 3 numbers is: " << printLargest(a,b,c) << endl;

    return 0;
}