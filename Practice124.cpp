// Count set bits of a number

#include <iostream>
using namespace std;


int main(){

    int num, count = 0;
    cout << "Enter the number: ";
    cin >> num;

    while (num > 0){
        if (num & 1){
            count++;
        }
        num = num/2;
    }

    cout << "Count of set bits: " << count << endl;
    return 0;
}