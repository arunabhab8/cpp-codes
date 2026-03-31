//Program to print factorial of a number n

# include<iostream>
using namespace std;

int fact(int a){
    int i, factorial=1;

    for (i=1;i<=a;i++){
    factorial *= i;
    }
    return factorial;
}


int main(){
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    cout << fact(n) << endl;
    return 0;
}