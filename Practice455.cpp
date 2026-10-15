// Single Inheritance

#include <iostream>
#include <string>

using namespace std;

class Animal{

public:
    string color;

    void eats(){
        cout << "Eats" << endl;
    }

    void breathe(){
        cout << "Breathes" << endl;
    }
};

class Fish : public Animal{

public:
    int fins;
    
    void swim(){
        cout << "Swims" << endl;
    }

};

int main(){

    Fish f1;

    f1.fins = 5;

    f1.color = "blue";

    cout << "Fins: " << f1.fins << endl;

    f1.eats();
    f1.breathe();
    f1.swim();

    return 0;
}