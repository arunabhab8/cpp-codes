// Last Occurence of an element in a vector

#include <iostream>
#include <vector>

using namespace std;

int lastOccur(vector<int> vec, int key, int index){

    int ret;

    if (index == vec.size()){
        return -1;
    }

    ret = lastOccur(vec, key, index + 1);

    if (vec[index] == key && ret == -1){
        return index;
    }else{
        return ret;
    }
}

int main(){

    vector<int> vec = {1, 2, 3, 3, 3, 4};
    int key;

    cout << "Enter the value of key element: ";
    cin >> key;

    cout << lastOccur(vec, key, 0) << endl;

    return 0;
}
