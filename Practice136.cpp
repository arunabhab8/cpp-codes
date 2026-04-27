// Practice, Classes and Objects

#include <iostream>
using namespace std;

class Student {

private:
    string name;
    float cgpa;

public:

    void setName(string nameVal){
        name = nameVal;
    }

    void setPercentage(float cgpaVal){
        cgpa = cgpaVal;
    }

    string getName(){
        return name;
    }

    float getPercentage(){
        return cgpa;
    }

};

int main(){

    Student s1;
    // s1.name = "Arunabha";
    // s1.cgpa = 8.75;

   s1.setName("Arunabha");
   s1.setPercentage(8.75);

   cout << "Name: " << s1.getName() << endl;
   cout << "Percentage: " << s1.getPercentage() << endl;
   
    return 0;
}