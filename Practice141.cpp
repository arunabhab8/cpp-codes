// Recursion: Print numbers from n to 1


#include <iostream>
using namespace std;


void print(int n){
    if (n==0){
        return;
    }

    cout << n << " ";
    return print(n-1);
}

int main(){

    print(5);
    cout << endl;
    return 0;
}