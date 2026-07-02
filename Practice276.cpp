// Deep Copy

#include <iostream>
#include <string>

using namespace std;


class Car{

public:
    string name;
    string colour;
    int *mileage;

    Car(string name, string colour){
        this->name = name;
        this-> colour = colour;
        mileage = new int;
        *mileage = 12;
    }

    Car(Car &original){
        this->name = original.name;
        this->colour = original.colour;
        mileage = new int;
        *mileage = *original.mileage;
    }

    ~Car(){
        cout << "Calling destructor...\n";
        if (mileage != NULL){
            delete mileage;
            mileage = 0;
        }
    }

};
int main(){

    Car c1("alto", "blue");
    Car c2(c1);

    cout << "C1: name: " << c1.name << endl;
    cout << "C1: colour: " << c1.colour << endl;
    cout << "C1: mileage: " << *c1.mileage << endl;

    cout << "C2: name: " << c2.name << endl;
    cout << "C2: colour: " << c2.colour << endl;
    cout << "C2: mileage: " << *c2.mileage << endl;

    *c2.mileage = 25;

    cout << "C1: mileage: " << *c1.mileage << endl;
    cout << "C2: mileage: " << *c2.mileage << endl;    


    return 0;
}