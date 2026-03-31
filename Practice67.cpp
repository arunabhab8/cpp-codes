// LowerCase to UpperCase

#include <iostream>
using namespace std;

int main(){

    char word[50];
    cin >> word;

    for (int i=0; word[i] !='\0'; i++){
        if (word[i] >= 'a' && word[i] <= 'z'){
            int pos = word[i] - 'a'; // Will get position of this letter
            word[i] = pos + 'A';
        }
    }

    cout << word << endl;

    return 0;
}