// Character String functions

#include <iostream>
#include <cstring>
using namespace std;

int main(){

    char str1[100];
    char str2[100] = "arunabha";

    strcpy (str1, "hello world");
    cout << str1 << endl;

    strcpy (str1, str2);
    cout << str2 << endl;

    strcat (str1, " is a good boy");
    cout << str1 << endl;

    strcat (str1, str2);
    cout << str1 << endl;
    cout << str2 << endl;

    char str3[50] = "apple";
    char str4[50] = "m";

    cout << strcmp(str3, str4) << endl;

    strcpy (str3, "xyz");
    cout << strcmp(str3, str4) << endl;

    return 0;
}