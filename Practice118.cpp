// Vectors

#include <iostream>
#include <vector>

using namespace std;


int main(){

    //vector<int> vec;
    int size;
    cout << "Enter size: ";
    cin >> size;

    vector<int> vec(size, 10);

    cout << vec.size() << endl;
    cout << vec.capacity() << endl;

    for (int i=0; i<vec.size(); i++){
        cout << vec[i] << " ";
    }

    cout << endl;



    return 0;
}