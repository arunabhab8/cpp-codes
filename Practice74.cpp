// Valid anagrams  - Practice

#include <iostream>
#include <string>
using namespace std;

bool checkAnagram(string s, string t){

    int freq[26] = {0};

    if (s.length() != t.length()){
        return false;
    }

    for (int i = 0; i< s.length(); i++){
        freq[s[i] - 'a']++;
        freq[t[i] - 'a']--;
    }

    for (int i=0; i< 26; i++){
        if (freq[i] != 0){
            return false;
        }
    }
    return true;
}

int main(){

    string s, t;
    cout << "Enter string s: ";
    getline(cin, s);

    cout << "Enter string t: ";
    getline(cin, t);

    if(checkAnagram(s, t)){
        cout << "Two strings are valid anagrams";
    } else {
        cout << "Two strings are not valid anagrams";
    }
    
    cout << endl;

    return 0;
}