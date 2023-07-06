//) Se lee por teclado la nota de grado de un estudiante universitario. 
//Determinar la escala cualitativa de esa nota, considerando: 

//mayor o igual que 1 y menor que 3 es INSUFICIENTE

//mayor o igual que 3 y menor que 5 es REGULAR

//mayor o igual que 5 y menor 7 es BUENO

//mayor o igual que 7 y menor que 9 MUY BUENO

//mayor o igual que 9 y menor o igual que 10 es EXCELENTE

#include <iostream>
using namespace std;

int main() {
    float nota;
    cout << "Ingresa la nota de grado: ";
    cin >> nota;

    if (nota >= 1 && nota < 3) {
        cout << "NOTA INSUFICIENTE" << endl;
    } else if (nota >= 3 && nota < 5) {
        cout << "NOTA REGULAR" << endl;
    } else if (nota >= 5 && nota < 7) {
        cout << "NOTA BUENA" << endl;
    } else if (nota >= 7 && nota < 9) {
        cout << "NOTA MUY BUENA" << endl;
    } else if (nota >= 9 && nota <= 10) {
        cout << "NOTA EXCELENTE" << endl;
    } else {
        cout << "Nota inválida, por favor ingresa una nota entre 1 y 10." << endl;
    }

    return 0;
}