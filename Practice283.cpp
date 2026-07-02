// Hierarchial Inheritance

#include <iostream>
#include <string>

using namespace std;

class Animal{

public:
    string colour;

    void eats(){
        cout << "Animal can eat...\n";
    }

    void breathes(){
        cout << "Animal can breathe...\n";
    }

};

class Fish : public Animal{

public: 
    int fins;

    Fish(int fins){
        this->fins = fins;
    }

    int getFins(){
        return fins;
    }
};

class Dog : public Animal{

public:

    Dog(string colour){
        this->colour = colour;
    }

    void tailWag(){
        cout << "Dog wags its tail...\n";
    }

    string getColour(){
        return colour;
    }

};

int main(){

    Dog d1("brown");
    d1.tailWag();
    d1.breathes();
    d1.eats();
    cout << "Colour of dog: " << d1.getColour() << endl;

    Fish f1(5);
    cout << "Fins: " << f1.getFins() << endl;
    f1.breathes();


    return 0;
}