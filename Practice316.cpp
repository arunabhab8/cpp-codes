// First Occurrence of an element in a vector using recursion


#include <iostream>
#include <vector>
using namespace std;

int firstOccur(const vector<int>& vec, int key, int idx){

    if (idx == vec.size()){
        return -1;
    }

    if (vec[idx] == key){
        return idx;
    }

    return firstOccur(vec, key, idx+1);
}

int main(){

    vector<int> vec = {1, 5, 8, 10, 10, 25, 56, 10, 80, 10, 67, 10, 45};

    int key;
    cout << "Enter the value of key: ";
    cin >> key;

    cout << firstOccur(vec, key, 0) << endl;

    return 0;
}