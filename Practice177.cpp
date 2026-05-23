// Print 0-1 Triangle

/*

1
0 1
1 0 1
0 1 0 1
1 0 1 0 1

*/


#include <iostream>
using namespace std;

int main(){

    int n;
    bool val;

    cout << "Enter the value of n: ";
    cin >> n;

    for (int i=1; i<=n; i++){
        val = false;
        if (i%2 != 0){
            val = true;
        }
        for (int j=1; j<=i; j++){
            cout << val;
            val = !val;
        }
        cout << endl;
    }

    return 0;
}
