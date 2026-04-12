// Spiral Matrix

#include <iostream>
using namespace std;

void printSpiralMatrix(int arr[][4], int n, int m){

    int srow=0, scol=0, erow = n-1, ecol = m-1, totalElements = 0;

    while (totalElements < n*m){

        for(int i=scol; i<=ecol && totalElements < n*m; i++){
            cout << arr[srow][i] << " ";
            totalElements++;
        }
        srow++;

        for(int i=srow; i<=erow && totalElements < n*m; i++){
            cout << arr[i][ecol] << " ";
            totalElements++;
        }
        ecol--;

        for(int i=ecol; i>=scol && totalElements < n*m; i--){
            cout << arr[erow][i] << " ";
            totalElements++;
        }
        erow--;

        for(int i=erow; i>=srow && totalElements < n*m; i--){
            cout << arr[i][scol] << " ";
            totalElements++;
        }
        scol++;
    }

    cout << endl;
}


int main(){

    int arr[4][4] = {{1,2,3,4}, {5,6,7,8}, {9,10,11,12}, {13,14,15,16}};

    printSpiralMatrix(arr, 4, 4);


    return 0;
}