#include <iostream>
#include <string>
#include <algorithm>  // Para std::reverse

int main() {
    // Definir una variable para almacenar la cadena
    std::string cadena;

    // Pedir al usuario que ingrese una cadena
    std::cout << "Introduce una cadena: ";
    std::getline(std::cin, cadena);

    // Revertir la cadena utilizando std::reverse
    std::reverse(cadena.begin(), cadena.end());

    // Mostrar la cadena revertida
    std::cout << "La cadena revertida es: " << cadena << std::endl;

    return 0;
}

