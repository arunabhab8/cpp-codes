// First occurrene of an element in a vector


#include <iostream>
#include <vector>

using namespace std;

int firstOccurrence(vector<int> vec, int key, int idx){

    if (idx == vec.size()){
        return -1;
    }

    if (vec[idx] == key){
        return idx;
    }

    return firstOccurrence(vec, key, idx+1);
}

int main(){

    vector<int> vec (5);

    int key;

    cout << "Enter the key element: ";
    cin >> key;

    for (int i=0; i<vec.size(); i++){
        cin >> vec[i];
    }

    cout << firstOccurrence(vec, key, 0) << endl;

    return 0;
}