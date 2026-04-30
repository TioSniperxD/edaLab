#include <iostream> //Permite usar entrada y salida (cin,cout)
using namespace std; //Permite usar cin y cout sin escribir std::

int main() { //Inicio de la funcion principal
    int valor; //Declara una variable entera con nombre "valor"
    cout << "Ingrese un numero: "; //Muestra un mensaje en pantalla
    cin >> valor; // Lee un numero que debemos ingresar y lo guarda en "valor"

    int *puntero = &valor; //Declara un puntero y le asigna la direccion de memoria de valor

    cout << "Direccion de memoria: " << puntero << endl; //Imprime la direccion de memoria almacenada en el puntero
    cout << "Contenido en esa direccion: " << *puntero << endl; //Imprime el valor al que apunta el puntero

    return 0; //Finaliza el programa
}