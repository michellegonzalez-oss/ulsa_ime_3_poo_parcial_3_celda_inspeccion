#include "BasculaMin.h"

namespace calidad {

Bascula::Bascula(const std::string& id, double pesoMin)
    : Dispositivo(id), pesoMin_(pesoMin) {}

std::string Bascula::descripcion() const { 
    return "Bascula de Inspeccion de Peso"; 
}

bool Bascula::inspeccionar(const Pieza& pieza) {
    double pesoMedido = pieza.peso();
    return (pesoMedido >= pesoMin_);
}

}  