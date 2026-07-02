// Pair Sum using vectors

#include <iostream>
#include <vector>

using namespace std;

vector<int> targetSum(vector<int> vec, int key){

    vector<int> res;

    int st=0, end=vec.size()-1;

    while(st < end){
        if (vec[st] + vec[end] == key){
            res.push_back(st);
            res.push_back(end);
            break;
        } else if (vec[st] + vec[end] > key){
            end--;
        }else{
            st++;
        }
    }

    return res;
}

int main(){

    int key;
    vector<int> vec = {2, 7, 11, 15};

    cout << "Enter the target: ";
    cin >> key;

    vector<int> res = targetSum(vec, key);

    if (res.empty()){
        cout << "Key not found" << endl;
    } else{
    for(int i=0; i<res.size(); i++){
        cout << res[i] << " ";
    }
}

    cout << endl;

    return 0;
}