// OOPs practice

#include <iostream>
#include <string>
using namespace std;

class User{

    int id;
    string password;

public:
    string username;

    User(int id){
        this->id = id;
    }

    void setPassword(string password){
        this->password = password;
    }

    string getPassword(){
        return password;
    }

    int getId(){
        return id;
    }
};


int main(){

    User u1(1234);

    u1.setPassword("arunabha");
    cout << "Password: " << u1.getPassword() << endl;
    cout << "Id: " << u1.getId() << endl;
    return 0;
}