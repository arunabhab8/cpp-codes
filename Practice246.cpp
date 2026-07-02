// Vectors

#include <iostream>
#include <vector>
using namespace std;

int main(){

    vector<int> vec;
    vector<int> vec1 = {1, 2, 3, 4, 5};
    vector<int> vec2 (10, 0);

    cout << "Size: " << vec.size() << endl;
    cout << "Capacity: " << vec.capacity() << endl;

    cout << "Size: " << vec1.size() << endl; //5
    cout << "Capacity: " << vec1.capacity() << endl; //5

    cout << "Size: " << vec2.size() << endl;
    cout << "Capacity: " << vec2.capacity() << endl;

    for (int i=0; i<vec1.size(); i++){
        cout << vec1[i] << " ";
    }

    vec1.push_back(6);
    cout << "Size: " << vec1.size() << endl; //6
    cout << "Capacity: " << vec1.capacity() << endl; //10   

    cout << endl;

    return 0;
}