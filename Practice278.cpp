// Multi-level inheritance

#include <iostream>
#include <string>

using namespace std;

class Animal{

public:
    void eats(){
        cout << "Eats...\n";
    }

    void breathe(){
        cout << "Breathe...\n";
    }
};

class Mammal : public Animal{

public:
    string bloodType;

    Mammal(){
        bloodType = "warm";
    }
};

class Dog : public Mammal{

public:
    void tailWag(){
        cout << "Dog wags its tail...\n";
    }
};

int main(){

    Dog d1;

    d1.eats();
    d1.breathe();
    cout << d1.bloodType << endl;

    d1.tailWag();

    return 0;
}