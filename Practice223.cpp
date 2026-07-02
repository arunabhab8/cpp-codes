// Insertion sort for an array of chars

#include <iostream>
using namespace std;

int main(){

    char ch[] ={'f', 'b', 'a', 'e', 'c', 'd'};
    int n = sizeof(ch)/sizeof(ch[0]);

    int i,j;

    for (i=1; i<n; i++){
        int curr = ch[i];
        for (j=i-1; j>=0 && ch[j] < curr; j--){
            ch[j+1] = ch[j];
        }

        ch[j+1] = curr;
    }

    for (int i=0; i<n; i++){
        cout << ch[i] << " ";
    }

    cout << endl;

    return 0;
}