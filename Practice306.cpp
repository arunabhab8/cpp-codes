// First Occurence using recursion

#include <iostream>
#include <vector>
using namespace std;

int firstOccur(vector<int> vec, int key, int index){

    if (index == vec.size()){
        return -1;
    }

    if(vec[index] == key){
        return index;
    }

   return firstOccur(vec, key, index + 1);
}

int main(){

    vector<int> vec = {1, 2, 2, 5};
    int key;

    cout << "Enter the value of key: ";
    cin >> key;

    cout << firstOccur(vec, key, 0) << endl;

    return 0;
}