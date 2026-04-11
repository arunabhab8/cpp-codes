// Bit Manipulation, Odd or Even

#include <iostream>
using namespace std;


bool oddorEven(int num){

    return (num & 1);

}


int main(){

    int num;
    cout << "Enter the number: ";
    cin >> num;

    if(oddorEven(num)){
        cout << "Odd" << endl;
    } else {
        cout << "Even" << endl;
    }


    return 0;
}