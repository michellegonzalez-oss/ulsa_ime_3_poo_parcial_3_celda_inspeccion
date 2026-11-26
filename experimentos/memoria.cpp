// Experimento 1: memoria y object slicing bajo herencia.
// Programa independiente: no usa las clases del proyecto.
#include <iostream>
#include "Bascula.h"
#include "Dispositivo.h"

using namespace calidad;

int main() {
    std::cout << "=== Experimento 2: Object Slicing ===\n";
    Bascula b("B-01", 10.0, 16.0, 2.0);

    // Asignación por referencia (Conserva el objeto real y el polimorfismo)
    Dispositivo& ref = b;
    std::cout << "Vía Referencia: " << ref.descripcion() << '\n';

    // Nota: La asignación por valor (Dispositivo copia = b;) provocaría Object Slicing,
    // pero se previene en compilación porque Dispositivo es una clase abstracta.

    std::cout << "\n=== Experimento 3: Destrucción Polimórfica Segura ===\n";
    // Liberación de memoria dinámica a través de un puntero a la clase base
    Dispositivo* ptr = new Bascula("B-DYN", 10.0, 16.0, 0.0);
    
    // delete usa el vptr para ejecutar ~Bascula() y luego ~Dispositivo()
    delete ptr;

    return 0;
}