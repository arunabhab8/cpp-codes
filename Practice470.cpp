// Sum of N natural numbers

#include <iostream>
using namespace std;

int sumofNums(int n){

    if (n == 1){
        return 1;
    }

    return n + sumofNums(n-1);

}

int main(){

    int n;

    cout << "Enter the value of n: ";
    cin >> n;

    if (n <= 0){
        cout << "Enter a positive value of n" << endl;
        return 0;
    }

    cout << "Sum of N natural nos: " << sumofNums(n) << endl;

    return 0;
}
