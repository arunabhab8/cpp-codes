// Print all 7's that are in 2D array

#include <iostream>
using namespace std;

int countKey(int (*arr)[4], int n, int m, int key){

    int count = 0;

    for (int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if (arr[i][j] == key){
                count++;
            }
        }
    }

    return count;
}

int main(){

    int key;

    cout << "Enter the value of key: ";
    cin >> key;

    int arr[4][4];

    int n = 4, m = 4;

    for (int i=0; i<n; i++){
        for (int j=0; j<m; j++){
            cin >> *(*(arr+i) + j);
        }
    }

    cout << countKey(arr, n, m, key) << endl;


    return 0;
}