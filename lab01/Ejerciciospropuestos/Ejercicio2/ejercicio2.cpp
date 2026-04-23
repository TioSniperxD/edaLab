#include <iostream>
using namespace std;
class Vehiculo{
public:
    virtual void iniciar()=0;
    virtual void detener()=0;
};
class Auto : public Vehiculo{
public:
    void iniciar() override{
        cout << "El auto está iniciando." << endl;
    }
    void detener() override{
        cout << "El auto se ha detenido." << endl;
    }
};
int main() {
    Auto miAuto;
    miAuto.iniciar();
    miAuto.detener();
    return 0;
}