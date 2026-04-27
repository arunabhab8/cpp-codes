// Multi-level inheritance

#include <iostream>
using namespace std;


class Animal {

public:
    Animal(){
        cout << "Animal constructor" << endl;
    }

    ~Animal(){
        cout << "Animal destructor" << endl;
    }
};

class Mammal: public Animal {

public:
    Mammal(){
        cout << "Mammal constructor" << endl;
    }

    ~Mammal(){
        cout << "Mammal destructor" << endl;
    }
};

class Dog: public Mammal {

public:
    Dog(){
        cout << "Dog constructor" << endl;
    }

    ~Dog(){
        cout << "Dog destructor" << endl;
    }
};

int main(){

    int a=0;
    if (a==0){
       static Dog d;
    }

    cout << "End of main function" << endl;
    
    return 0;
}