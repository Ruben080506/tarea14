//10) Desarrolle   un  programa que  permita   leer  tres   valores   y  almacenarlos   en   las  variables   num1, num2, num3  respectivamente.  
//El  algoritmo  debe  imprimir  cual  número es  el  mayor. Asuma que los valores ingresados son diferentes.

#include <iostream>
using namespace std;

int main() {
    int num1, num2, num3;
    cout << "Ingresa el primer número: ";
    cin >> num1;
    cout << "Ingresa el segundo número: ";
    cin >> num2;
    cout << "Ingresa el tercer número: ";
    cin >> num3;

    int mayor = num1;

    if (num2 > mayor) {
        mayor = num2;
    }
    if (num3 > mayor) {
        mayor = num3;
    }

    cout << "El número mayor es: " << mayor << endl;

    return 0;
}