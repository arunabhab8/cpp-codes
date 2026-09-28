// Vectors

#include <iostream>
#include <vector>

using namespace std;

int main(){

    vector<int> vec1;
    vector<int> vec2 = {1, 2, 3, 4, 5};
    vector<int> vec3 (10, -2);

    cout << vec1.size() << endl;
    cout << vec1.capacity() << endl;

    for (int i=0; i<vec2.size(); i++){
        cout << vec2[i] << " ";
    }
    cout << endl;

    for (int i=0; i<vec3.size(); i++){
        cout << vec3[i] << " ";
    }
    
    cout << endl;
    
    cout << vec2.size() << endl;
    cout << vec2.capacity() << endl;

    vec2.push_back(6);
    cout << vec2.size() << endl;
    cout << vec2.capacity() << endl;

    vec2.pop_back();
    cout << vec2.size() << endl;
    cout << vec2.capacity() << endl;  

    cout << endl;


    return 0;
}