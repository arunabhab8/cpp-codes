// A person buying goods


#include <iostream>
using namespace std;


int main(){

    float costofPencil, costofPen, costofEraser, totalBill;
    cout << "Enter the cost of Pencil: ";
    cin >> costofPencil;

    cout << "Enter the cost of Pen: ";
    cin >> costofPen;

    cout << "Enter the cost of Eraser:";
    cin >> costofEraser;

    totalBill = (costofPen + costofPencil + costofEraser) * 1.18;

    cout << "Total Bill including GST: " << totalBill << endl; 
    
    return 0;
}