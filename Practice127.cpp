// OOPs concept for bank account

#include <iostream>
using namespace std;


class BankAccount {

    double balance = 1000;

    public:
    //Setter
    void deposit(double amount){
        if (amount > 0){
            balance = balance + amount;
        }else {
            cout << "Deposit amount is invalid" << endl;
        }
    }
    
    //Setter
    void withdraw(double amount){
        if (amount > 0 && balance >= amount){
            balance = balance - amount;
        }
    }

    double getBalance(){
        return balance;
    }
};


int main(){

    BankAccount acc;
    acc.deposit(500);
    cout << acc.getBalance() << endl;

    acc.withdraw(1000);
    cout << acc.getBalance() << endl;

    acc.deposit(-100);

    return 0;
}