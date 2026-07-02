// OOPs concepts, fundamentals

#include <iostream>
using namespace std;

class Car{

private:
    string color;
    string name;

public:
    string start(string color){
        cout << "Car started...\n";
        this->color = color;
        //cout << "Colour: " << color << endl;
        return color;
    }

    void stop(){
        cout << "Car stopped...\n";
    }
};

int main(){

    Car c1;

    //c1.color = "blue";
    //c1.name = "alto";
    cout << c1.start("blue") << endl;

    //cout << "Car name: " << c1.name << endl;
    //cout << "Car color: " << c1.color << endl;

    //c1.start();
    c1.stop();

    return 0;
}