// Mutiple inheritance

#include <iostream>
using namespace std;

class Teacher{

public:
    float salary;

    void teaches(){
        cout << "Teaches....\n";
    }
};

class Student{

public:
    int rollno;

};

class TA : public Teacher, public Student{

public:
    string subject;

    TA(string subject){
        this->subject = subject;
    }
};

int main(){

    TA t1 ("english");

    cout << t1.subject << endl;

    t1.rollno = 24;
    t1.salary = 24375.67;

    cout << t1.rollno << endl;
    cout << t1.salary << endl;

    return 0;
}