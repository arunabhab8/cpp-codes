/* Print the below triangle pattern:

      1
     0 1
    1 0 1
   0 1 0 1
  1 0 1 0 1 
*/

#include <iostream>
using namespace std;

int main(){

    int i, j, k, n;
    bool val=true;
    cout << "Enter the value of n: ";
    cin >> n;

    for (i=1;i<=n;i++){
        for(j=1;j<=n-i;j++){
            cout << " ";
        }

        for (k=1;k<=i*2-1;k++){
            cout << val;
            val = !val;
        }
        cout << endl;
    }

    return 0;
}