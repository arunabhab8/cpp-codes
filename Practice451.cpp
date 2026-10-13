// Constructors


#include <iostream>
using namespace std;

class Car {

    string name;
    string color;

public:
    Car(){
        cout << "Default constructor called, object initialized\n";
    }

    Car(string name, string color){
        cout << "Inside parameterized constructor" << endl;
        this->name = name;
        this->color = color;
    }

    //Getters
    string getName(){
        return name;
    }

    string getColor(){
        return color;
    }

};

int main(){

    Car c0;
    Car c1("maruti", "white");
    Car c2("alto", "blue");

    cout << c1.getName() << endl;
    cout << c1.getColor() << endl;

    cout << c2.getName() << endl;
    cout << c2.getColor() << endl;

    return 0;
}