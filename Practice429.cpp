// String member functions (more)

#include <iostream>
#include <string>

using namespace std;

int main(){

    string str;

    getline(cin, str);

    cout << "String length: " << str.length() << endl;
    cout << str[3] << "=" << str.at(3) << endl;

    cout << str.substr(5,5) << endl;

    int idx = str.find("arunabha");
    cout << idx << endl;

    return 0;
}