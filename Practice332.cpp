// Area of a circle


#include <iostream>
#define PI 3.14
using namespace std;


int main(){

    int rad, area;

    cout << "Enter the radius of circle: ";
    cin >> rad;

    area = PI * rad * rad;

    cout << "Area of circle: " << area << endl;
    return 0;
}