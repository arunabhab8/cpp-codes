// OOP Concepts

#include <iostream>
#include <string>
using namespace std;

class Student {

    string name;
    float cgpa;

    public:
    void setName(string nameVal){
        name = nameVal;
    }

    string getName(){
        return name;
    }

};

int main(){

    Student s1;
    s1.setName("Arunabha");
    cout << s1.getName() << endl;

    return 0;
}