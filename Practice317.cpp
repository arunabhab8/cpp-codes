// Last Occurence of an element in a vector


#include <iostream>
#include <vector>
using namespace std;

int lastOccur(const vector<int>& vec, int key, int idx){

    if (idx == vec.size()){
        return -1;
    }

    int ret = lastOccur(vec, key, idx+1);

    if (ret == -1 && vec[idx] == key){
        return idx;
    }else{
        return ret;
    }
}

int main(){

    int key;

    cout << "Enter the value of the key: ";
    cin >> key;

    vector<int> vec = {1, 5, 8, 10, 10, 25, 56, 10, 80, 10, 67, 10, 45};

    cout << lastOccur(vec, key, 0) << endl;

    return 0;
}