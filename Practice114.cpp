// Dynamic memory allocation

#include <iostream>
using namespace std;

int main(){

    int size, x=1;

    cout << "Enter the size of array: ";
    cin >> size;

    int *arr = new int[size];

    for (int i=0; i<size; i++){
        *(arr+i) = x++;
    }

    for (int i=0; i<size; i++){
        cout << *(arr+i) << " ";
    }

    cout << endl;

    delete []arr;
 
    return 0;
}