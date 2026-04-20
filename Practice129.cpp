// Copy Constructor

#include <iostream>
using namespace std;

class Car{

    public:
    string name;
    string colour;

    Car (string name, string colour){
        this->name = name;
        this->colour = colour;
    }

    Car (Car &original){
        cout << "Custom copy constructor is called...Copying properties from obj. c1 to obj. c2" << endl;
        name = original.name;
        colour = original.colour;
    }

};

int main(){

    Car c1 ("alto", "white");
    Car c2(c1);

    cout << "Name of car: " << c2.name << endl;
    cout << "Colour of car: " << c2.colour << endl;
    return 0;
}