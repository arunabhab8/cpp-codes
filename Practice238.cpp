// cString functions

#include <iostream>
#include <cstring>
using namespace std;

int main(){

    char str1[20] = "hello";
    char str2[20] = "world";

    //strcpy(str1, str2);

    //strcat(str1, str2);
    //strcat(str1, ", Arunabha");

    cout << strcmp(str1, str2) << endl;
    cout << strcmp(str1, "arunabha") << endl;

    cout << str1 << endl;
    cout << str2 << endl;


    return 0;
}