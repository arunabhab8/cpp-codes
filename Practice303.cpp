//First Occurence of an element in a vector

#include <iostream>
#include <vector>
using namespace std;

int firstOccur(vector<int> vec, int key, int index){

    if (index == vec.size()){
        return -1;
    }

    if (vec[index] == key){
        return index;
    }

    return firstOccur(vec, key, index + 1);

}

int main(){

    vector<int> vec={1, 2, 3, 3, 3, 4};
    int key;

    cout << "Enter the value of key element: ";
    cin >> key;

    cout << firstOccur(vec, key, 0);
    cout << endl;

    return 0;
}