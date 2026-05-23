// Last Occurrence of an element in a vector


#include <iostream>
#include <vector>

using namespace std;

int lastOccur(vector<int> arr, int i, int target){

    if (i == -1){
        return -1;
    } else if (arr[i] == target){
        return i;
    } else{
        return lastOccur(arr, i-1, target);
    }

}
int main(){

    vector<int> arr = {1, 2, 3, 3, 4};
    int target = 3;
    cout << lastOccur(arr, arr.size()-1, target) << endl;

    return 0;
}