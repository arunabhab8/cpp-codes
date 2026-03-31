// Anagrams

#include <iostream>
#include <string>
using namespace std;

bool checkAnagram(string s, string t){

    int freq[26] = {0};

    if (s.length() != t.length()){
        return false;
    }

    for (int i=0; i<s.length(); i++){
        freq[s[i] - 'a']++;
        freq[t[i] - 'a']--;
    }

    for (int i=0; i<26; i++){
        if (freq[i] != 0){
            return false;
        } 
    }
    return true;
}


int main(){

    string s = "anagram";
    string t = "cat";

    if(checkAnagram(s,t)){
        cout << "Strings are anagrams" << endl;
    } else {
        cout << "Strings are not anagrams" << endl;
    }

    return 0;
}