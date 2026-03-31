// Fibonacci Series: 0, 1, 1, 2, 3, 5, 8, 13, 21....

#include <iostream>
using namespace std;

int main(){

int n, a=0, b=1, next;
cout << "Enter the value of n: ";
cin >> n;

for (int i=1; i<=n; i++){
    cout << a << " ";
    next = a+b;
    a=b;
    b=next;
}
cout << endl;

return 0;   
}

/*

a=0, b=1, print: a (0), next = 0+1=1, a=1, b=1
a=1, b=1, print: a (1), next = 1+1=2, a=1, b=2
a=1, b=2, print: a (1), next = 1+2=3, a=2, b=3
a=2, b=3, print: a (2), next = 2+3=5, a=3, b=5

*/





