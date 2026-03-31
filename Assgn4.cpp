// Area of a circle (Area = PI * r * r), r is the radius of circle

#include <iostream>
using namespace std;
#define PI 3.14

int main(){
    
    int radius;
    float area;
    cout << "Enter the radius of circle: ";
    cin >> radius;

    area = PI * radius * radius;
    cout << "Area of circle: " << area << endl;
    
    return 0;
}