// OOPs, getters and setters

#include <iostream>

using namespace std;

class Car{

    string name;
    string color;

public:
    void start(){
        cout << "Car started...\n";
    }

    void stop(){
        cout << "Car stopped...\n";
    }

    void setName(string name){
        this->name = name;
    }

    void setColor(string color){
        this->color = color;
    }

    string getName(){
        return name;
    }

    string getColor(){
        return color;
    }
};

int main(){

    Car c1;

    c1.setName("alto");
    c1.setColor("blue");

    c1.start();
    c1.stop();

    cout << c1.getName() << endl;
    cout << c1.getColor() << endl;

    return 0;
}