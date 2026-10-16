// Abstract Class and Pure Virtual Function

#include <iostream>
using namespace std;

// Shape is an abstract class
class Shape{

public:
    virtual void draw() = 0; // this is a pure virtual function
};

class Circle : public Shape{

public:
    void draw(){
        cout << "Drawing a circle.." << endl;
    }
};

class Square : public Shape{

public:
    void draw(){
        cout << "Drawing a square.." << endl;
    }
};

int main(){

    Square s1;
    s1.draw();

    Circle c1;
    c1.draw();

    return 0;
}