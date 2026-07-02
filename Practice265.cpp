// Copy Constructor, Shallow

#include <iostream>
using namespace std;

class Car{

public:
    string name;
    string color;
    int *mileage;

    Car(string name, string color){
        this->name = name;
        (*this).color = color;
        mileage = new int;
        *mileage = 12;
    }

};


int main(){

    Car c1("alto", "blue");

    Car c2(c1);

    cout << "C1: name: " << c1.name << endl;
    cout << "C1: color: " << c1.color << endl;
    cout << "C1: mileage: " << *c1.mileage << endl;

    *c1.mileage = 14;

    cout << "C2: name: " << c2.name << endl;
    cout << "C2: color: " << c2.color << endl;
    cout << "C2: mileage: " << *c2.mileage << endl;

    return 0;
}