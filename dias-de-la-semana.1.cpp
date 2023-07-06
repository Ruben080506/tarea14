//4) Se lee un entero por teclado que representa un día de la semana. 
// Se pide imprimir el nombre del día de la semana. 
//Suponga que el primer día de la semana es Lunes. 
//Use condicionales anidadas 

#include <iostream>
using namespace std;

int main() {
    int dia;
    cout << "Ingresa un número del 1 al 7: ";
    cin >> dia;

    if (dia == 1) {
        cout << "Lunes" << endl;
    } else if (dia == 2) {
        cout << "Martes" << endl;
    } else if (dia == 3) {
        cout << "Miércoles" << endl;
    } else if (dia == 4) {
        cout << "Jueves" << endl;
    } else if (dia == 5) {
        cout << "Viernes" << endl;
    } else if (dia == 6) {
        cout << "Sábado" << endl;
    } else if (dia == 7) {
        cout << "Domingo" << endl;
    } else {
        cout << "Número inválido, por favor ingresa un número del 1 al 7." << endl;
    }

    return 0;
}