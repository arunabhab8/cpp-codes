// OOPs practice

#include <iostream>
#include <string>

using namespace std;

class Student{

public:
    string name;
    float cgpa;

    void getPercentage(){
       
        cout << "CGPA: " << (cgpa*10) << endl;
    }
};

int main(){

    Student s1;
    s1.name = "Arunabha";

    return 0;
}