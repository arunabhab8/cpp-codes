// Duplicate elements in array

#include <iostream>
using namespace std;

int main(){

    int arr[] = {1, 1, 1, 3, 3, 4, 3, 2, 4, 2};
    int n = sizeof(arr)/sizeof(arr[0]);

    int dupflag = 0;

    for (int i=0; i<n-1; i++){
        for (int j=i+1; j<n; j++){
            if (arr[i] == arr[j]){
                dupflag=1;
                break;
            }
        }
    }

    if (dupflag){
        cout << "Duplicate elements present" << endl;
    }else{
        cout << "Distinct elements present" << endl;
    }

    return 0;
}