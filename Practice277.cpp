// Single Inheritance

#include <iostream>
#include <string>

using namespace std;

class Animal{

public:
    string colour;

    void eats(){
        cout << "Eats...\n";
    }

    void breathe(){
        cout << "Breathe...\n";
    }
};

class Fish : private Animal{

public:
    int fins;

    void swim(){
        eats();
        cout << "Swims...\n";
    }

};

int main(){

    Fish f1;

    f1.fins = 3;

    cout << "Fins: " << f1.fins << endl;
    f1.swim();
    // f1.breathe();
    // f1.eats();

    return 0;
}