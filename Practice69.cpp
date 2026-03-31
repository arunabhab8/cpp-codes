// Reverse a char array

#include <iostream>
using namespace std;

int main(){

    char arr[20];
    cin.getline (arr, 20);

    int n = strlen(arr);

    int st=0, end=n-1;

    while (st < end){
        swap(arr[st], arr[end]);
        st++;
        end--;
    }

    cout << arr << endl;
        
    return 0;
}