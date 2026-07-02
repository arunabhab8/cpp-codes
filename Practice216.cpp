// In-built sorting


#include <iostream>
using namespace std;


int main(){

    int arr[] = {8, 7, 1, 90, 78, -200, 900};

    int n = sizeof(arr)/sizeof(arr[0]);
    //sort(arr, arr+7);

    sort(arr, arr+7, greater<int>());

    for (int i=0; i<n; i++){
        cout << arr[i] << " ";
    }

    cout << endl;

    return 0;
}