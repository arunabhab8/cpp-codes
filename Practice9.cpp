// Program to print if a number is even or odd

#include <iostream>
using namespace std;

void oddorEven(int a){

    if (a%2 == 0){
        cout << "Even" << endl;
    }else{
        cout << "Odd" << endl;
    }

}

int main(){

    int num;
    cout << "Enter number: ";
    cin >> num;
    oddorEven(num);
    return 0;
}