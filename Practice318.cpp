// Last Occurence of an element in a vector, different way

#include <iostream>
#include <vector>
using namespace std;

int lastOccur(const vector<int>& vec, int key, int idx){

    if (idx == -1){
        return -1;
    }

    if (vec[idx] == key){
        return idx;
    }

    return lastOccur(vec, key, idx-1);
    
}

int main(){

    int key;

    cout << "Enter the value of the key: ";
    cin >> key;

    vector<int> vec = {1, 5, 8, 10, 10, 25, 56, 10, 80, 10, 67, 10, 45};

    int n = vec.size();

    cout << lastOccur(vec, key, n-1) << endl;

    return 0;
}