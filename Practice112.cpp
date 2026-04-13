// Valid anagram

#include <iostream>
#include <string>
using namespace std;

bool isAnagram(string str1, string str2){

    int freqArray[26] = {0};

    if (str1.length() != str2.length()){
        return false;
    }

    for (int i=0; str1[i] != '\0'; i++){
        freqArray[str1[i] - 'a']++;
        freqArray[str2[i] - 'a']--;
    }

    for (int i=0; i<26; i++){
        if (freqArray[i] != 0){
            return false;
        }
    }

    return true;
}


int main(){

    string str1 = "rat";
    string str2 = "car";
    
    if(isAnagram(str1, str2)){
        cout << "Valid anagram" << endl;
    } else{
        cout << "Not a valid anagram" << endl;
    }

    return 0;
}