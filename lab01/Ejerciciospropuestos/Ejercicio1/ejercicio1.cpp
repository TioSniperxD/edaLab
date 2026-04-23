#include <iostream>
using namespace std;

class Animal {
public:
    virtual void dormirSonido()=0;
};

class Perro: public Animal {
public:
    void dormirSonido() {
        cout << "Zzz" << endl;
    }
    void ladrar(){
        cout << "Guau" << endl;
    }
};

int main() {
    Perro miPerro;
    miPerro.dormirSonido();
    miPerro.ladrar();

    return 0;
}