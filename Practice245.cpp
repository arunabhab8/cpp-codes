// Dynamically allocating 2D arrays

#include <iostream>
using namespace std;

int main(){

    int rows, cols;

    cout << "Enter the number of rows: ";
    cin >> rows;

    cout << "Enter the number of cols: ";
    cin >> cols;

    int* *mat = new int* [rows]; // Allocated 2D array

    for (int i=0; i<rows; i++){
        mat[i] = new int[cols];
    }

    int x=0;

    for (int i=0; i<rows; i++){
        for (int j=0; j<cols; j++){
            mat[i][j] = x++;
        }
    }

    for (int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            cout << *(*(mat+i)+j) << endl;
        }
    }

    for (int i=0; i<rows; i++){
        delete[] mat[i];
    }

    delete[] mat;
    
    return 0;
}