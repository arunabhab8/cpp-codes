// Cost of pencil, pen, eraser and output total bill (incl. of 18% GST)

#include <iostream>
using namespace std;

int main(){

    float costofPencil, costofEraser, costofPen;

    cout << "Enter the cost of pencil: ";
    cin >> costofPencil;

    cout << "Enter the cost of eraser: ";
    cin >> costofEraser;

    cout << "Enter the cost of pen: ";
    cin >> costofPen;

    float sum = (costofEraser + costofPen + costofPencil) * 1.18;

    cout << "Total Bill including GST: " << sum << endl;
    return 0;
}