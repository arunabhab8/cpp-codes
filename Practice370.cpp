/* Print Floy'd triange

1
23
456
78910
1112131415
*/

#include <iostream>
using namespace std;

int main(){

    int n, val = 1;

    cout << "Enter the value of n: ";
    cin >> n;

    for (int i=1; i<=n; i++){
        for (int j=1; j<=i; j++){
            cout << val++;
        }
        cout << endl;
    }

    return 0;
}