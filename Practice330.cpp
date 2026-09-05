/* Print below star pattern:
* * * *
* * *
* *
*

*/


#include <iostream>
using namespace std;


int main(){

    int i, j, n;
    
    cout << "Enter the value of n: ";
    cin >> n;

    for (i=0;i<n; i++){
        for (int j=i; j<n; j++){
            cout << "*" << " ";
        }
        cout << "\n";
    }
    return 0;
}