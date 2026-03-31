// Linear search

#include <iostream>
using namespace std;

int linearSearch(int arr[], int n, int key){

    for(int i=0; i<n; i++){
        if (arr[i] == key){
            return i;
        }
    }
    return -1;

}

int main(){

    int n, key;
    cout << "Enter the length of the array: ";
    cin >> n;
    cout << "Enter the value of key: ";
    cin >> key;
    int arr[n];
    
    for (int i=0; i<n; i++){
        cin >> arr[i];
    }

    cout << "Index is: " << linearSearch (arr, n, key)<< endl;
    return 0;
}