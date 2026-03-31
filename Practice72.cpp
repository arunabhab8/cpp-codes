// String member functions

#include <iostream>
#include <string>
using namespace std;

int main(){

    string str = "hello world, hello";
    int idx;

    cout << str.find("world") << endl; 
    idx = str.find("java");
    cout << idx << endl;

    return 0;
}