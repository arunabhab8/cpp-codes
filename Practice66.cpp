//Character Arrays-2

#include <iostream>
#include <cstring>
using namespace std;

int main(){

    char word[50], sentence[50], sentence1[50];
    cin >> word;
    cin.ignore(); // To ignore left over new line (\n) from cin at line 10
    cin.getline(sentence, 50);
    cin.getline(sentence1, 50, '.');

    cout << "Output is: " << word << endl;
    cout << "Length is: " << strlen(word) << endl;

    cout << "Output is: " << sentence << endl;
    cout << "Length is: " << strlen(sentence) << endl;

    cout << "Output is: " << sentence1 << endl;
    cout << "Length is: " << strlen(sentence1) << endl;

    return 0;
}