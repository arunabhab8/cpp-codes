// Spiral Matrix code

#include <iostream>
using namespace std;

int main(){

    int n, m;

    cout << "Enter the number of rows: ";
    cin >> n;

    cout << "Enter the number of cols: ";
    cin >> m;

    int arr[n][m], i, j, count=0, totalElements=0, srow=0, erow=n-1, scol=0, ecol=m-1;

    totalElements = n * m;

    for (i=0; i<n; i++){
        for (j=0; j<m; j++){
             cin >> arr[i][j];
        }
    }

    for (i=0; i<n; i++){
        for (j=0; j<m; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    while (count < totalElements){

        for (j=scol; j<=ecol && count < totalElements; j++){
            cout << arr[srow][j] << " ";
            count++;
        }
        srow++;

        for (i=srow; i<=erow && count < totalElements; i++){
            cout << arr[i][ecol] << " ";
            count++;
        }
        ecol--;

        for (j=ecol; j>=scol && count < totalElements; j--){
            cout << arr[erow][j] << " ";
            count++;
        }
        erow--;

        for (i=erow; i>=srow && count < totalElements; i--){
            cout << arr[i][scol] << " ";
            count++;
        }
        scol++;
    }

    cout << endl;

    return 0;
}