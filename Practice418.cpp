// Matrix Functions

#include <iostream>
using namespace std;

void printMat(int mat[][4], int n, int m){

    for (int i=0; i<n; i++){
        for (int j=0; j<m; j++){
            //cout << mat[i][j] << " ";
            cout << *(*(mat + i) + j) << " ";
        }
        cout << endl;
    }
}

int main(){

int mat[4][4] = {       {1, 2, 3, 4},
                        {5, 6, 7, 8},
                        {9, 10, 11, 12},
                        {13, 14, 15, 16}};

int n = 4, m = 4;
                        

printMat(mat, n, m);


    return 0;
}