// Static variables in class


#include <iostream>
using namespace std;

class Example{

public:
    static int x;

    void showNum(){
        cout << x << endl;
    }

};

int Example::x = 0;

int main(){

    Example e1;
    Example e2;
    Example e3;
    Example e4;

    // cout << e1.x++ << endl;
    // cout << e2.x++ << endl;
    // cout << e3.x++ << endl;
    // cout << e4.x++ << endl;

   e1.showNum();
   e2.showNum();
   e3.showNum();
   e4.showNum();

    return 0;
}