// Year is leap year or not

#include <iostream>
using namespace std;

int main(){

    int year;
    cout << "Enter year: ";
    cin >> year;

    if (year % 400 == 0){
        cout << "Year is a century leap year" << endl;
    }
    else if (year % 100 == 0){
        cout << "Year is a century non-leap year" << endl;

    }
    else if (year % 4 == 0){
        cout << "Year is a normal leap year" << endl;
    }
    else{
        cout << "Year is not a leap year" << endl;
    }

    return 0;
}