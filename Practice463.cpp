// Abstract Class and Pure virtual functions

#include <iostream>
using namespace std;

class Shape{

public:
    virtual void draw() = 0;

};

class Circle : public Shape{

public:
    void draw(){
        cout << "Circle drawn.." << endl;
    }
};

class Square : public Shape{

public:
    void draw(){
        cout << "Square drawn.." << endl;
    }
};

int main(){

    Circle c1;
    c1.draw();

    Square s1;
    s1.draw();

    return 0;
}