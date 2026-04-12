// Inbuilt sort: O(nlogn)

#include <iostream>
using namespace std;

int main(){

    int arr[] = {2, -3, 6, -5, 4, 2};
    int n = sizeof(arr)/sizeof(arr[0]);

    //sort(arr, arr+n);
    sort(arr, arr+n, greater<int>());

    for (int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}