// Hierarchial inheritance

#include <iostream>
using namespace std;

class Animal {

public:
    string color;

    void eats(){
        cout << "Eats....\n";
    }

    void breathe(){
        cout << "Breathe....\n";
    }
};

class Fish : public Animal{

public:
    int fins;

   void swims(){
    cout << "Swims..\n";
   }

};

class Dog : public Animal{

public:
    string bloodType;

    Dog(string bloodType){
        this->bloodType = bloodType;
    }

    void tailWag(){
        cout << "Wags tail..\n";
    }
};

int main(){

    Fish f1;

    f1.breathe();
    f1.eats();
    f1.fins = 10;
    cout << "Fins: " << f1.fins << endl;

    Dog d1 ("warm");
    d1.eats();
    cout << "BloodType: " << d1.bloodType << endl;
    d1.tailWag();

    return 0;
}