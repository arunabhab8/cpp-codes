// Copy Constructor

#include <iostream>
using namespace std;

class Car{

private:
    string name;
    string colour;

public:

    Car(){
        cout << "Default Constructor...\n";
        name = "alto";
        colour = "white";
    }

    Car(string name, string colour){
        this->name = name;
        this->colour = colour;
    }

    Car(Car &original){
        cout << "Copy Constructor is called...\n";
        this->name = original.name;
        this->colour = original.colour;
    }

    string getName(){
        return name;
    }

    string getColour(){
        return colour;
    }

};


int main(){

    Car c0;

    Car c1("maruti800", "blue");

    Car c2(c1);

    cout << "C0, name: " << c0.getName() << endl;
    cout << "C0, colour: " << c0.getColour() << endl;

    cout << "C1, name: " << c1.getName() << endl;
    cout << "C1, colour: " << c1.getColour() << endl;

    cout << "C2, name: " << c2.getName() << endl;
    cout << "C2, colour: " << c2.getColour() << endl;


    return 0;
}