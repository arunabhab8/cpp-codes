// Precision of float and double


#include <iostream>
#include <iomanip>
using namespace std;

int main(){

    float PI = 3.14159265359;
    double PI2 = 3.14159265359;

    cout << setprecision(12) << "Float: " << PI << endl;
    cout << setprecision(17) << "Double: " << PI2 << endl;

    return 0;
}