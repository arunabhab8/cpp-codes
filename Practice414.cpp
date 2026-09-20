// 2D arrays

#include <iostream>
using namespace std;

int main(){

    int arr[5][4] ={    {100, 200, 300, 1},
                        {400, 500, 600, 2},
                        {700, 800, 900, 3},
                        {1000, 1100, 1200, 4},
                        {1300, 1400, 1500, 5}
                    };

    for (int i=0; i<5; i++){
        for (int j=0; j<4; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    int rows, cols;

    cout << "Enter the number of rows: ";
    cin >> rows;

    cout << "Enter the number of cols: ";
    cin >> cols;

    int arr1[rows][cols];

    for (int i=0; i<rows; i++){
        for (int j=0; j<cols; j++){
            cin >> arr1[i][j];
        }
    }

    for (int i=0; i<rows; i++){
        for (int j=0; j<cols; j++){
            cout << arr1[i][j] << " ";
        }
        cout << endl;
    }


    return 0;
}