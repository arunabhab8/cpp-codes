// CString functions

#include<iostream>
using namespace std;

int main(){

    char str[50] = "hy name is ";
    char str1[50] = "hello world";

    strcat(str, str1);
    cout << strcmp(str, str1) << endl;
    
    //strcpy(str, str1);
    cout << str << endl;
    cout << str1 << endl;

    return 0;
}