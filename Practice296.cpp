// Bank Account example

#include <iostream>

using namespace std;

class BankAccount{

    int accountNumber;
    float balance;

public:
    BankAccount(int accountNumber, float balance): accountNumber(accountNumber), balance(balance){
        // this->accountNumber = accountNumber;
        // this->balance = balance;
    }

    void deposit(float amount){
        if (amount > 0){
            balance += amount;
        }
        else{
            cout << "Invalid deposit amount...\n";
        }
    }

    void withdraw(float amount){
        if (balance > 0 && amount <= balance && amount > 0){
            balance -= amount;
        }
    }

    float getBalance(){
        return balance;
    }
};


int main(){

    BankAccount b(12345, 10000);
    cout << "Balance: " << b.getBalance() << endl;

    b.deposit(-1000);
    b.deposit(20000);
    b.withdraw(1000);
    cout << "Balance: " << b.getBalance() << endl;

    return 0;
}