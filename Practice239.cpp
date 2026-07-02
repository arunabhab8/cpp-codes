// Character Arrays

#include <iostream>
#include <cstring>
using namespace std;

int main(){

    char word[] = {'a', 'b', 'c', 'd', '\0'};
    char word1[5] = {'a', 'b', 'c', 'd', '\0'};

    char word2[] = "hello, world";
    char word3[13] = "hello, world";

    cout << strlen(word) << endl;
    cout << strlen(word2) << endl;

    cout << word << endl;

    return 0;
}