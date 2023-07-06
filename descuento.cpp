//9) Un cliente va a comprar una motocicleta y se percata que si la compra el día lunes tiene un descuento del 5%, 
// luego si lo compra el día sábado tiene un descuento del 10%, y si el día es feriado un 12%. 
//Mostrar cuanto pagará en cada opción.   

#include <iostream>
using namespace std;

int main() {
    float precio;
    cout << "Ingresa el precio de la motocicleta: ";
    cin >> precio;

    string dia;
    cout << "Ingresa el día de la semana: ";
    cin >> dia;

    float descuento = 0;
    if (dia == "lunes") {
        descuento = 0.05;
        cout << "Descuento del 5% por comprar el lunes" << endl;
    } else if (dia == "sábado") {
        descuento = 0.10;
        cout << "Descuento del 10% por comprar el sábado" << endl;
    } else if (dia == "feriado") {
        descuento = 0.12;
        cout << "Descuento del 12% por comprar en un día feriado" << endl;
    } else {
        cout << "Sin descuento por comprar en este día" << endl;
    }

    float total_descuento = precio * descuento;
    float precio_final = precio - total_descuento;

    cout << "Precio original: $" << precio << endl;
    cout << "Total de descuento: $" << total_descuento << endl;
    cout << "Precio con descuento: $" << precio_final << endl;

    return 0;
}