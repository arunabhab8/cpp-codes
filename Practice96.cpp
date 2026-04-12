// Print sub-arrays of an array

#include <iostream>
using namespace std;

int main(){

    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr)/sizeof(arr[0]);

    int st, end, i;

    for(st=0; st<n; st++){
        for(end=st; end<n; end++){
            //cout << "(" << st << "," << end << ")" << " ";
            for(int i=st; i<=end; i++){
                cout << arr[i];
            }
            cout << " ";
        }
        cout << endl;
    }
    cout << endl;

    return 0;
}