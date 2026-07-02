// Reverse a char array

#include <iostream>
using namespace std;

void reverseArray(char ch[], int n){

    int st=0, end=n-1;

    while (st < end){
        swap(ch[st], ch[end]);
        st++;
        end--;
    }
}

int main(){

    char ch[50];
    cin.getline(ch, 50);

    reverseArray(ch, strlen(ch));

    cout << ch << endl;

    return 0;
}