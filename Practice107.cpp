// Matrix pointers

#include <iostream>
using namespace std;

void printMatrix(int (*mat)[4], int n, int m){

    cout << mat << endl;
    cout << &mat[0][0] << endl;
    cout << &mat[0][1] << endl;
    cout << *(mat)+1 << endl;

    cout << *(*(mat + 2) + 2) << endl;

    for (int i=0; i<n; i++){
        for (int j=0; j<m; j++){
            cout << *(*(mat+i) + j) << " ";
        }
        cout << endl;
    }

}

int main(){

    int mat[4][4] = { 
                        {1, 2, 3, 4},
                        {5, 6, 7, 8},
                        {9, 10, 11, 12},
                        {13, 14, 15, 16}
                    };

    printMatrix(mat, 4, 4);


    return 0;
}