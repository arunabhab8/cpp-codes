// OOP Pratice Question

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
       // *this.id = id;
    }

    void setPassword(string newPassword){
        password = newPassword;
    }

    string getPassword(){
        return password;
    }

};

int main(){

    User u (141);
    u.setPassword("Babaisona");
    
    cout << "Password: " << u.getPassword() << endl;

    return 0;
}