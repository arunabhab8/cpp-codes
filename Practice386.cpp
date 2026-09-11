// WAP to print fibonacci series


#include <iostream>
using namespace std;

int main(){

    int first = 0, second = 1, next, n;

    cout << "Enter the value of n: ";
    cin >> n;

    for (int i=1; i<=n; i++){
        cout << first << " ";
        
        next = first + second;
        first = second;
        second = next;
    }
    cout << endl;

    return 0;
}