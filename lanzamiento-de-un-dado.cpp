//2) Diseñe el programa que simule el lanzamiento de un dado al pulsar la tecla ENTER. Se gana el juego si sale 1 o 6 (Realizado en clases)..

#include <iostream>
#include <cstdlib>
#include <conio.h>

int main() {
    char tecla;

    std::cout << "Presiona ENTER para lanzar el dado." << std::endl;

    do {
        tecla = getch();
    } while (tecla != 13); // 13 es el código ASCII para la tecla ENTER

    // Generar un número aleatorio entre 1 y 6
    int resultado = rand() % 6 + 1;

    std::cout << "El resultado del lanzamiento del dado es: " << resultado << std::endl;

    if (resultado == 1 || resultado == 6) {
        std::cout << "¡Ganaste el juego!" << std::endl;
    } else {
        std::cout << "No ganaste esta vez. ¡Inténtalo de nuevo!" << std::endl;
    }

    return 0;
}