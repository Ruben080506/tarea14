//3) Trabajando con variable booleanas(Realizado en clases).



#include <iostream>

int main() {
    bool esVerdadero = true;
    bool esFalso = false;

    std::cout << "El valor de esVerdadero es: " << esVerdadero << std::endl;
    std::cout << "El valor de esFalso es: " << esFalso << std::endl;

    // Operaciones con variables booleanas
    bool resultadoAnd = esVerdadero && esFalso;
    bool resultadoOr = esVerdadero || esFalso;
    bool resultadoNot = !esVerdadero;

    std::cout << "El resultado de la operación AND (&&) es: " << resultadoAnd << std::endl;
    std::cout << "El resultado de la operación OR (||) es: " << resultadoOr << std::endl;
    std::cout << "El resultado de la operación NOT (!) sobre esVerdadero es: " << resultadoNot << std::endl;

    return 0;
}