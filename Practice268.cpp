// Multi-level inheritance


#include <iostream>
using namespace std;

class Animal{

public: 
    string color;

    void eat(){
        cout << "Eats....\n";
    }

    void breathe(){
        cout << "Breathe....\n";
    }
};

class Mammal: public Animal{

public:

    string bloodType="warm";
};

class Dog : public Mammal{


public:
    void tailWag(){
        cout << "Wags tail....\n";
    }

};


int main(){

    Dog d1;

    d1.color = "brown";

    cout << "Colour: " << d1.color << endl;
    cout << "Blood Type: " << d1.bloodType << endl;

    d1.eat();
    d1.breathe();
    d1.tailWag();


    return 0;
}