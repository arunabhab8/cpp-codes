// Last Occur using recursion

#include <iostream>
#include <vector>
using namespace std;

int lastOccur(vector<int> vec, int key, int index){

    if (index == vec.size()){
        return -1;
    }

    int ret = lastOccur(vec, key, index + 1);

    if (vec[index] == key && ret == -1){
        return index;
    }

    return ret;
}


int main(){

    vector<int> vec = {1, 2, 2, 3, 5};
    int key;

    cout << "Enter the value of key element: ";
    cin >> key;

    cout << lastOccur(vec, key, 0) << endl;

    return 0;
}