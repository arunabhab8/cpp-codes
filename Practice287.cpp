// Static Variables in function


#include <iostream>
using namespace std;

void counter(){
    static int x = 0;

    cout << "x: " << x++ << endl;
}

int main(){

    counter();
    counter();
    counter();
    counter();

    return 0;
}