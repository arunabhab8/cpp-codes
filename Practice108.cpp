// Reverse a char array

#include <iostream>
using namespace std;

int main(){

    char ch[50];

    int st, end;

    cout << "Enter the character array: ";
    cin.getline(ch, 50);

    st=0, end=strlen(ch)-1;

    while(st < end){
        char temp = ch[st];
        ch[st] = ch[end];
        ch[end] = temp;
        st++;
        end--;
    }

    cout << ch << endl;

    return 0;
}