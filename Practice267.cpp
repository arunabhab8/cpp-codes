// Single inheritance


#include <iostream>
#include <string>
using namespace std;

class Animal{

public:
    string color;

    void eat(){
        cout << "Eats...\n";
    }

    void breathe(){
        cout << "Breathe...\n";
    }

};

class Fish : public Animal{

public:
    int fins;

    void swim(){
        eat();
        cout << "Swims...\n";
    }
};


int main(){

    Fish f1;

    f1.fins = 10;
    f1. color = "red";

    cout << "Fins: " << f1.fins << endl;

    f1.swim();
    f1.eat();
    f1.breathe();

    return 0;
}