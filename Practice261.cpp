// Practice for OOPs concepts

#include <iostream>
#include <string>

using namespace std;

class User{

private:
    int id;
    string password;

public:
    string username;

    User(){
        cout << "Default constructor, calling...." << endl;
    }

    User(int id){
        this->id = id;
    }

    void setPassword(string password){
        this->password = password;
    }

    string getPassword(){
        return password;
    }
};


int main(){

    User u1 (5);
    u1.setPassword("arunabha");
    cout << "Password: " << u1.getPassword() << endl;

    return 0;
}