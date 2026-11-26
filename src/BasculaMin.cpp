#include "BasculaMin.h"

namespace calidad {

BasculaMin::BasculaMin(const std::string& id, double pesoMin)
    : Dispositivo(id), pesoMin_(pesoMin) {}

std::string BasculaMin::descripcion() const { 
    return "Bascula de Inspeccion de Peso"; 
}

bool BasculaMin::inspeccionar(const Pieza& pieza) {
    double pesoMedido = pieza.peso();
    return (pesoMedido >= pesoMin_);
}

}  