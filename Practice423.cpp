// Convert to UpperCase


#include <iostream>
#include <cstring>

using namespace std;

int main(){

    char word[50];

    cin.getline(word, 50);

    for (int i=0; i<=strlen(word)-1; i++){
        if (word[i] >= 'a' && word[i] <= 'z'){
            int pos = word[i] - 'a';
            word[i] = 'A' + pos; 
        } 
    }

    cout << word << endl;

    return 0;
}