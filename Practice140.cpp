//Static keyword


#include <iostream>
using namespace std;

class Example{

public:
    static int x;
};

int Example::x = 0;

int main(){

    Example eg1;
    Example eg2;
    Example eg3;

    cout << "count: " << eg1.x++ << endl;
    cout << "count: " << eg2.x++ << endl;
    cout << "count: " << eg3.x++ << endl;

    return 0;
}