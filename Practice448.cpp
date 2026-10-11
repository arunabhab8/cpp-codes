// Count set bits of a number

#include <iostream>
using namespace std;

int countsetBits(int num){

    int i=0, count = 0;

    while (num > 0){

        if (num & 1)
            count++;

        num = num >> 1;

    }

    return count;
}

int main(){

    int num;

    cout << "Enter the value of num: ";
    cin >> num;

    cout << countsetBits(num) << endl;

    return 0;
}