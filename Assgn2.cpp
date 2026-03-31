/* Enter cost of 3 items from user (float datatype). 
Output total cost of items. Add 18% gst to the final bill*/

#include<iostream>
using namespace std;

int main(){
    float costofPen, costofPencil, costofEraser, sum=0;
    cout << "Enter the price of Pen: ";
    cin >> costofPen;
    cout << "Enter the cost of Pencil: ";
    cin >> costofPencil;
    cout << "Enter the cost of Eraser: ";
    cin >> costofEraser;

    sum = 1.18 * (sum + costofPen + costofPencil + costofEraser);

    cout << "Total Bill: " << sum << endl;
    return 0;
}