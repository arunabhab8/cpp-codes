// Print sum of numbers in 2nd row of nums array


#include <iostream>
using namespace std;

int main(){

    int num[][3] = {    {1, 4, 9},
                        {11, 4, 3},
                        {2, 2, 3}
                    };
    
    int n=3, m=3, sum=0;

    for (int i=0; i<n; i++){
        for (int j=0; j<m; j++){
            if (i==1){
                sum+= num[i][j];
            }
        }
    }

    cout << "Sum: " << sum << endl;

    return 0;
}