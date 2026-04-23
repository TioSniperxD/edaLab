#include <iostream>
using namespace std;

namespace Matematicas {
    void mostrar() {
        cout << "Mostrando informacion matematica." << endl;
    }
}

namespace Texto {
    void mostrar() {
        cout << "Mostrando informacion de texto." << endl;
    }
}

int main() {
    Matematicas::mostrar();
    Texto::mostrar();

    return 0;
}