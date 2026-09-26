// Count no. of times lowercase vowels entered by user in a string


#include <iostream>
#include <string>

using namespace std;

int main(){

    string str;

    cout << "Enter the value of str1: ";
    getline(cin, str);

    int count = 0;

    for (int i=0; i<str.length(); i++){
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u'){
            count++;
        }
    }

    cout << "Count of vowels in the entered string is: " << count << endl;

    return 0;
}