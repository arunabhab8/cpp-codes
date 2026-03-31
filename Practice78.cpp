// Pair Sum of Vectors

#include <iostream>
#include <vector>
using namespace std;

vector<int> targetSum(vector<int> v, int target){

    int st = 0, end = v.size() - 1;
    vector<int> ans;

    while (st < end){

        if (target == v[st] + v[end]){
            ans.push_back(st);
            ans.push_back(end);
            break;
        } else if (target > v[st] + v[end]){
            st++;
        } else {
            end--;
        }
    }
    return ans;
}

int main(){

    vector<int> vec = {2, 7, 11, 15};
    int target = 9;

    vector<int> ans = targetSum(vec, target);
    cout << "(" << ans[0] << "," << ans[1] << ")" << endl;

    return 0;
}