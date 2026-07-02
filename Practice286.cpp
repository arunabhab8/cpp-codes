// Abstraction, pure virtual function


#include <iostream>

using namespace std;

class Shape{

public:
    virtual void draw() = 0; // pure virtual function

};

class Circle : public Shape{

public:
    void draw(){
        cout << "Circle drawn...\n";
    }

};

class Square : public Shape{

public:
    void draw(){
        cout << "Square drawn...\n";
    }

};


int main(){

    Circle c1;
    c1.draw();
    
    Square sq1;
    sq1.draw();

    return 0;
}