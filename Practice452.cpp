// Copy Constructor

#include <iostream>
#include <string>
using namespace std;

class Car{

public:
    string name;
    string color;

    Car (string name, string color){
        this->name = name;
        this->color = color;
    }

    Car(const Car &c1){
        cout << "inside custom copy constructor...\n";
        name = c1.name;
        color = c1.color;
    }
};

int main(){

    Car c1("maruti", "white");

    Car c2(c1);

    cout << c2.name << endl;
    cout << c2.color << endl;

    return 0;
}