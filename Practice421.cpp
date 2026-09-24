// StairCase Search


#include <iostream>
using namespace std;

bool stairCaseSearch(int mat[][4], int n, int m, int key){

    int i = 0, j = m-1;

    while (i<=n-1 && j>=0){
        if (mat[i][j] == key){
            cout << "Key found at position: " << "(" << i << "," << j << ")" << endl;
            return true;
        } else if (mat[i][j] < key){
            i++;
        } else{
            j--;
        }
    }
    cout << "Key not found" << endl;
    return false;

}

int main(){

    int n, m, key;

    cout << "Enter the value of key: ";
    cin >> key;

    int mat[4][4] = {   {10, 20, 30, 40},
                        {15, 25, 35, 45},
                        {27, 29, 37, 48},
                        {32, 33, 39, 50}};

    n = 4, m = 4;

   stairCaseSearch(mat, n, m, key);


    return 0;
}