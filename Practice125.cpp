// Pair Sum problem

#include <iostream>
#include <vector>
using namespace std;

vector<int> pairSum (vector<int> vec, int target){

    int st=0, end=vec.size()-1;
    vector<int> ans;

    while(st < end){
        if (vec[st] + vec[end] == target){
            ans.push_back(st);
            ans.push_back(end);
            break;
        }else if (vec[st] + vec[end] > target){
            end--;
        }else{
            st++;
        }
    }
    return ans;
}

int main(){

    int size, target;
    vector<int> ans;
    cout << "Enter size of the vector: ";
    cin >> size;

    vector<int> vec(size);

    cout << "Enter the values for vector: ";
    for (int i=0; i<vec.size(); i++){
        cin >> vec[i];
    }

    cout << "Enter the value of target: ";
    cin >> target;

    ans = pairSum(vec, target);

    for(int i=0; i<ans.size(); i++){
        cout << ans[i] << " ";
    }
    cout << endl;

    return 0;
}