// Clear ith bit

#include <iostream>
using namespace std;

int clearIthBit(int num, int i){

    int bitMask = ~(1 << i);

    return (num & bitMask);

}
int main(){

    int num, i;

    cout << "Enter the value of num: ";
    cin >> num;

    cout << "Enter the value of i: ";
    cin >> i;
    
    cout << clearIthBit(num, i) << endl;

    return 0;
}