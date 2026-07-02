// Check for valid anagrams

#include <iostream>
#include <string>

using namespace std;

bool isAnagram(string str1, string str2){

    int freq[26] = {0};

    if (str1.length() != str2.length()){
        return false;
    }

    for (int i=0; i<str1.length(); i++){
        freq[str1[i] - 'a']++;
        freq[str2[i] - 'a']--;
    }

    for (int i=0; i<26; i++){
        if (freq[i] != 0){
            return false;
        }
    }

    return true;
}

int main(){

    string str1, str2;

    cout << "Enter first string: ";
    getline(cin, str1);

    cout << "Enter second string: ";
    getline(cin, str2);

    cout << isAnagram(str1, str2) << endl;

    return 0;
}