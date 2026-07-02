// Static keyword for Objects

#include <iostream>
using namespace std;

class Example{

public:
    Example(){
        cout << "Default Constructor...\n";
    }

    ~Example(){
        cout << "Default Destructor...\n";
    }

};


int main(){

    {
        static Example eg1;
    }

    cout << "Code about to end...\n";
    return 0;
}