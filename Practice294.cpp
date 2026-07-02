// Assignment


#include <iostream>
#include <string>

using namespace std;

class Person{

protected:
    string name;
    int age;

    Person(string name, int age){
        this->name = name;
        this->age = age;
    }

};

class Student : public Person {

public:
    string studentID;

    Student(string name, int age, string studentID) : Person (name, age){
        this->studentID = studentID;
    }

    void displayStudentInfo(){
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "StudentID: " << studentID << endl;
    }
};

int main(){

    Student s1("Arunabha", 34, "arunabha92");
    s1.displayStudentInfo();

    return 0;
}