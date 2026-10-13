// Class, Objects, access modifiers

#include <iostream>
using namespace std;


class Student{

public:
    string name;
    int age;
    float cgpa;

    void getPercentage(){
        cout << "inside getPercentage: " << (cgpa * 10) << endl; 
    }

};

int main(){

    Student s1;

    s1.name = "arunabha";
    s1.age = 34;
    s1.cgpa = 9.5;

    cout << s1.name << endl;
    cout << s1.age << endl;
    s1.getPercentage();

    return 0;
}