// C-Strings/ Character Arrays


#include <iostream>
using namespace std;

int main(){

    char arr1[] = {'a', 'b', 'c', 'd', 'e', '\0'};

    char arr2[50] = {'a', 'b', 'c', 'd', 'e', '\0'};

    char arr3[] = "hello world";

    char arr4[50] = "arunabha bhaumik"; 

    cout << arr1 << endl;
    cout << arr2 << endl;
    cout << arr3 << endl;
    cout << arr4 << endl;
    cout << arr4[0] << endl;
    cout << arr4[1] << endl;
    cout << arr4[49] << endl;

    cout << "Length: " << strlen(arr4) << endl;

    return 0;
}