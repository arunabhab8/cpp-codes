// Dynamic Memory Allocation

#include <iostream>
using namespace std;

void func(int size){

    int *ptr = new int[size];

    cout << "Enter elements of the array: ";

    for (int i=0; i<size; i++){
        cin >> ptr[i];
    }

    for (int i=0; i<size; i++){
        cout << *(ptr+i) << " ";
    }
    cout << endl;

    delete []ptr;
}

int main(){

    int size;

    cout << "Enter array size: ";
    cin >> size;

    func(size);

    return 0;
}
