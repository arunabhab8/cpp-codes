// Copy Constructors

#include <iostream>
using namespace std;

class Car{
public:
    string name;
    string colour;

public:
    Car(string name, string colour){
        this->name = name;
        this->colour = colour;
    }

    Car (Car &original){
        name = original.name;
        colour = original.colour;
    }

    string getName(){
        return name;
    }

    string getColour(){
        return colour;
    }

};

int main(){

    Car c1 ("alto", "blue");
    Car c2(c1);
    cout << c1.getName() << endl;
    cout << c1.getColour() << endl;

    cout << c2.getName() << endl;
    cout << c2.getColour() << endl;

    c2.name = "Fortuner";
    c2.colour = "Green";

    cout << c1.name << endl;
    cout << c1.colour << endl;

    return 0;
}