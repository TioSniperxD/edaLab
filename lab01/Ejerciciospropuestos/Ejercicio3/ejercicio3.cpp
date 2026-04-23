#include <iostream>
using namespace std;

class Auto{
private:
    string modelo;
    int anio;
public:
    Auto(){
        modelo = "Desconocido";
        anio = 0;
    }
    Auto(string m, int a){
        modelo = m;
        anio = a;
    }
    void mostrar(){
        cout << "Modelo: " << modelo << endl;
        cout << "Anio: " << anio << endl;
    }
};
int main(){
    Auto auto1;
    Auto auto2("Toyota Corolla", 2022);
    auto1.mostrar();
    auto2.mostrar();
    return 0;
}