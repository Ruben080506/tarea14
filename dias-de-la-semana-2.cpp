//5) Se lee un entero por teclado que representa un día de la semana. 
//Se pide imprimir el nombre del día de la semana. 
//Suponga que el primer día de la semana es Lunes. 
//Use la sentencia switch (Realizado en clases).

#include <iostream>
using namespace std;

int main() {
    int dia;
    cout << "Ingresa un número del 1 al 7: ";
    cin >> dia;

    switch (dia) {
        case 1:
            cout << "Es Lunes" << endl;
            break;
        
            cout << "Es Martes" << endl;
            break;
        case 3:
            cout << "Es Miércoles" << endl;
            break;
        case 4:
            cout << "Es Jueves" << endl;
            break;
        case 5:
            cout << "Es Viernes" << endl;
            break;
        case 6:
            cout << "Es Sábado" << endl;
            break;
        case 7:
            cout << "Es Domingo" << endl;
            break;
        default:
            cout << "Número inválido, por favor ingresa un número del 1 al 7." << endl;
    }

    return 0;
}
