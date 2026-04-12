// Diagonal Sum

#include <iostream>
using namespace std;

void printDiagonalSum(int arr[][3], int n, int m){

    int sum = 0;

    for(int i=0; i<n; i++){
        for(int j=0; j<m;j++){
            if ((i==j) || (j==n-i-1)){
                sum = sum + arr[i][j];
            }
        }
    }

    cout << "Sum: " << sum << endl;


}


int main(){

    int arr[3][3] = {{1,2,3}, {4,5,6}, {7,8,9}};

    printDiagonalSum(arr, 3, 3);


    return 0;
}