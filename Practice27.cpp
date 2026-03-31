/* Print below pattern:

A
B C
D E F 
G H I J
*/
#include <iostream>
using namespace std;

int main(){
int n, i, j;
char ch = 'A';
cout << "Enter the value of n: ";
cin >> n;

for (i=1;i<=n;i++){
    for(j=1;j<=i;j++){
        cout << ch++ << " ";
    }
    cout << endl;
}
    return 0;
}