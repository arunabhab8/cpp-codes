// Copy Constructor

#include <iostream>
using namespace std;


class Car{

public:

    string name;
    string color;
    int *mileage;

    Car(string name, string color){
        this->name = name;
        this->color = color;
        mileage = new int;
        *mileage = 12;
    }

    Car(Car &orig){
        cout << "Copy constructor called...\n";
        name = orig.name;
        color = orig.color;
        mileage = new int;
       *mileage = *orig.mileage;
    }

};
int main(){

    Car c1("alto", "blue");
    Car c2(c1);

    cout << c1.name << endl;
    cout << c1.color << endl;
    cout << *c1.mileage << endl;
    *c1.mileage = 14;
    cout << *c1.mileage << endl;

    cout << c2.name << endl;
    cout << c2.color << endl;
    cout << *c2.mileage << endl;


    return 0;
}