// Vectors

#include <iostream>
#include <vector>
using namespace std;

int main(){

    int size;
    cout << "Enter size of the vector: ";
    cin >> size;

    vector<int> vec (size);
    vector<int> vec1;

    int x = 1;
    for (int i=0; i<vec.size(); i++){
        vec[i] = x++;
    }

    vec1 = vec;

    for (int i=0; i<vec.size(); i++){
        cout << vec[i] << " ";
    }
    cout << endl;

        for (int i=0; i<vec1.size(); i++){
        cout << vec1[i] << " ";
    }
    cout << endl;

    return 0;

}