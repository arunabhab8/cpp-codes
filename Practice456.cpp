// Multi-level inheritance

#include <iostream>
using namespace std;

class Animal {

public:
    string color;

    void eats(){
        cout << "Eats" << endl;
    }

    void breathe(){
        cout << "Breathes" << endl;
    }
};

class Mammal : public Animal{

public:
    string bloodType;

    Mammal(){
        cout << "Default constructor of Mammal" << endl;
    }

    Mammal(string bloodType){
        this->bloodType = bloodType;
    }
};

class Dog : public Mammal{

public:
    void tailWag(){
        cout << "Wags its tail" << endl;
    }
};

int main(){

    Dog d1;

    d1.tailWag();
    d1.bloodType = "red";

    cout << d1.bloodType << endl;

    d1.eats();
    d1.breathe();


    return 0;
}