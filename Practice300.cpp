// Fibonacci series

#include <iostream>
using namespace std;

int main(){

    int first=0, second=1, next;

    for (int i=0; i<10; i++){

        cout << first << " ";
        next = first + second;
        first = second;
        second = next;

    }

    cout << endl;
    
    return 0;
}