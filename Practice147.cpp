// Area of a circle


#include <iostream>
using namespace std;
#define PI 3.14

int main(){

    int radius;

    cout << "Enter the radius of a circle: ";
    cin >> radius;

    int area = PI * radius * radius;

    cout << "Area of circle: " << area << endl;

    return 0;

}