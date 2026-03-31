// Spiral Matrix

#include <iostream>
using namespace std;

void printSpiralMatrix(int arr[][4], int n, int m){

    int srow=0, scol=0, ecol=m-1, erow=n-1;
    int totalElements = 0;
    
    while (totalElements < n*m){

        //top
        for(int j=scol; j<=ecol && totalElements < n*m; j++){
            cout << arr[srow][j] << " ";
            totalElements++;
         }
         srow++;

        //right
        for (int i=srow; i<=erow && totalElements < n*m; i++){
            cout << arr[i][ecol] << " ";;
            totalElements++;
        }
        ecol--;

        // bottom
        for(int j=ecol; j>=scol && totalElements < n*m; j--){
            cout << arr[erow][j] << " ";;
            totalElements++;
        }
        erow--;

        //left
        for(int i=erow; i>=srow && totalElements < n*m; i--){
            cout << arr[i][scol] << " ";;
            totalElements++;
        }
        scol++;
    }
    cout << endl;
}

int main(){

    int arr[4][4] = {
                    {1,2,3,4},
                     {5,6,7,8},
                     {9,10,11,12},
                     {13,14,15,16}
                    };
    int arr2[3][4] = {
                    {1,2,3,4},
                     {5,6,7,8},
                     {9,10,11,12}
                    };

    printSpiralMatrix(arr, 4, 4);                   
    printSpiralMatrix(arr2, 3, 4);

    return 0;
}