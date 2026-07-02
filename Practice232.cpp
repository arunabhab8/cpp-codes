// Diagonal Sum, practice

#include <iostream>
using namespace std;

int main(){

    int arr[4][4] = {   {1, 2, 3, 4},
                        {5, 6, 7, 8},
                        {9, 10, 11, 12},
                        {13, 14, 15, 16}};
    
    int arr2[3][3] = {   {1, 2, 3},
                        {4, 5, 6},
                        {7, 8, 9}};
    
    int sum=0, i, j, n, m;
    n=3, m=3;

    // for (i=0; i<n; i++){
    //     sum += arr2[i][i];
    // }

    // j=m-1;

    // for (i=0; i<n; i++){
    //     if (i!=j){
    //         sum += arr2[i][j];
    //     }
    //     j--;
    // }

    j=m-1;
    for (int i=0; i<n; i++){
        sum += arr2[i][i];
        if (i!=j){
            sum += arr2[i][j];
        }
        j--;
    }

    cout << "Diagonal Sum: " << sum << endl;

    return 0;
}