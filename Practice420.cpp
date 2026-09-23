// Print sum of elements in 2nd row of matrix

#include <iostream>
using namespace std;

int sumofElements(int nums[][3], int n, int m){

    int sum = 0;

    int i = 1;
    for (int j=0; j<m; j++){
        sum = sum + *(*(nums + i) + j);
    }

    return sum;
}

int main(){

    int nums[][3] = {    {1, 4, 9},
                        {11, 4, 3},
                        {2, 2, 3}};

    int n = 3, m = 3;

    cout << sumofElements(nums, n, m) << endl;
    

    return 0;
}