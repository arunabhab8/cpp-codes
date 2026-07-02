//Multiple Inheritance

#include <iostream>
#include <string>

using namespace std;

class Teacher{

public: 
    int salary;
    string subject;

    void teaches(){
        cout << "Teacher teaches...\n";
    }

    void work(){
        cout << "Teacher works...\n";
    }
};

class Student{

public:
    int rollno;
    float cgpa;

    void learns(){
        cout << "Student learns...\n";
    }

    void work(){
        cout << "Student works...\n";
    }
};

class TA : public Student, public Teacher{

public:
    string name;

};

int main(){

    TA ta1;

    ta1.rollno = 1234;
    ta1.teaches();
    ta1.learns();
    ta1.salary = 20000;

    cout << "Salary: " << ta1.salary << endl;
    cout << "RollNo: " << ta1.rollno << endl;

    ta1.Teacher :: work();
    ta1.Student :: work();
    return 0;
}