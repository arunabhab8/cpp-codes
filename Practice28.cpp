/* Print below pattern:

* * * * *
*       *
*       *
* * * * *
*/

#include <iostream>
using namespace std;

int main(){

    int n, i ,j;
    cout << "Enter the value of n: ";
    cin >> n;

    for (i=1;i<=n;i++){
        cout << "*" ;
        for (j=1;j<n;j++){
            if (i==1 || i==n){
                cout << "*";
            }
            else{
                cout << " ";
            }
        }
        cout << "*";
        cout << endl;
    }

    return 0;
}