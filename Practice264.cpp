// OOPs practice


#include <iostream>
using namespace std;

class User{

private:
    string password;

public:
    string username;

    User(string username, string password){
        this->username = username;
        this->password = password;
    }

    void setPassword(string password){
        this->password = password;
    }

    string getPassword(){
        return password;
    }

};

int main(){

    User u1("arunabha", "abcd");

    cout << u1.username << endl;

    //u1.setPassword("abcd");
    cout << u1.getPassword() << endl;

    return 0;
}
