// Convert from UpperCase to LowerCase

#include <iostream>
using namespace std;

int main(){

    char word[50];
    cin >> word;


    for(int i=0; word[i] != '\0'; i++){
        int temp = word[i];
        if (word[i] >= 'A'  && word[i] <= 'Z'){
            int pos = word[i] - 'A';
            word[i] = 'a' + pos; 
        }
    }

    cout << "LowerCase converted word is: " << word << endl;
    return 0;
}