#include <iostream>
using namespace std;

enum DiaSemana{
    LUNES, MARTES, MIERCOLES, JUEVES, VIERNES, SABADO, DOMINGO
};
void tipoDia(DiaSemana dia) {
    if (dia >= LUNES && dia <= VIERNES) {
        cout << "Es un dia laborable." << endl;
    } else {
        cout << "Es fin de semana." << endl;
    }
}
int main() {
    tipoDia(LUNES);
    tipoDia(SABADO);
    tipoDia(MIERCOLES);

    return 0;
}