// Pass by reference using pointers


#include <iostream>
using namespace std;

void changeA(int *ptr){

    *ptr = 20;
    cout << "Inside changeA, value of a: " << *ptr << endl;

}

int main(){

    int a = 10;

    changeA(&a);
    cout << "Inside main after calling changeA, value of a: " << a << endl;

    return 0;
}