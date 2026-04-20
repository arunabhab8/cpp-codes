// Shallow and Deep copy constructor

#include <iostream>
using namespace std;

class Car{

    public:
    string name;
    string colour;
    int *mileage;

    Car(string name, string colour){
        this->name = name;
        this->colour = colour;
        mileage = new int;
        *mileage = 10;
    }

    Car(Car &original){
        name = original.name;
        colour = original.colour;
        mileage = new int;
        *mileage = *original.mileage;
    }

    ~Car(){
        cout << "Calling destructor" << endl;
    }
};


int main(){

    Car c1("alto", "white");
    Car c2 (c1);

    cout << c1.name << endl;
    cout << c1.colour << endl;
    cout << *c1.mileage << endl;

    c1.name = "Maruti 800";
    c1.colour = "blue";
    *c1.mileage = 20;

    cout << c1.name << endl;
    cout << c1.colour << endl;
    cout << *c1.mileage << endl;


    cout << c2.name << endl;
    cout << c2.colour << endl;
    cout << *c2.mileage << endl;


    return 0;
}