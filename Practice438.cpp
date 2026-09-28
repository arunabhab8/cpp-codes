// Pair Sum using vectors

#include <iostream>
#include <vector>

using namespace std;

vector<int> pairSum(vector<int> vec, int target){

    int st = 0, end = vec.size() - 1;
    vector<int> res;

    while (st < end){
        if(vec[st] + vec[end] == target){
            res.push_back(st);
            res.push_back(end);
            return res;
        } else if (vec[st] + vec[end] < target){
            st++;
        } else{
            end--;
        }
    }

    res.push_back(-1);
    res.push_back(-1);

    return res;

}

int main(){

    vector<int> vec = {2, 7, 11, 15};
    int target;

    cout << "Enter the value of target: ";
    cin >> target;

    vector<int> res = pairSum(vec, target);

    for (int i=0; i<res.size(); i++){
        cout << res[i] << " ";
    }

    cout << endl;

    return 0;
}