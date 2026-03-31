// Reference variables returning

#include <iostream>
using namespace std;

int &func(int &a){

   a = 20;
   cout << "a: " << a << endl;
   return a;
}


int main(){
    int a = 10;
    cout << "a: " << a << endl;
    int &b = func(a);
    cout << b << endl;
    return 0;
}