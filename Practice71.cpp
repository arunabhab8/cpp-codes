// CString functions

#include <iostream>
using namespace std;

int main(){

    char str[] = "abc";
    char str2[] = "xba";

    cout << strcmp(str, str2) << endl;

    return 0;
}