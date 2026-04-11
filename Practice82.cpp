// Precision practice

#include <iostream>
#include <iomanip>

using namespace std;


int main(){

    float P1 = 3.141;
    double P2 = 3.1415926;
    
    cout << fixed << setprecision(20) << "P1: " << P1 << endl;
    cout << fixed << setprecision(20) << "P2: " << P2 << endl;

    return 0;
}