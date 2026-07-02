// Print the number of all 7's that are in the 2D array

#include <iostream>
using namespace std;

int main(){

    int arr[][3] =   {
                    {4, 7, 8},
                    {8, 8, 7}
                    };

    int count=0, n=2, m=3, key;

    cout << "Enter the value of key: ";
    cin >> key;

    for (int i=0; i<n ;i++){
        for (int j=0; j<m; j++){
            if (arr[i][j] == key){
                count++;
            }
        }
    }

    cout << "Count of key element is: " << count << endl;


    return 0;
}