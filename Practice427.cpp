// Strings

#include <iostream>
#include <string>
using namespace std;

int main(){

    string str = "hello";
    
    cout << str << endl;

    str = "yellow";
    cout << str << endl;

    cout << str[0] << endl;
    cout << str[1] << endl;

    string str1;

    //cin >> str1;
    getline(cin, str1);
    
    for (int i=0; i<str1.length(); i++){
        cout << str1[i] << " ";
    }

    return 0;
}