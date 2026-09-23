// Spiral Matrix

#include <iostream>
using namespace std;

int main(){

    int arr[4][4], n, m, totalElements = 0, strow = 0, stcol = 0, endrow, endcol;
    n = 2, m = 3;
    endrow = n - 1, endcol = m - 1;

    for (int i=0; i<n; i++){
        for (int j=0; j<m; j++){
            cin >> arr[i][j];
        }
    }

    for (int i=0; i<n; i++){
        for (int j=0; j<m; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    while (totalElements < n*m){
        
        for (int i=stcol; i<=endcol && totalElements < n*m; i++){
            cout << arr[strow][i] << " ";
            totalElements++;
        }
        strow++;

        for (int i=strow; i<=endrow && totalElements < n*m; i++){
            cout << arr[i][endcol] << " ";
            totalElements++;
        }
        endcol--;

        for (int i=endcol; i>=stcol && totalElements < n*m; i--){
            cout << arr[endrow][i] << " ";
            totalElements++;
        }
        endrow--;

        for (int i=endrow; i>=strow && totalElements < n*m; i--){
            cout << arr[i][stcol] << " ";
            totalElements++;
        }
        stcol++;
    }

    return 0;
}