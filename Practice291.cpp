// Friend class and Friend Function

#include <iostream>
using namespace std;

class Example{

private: 
    string password;

public:
    Example(string password){
        this->password = password;
    }

    friend class Show;
    friend void showPassword(Example &obj);
};

class Show{

public:
    void showPassword(Example &obj){
        cout << "Password: " << obj.password << endl;
    }

};

void showPassword(Example &obj){
    cout << "Password: " << obj.password << endl;
}


int main(){

    Example e1("arunabha");

    Show s1;
    s1.showPassword(e1);

    showPassword(e1);

    return 0;
}