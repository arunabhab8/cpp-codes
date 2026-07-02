// Function OverRiding, RunTime Polymorphism

#include <iostream>

using namespace std;

class Animal{

public:
    void eats(){
        cout << "Animal Eats...\n";
    }
};

class Dog : public Animal{

public:
    void eats(){
        cout << "Dog Eats...\n";
    }
};

int main(){

    Dog d1;

    d1.eats();

    return 0;
}