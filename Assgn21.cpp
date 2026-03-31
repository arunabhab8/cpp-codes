/* Write a program to print the below pattern:

     *
    ***
   *****
  *******   

  *******
   *****
    ***
     *
*/

#include<iostream>
using namespace std;

int main(){

    int i,j,k,n;
    cout << "Enter the value of n: ";
    cin >> n;

    for(i=1;i<=n;i++){
        for(j=1;j<=n-i;j++){
            cout << " ";
        }
        for (k=1;k<=2*i-1;k++){
            cout << "*";
        }

        cout << endl;
    }

    for(i=n;i>=1;i--){

        for (j=1;j<=n-i;j++){
            cout << " ";
        }
        for(k=1;k<=i*2-1;k++){
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}