// Static Objects

#include <iostream>
using namespace std;

class Example{

public:
    Example(){
        cout << "Object is initialized.." << endl;
    }

    ~Example(){
        cout << "Object is destroyed.." << endl;
    }

};

int main(){

    {
        static Example eg1;
    }
    cout << "Code execution ending.. " << endl;

    return 0;
}