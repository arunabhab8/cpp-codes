// Namespace access

#include <iostream>

namespace A {
    void display(){
        std:: cout << "Arunabha" << std::endl;
    }
}

namespace B {
    void display(){
        std:: cout << "Souvik" << std:: endl;
    }
}

int main(){

    A:: display();
    B:: display();
    return 0;
}