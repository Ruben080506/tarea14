//1)  Leyendo un carácter con getchar y getch (Realizado en clases).



#include <iostream>
#include <conio.h>

int main() {
    char c;

    std::cout << "Ingresa un caracter: ";

    // Usando getchar
    c = getchar();
    std::cout << "Caracter ingresado usando getchar: " << c << std::endl;

    // Usando getch
    c = getch();
    std::cout << "Caracter ingresado usando getch: " << c << std::endl;

    return 0;
}
