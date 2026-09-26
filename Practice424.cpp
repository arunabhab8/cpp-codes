// Reverse a character array


#include <iostream>
using namespace std;

void reverseArray(char ch[], int n){

    int st = 0, end = n - 1;

    while (st < end){
        swap(ch[st], ch[end]);
        st++;
        end--;
    }

    cout << ch << endl;

}

int main(){

    char ch[10];

    cin.getline(ch, 10);

    reverseArray(ch, strlen(ch));


    return 0;
}