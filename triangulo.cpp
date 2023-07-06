//8)  Lea los valores de los lados de un triángulo.
// Diseñe el programa para determinar si el triángulo es : EQUILÁTERO,  ISÓSCELES,  ESCALENO. 

//- Es equilátero: si tiene 3 lados iguales

//- Es Isósceles: usted debe consultar cuando un triángulo es isósceles

//- Es Escaleno: usted debe consultar cuando un triángulo es escaleno.

#include <iostream>
using namespace std;

int main() {
    float lado1, lado2, lado3;
    cout << "Ingresa el valor del primer lado: ";
    cin >> lado1;
    cout << "Ingresa el valor del segundo lado: ";
    cin >> lado2;
    cout << "Ingresa el valor del tercer lado: ";
    cin >> lado3;

    if (lado1 == lado2 & lado2 == lado3) 
    {
        cout << "El triángulo es EQUILÁTERO" << endl;
    } else if (lado1 == lado2 || lado1 == lado3 || lado2 == lado3) 
    {
        cout << "El triángulo es ISÓSCELES" << endl;
    } else {
        cout << "El triángulo es ESCALENO" << endl;
    }

    return 0;
}