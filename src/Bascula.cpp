#include "Bascula.h"

namespace calidad {

Bascula::Bascula(const std::string& id, double pesoMin, double pesoMax, bool estaDescalibrada)
    : Dispositivo(id), pesoMin_(pesoMin), pesoMax_(pesoMax), descalibrada_(estaDescalibrada) {}
bool Bascula::necesitaCalibracion() const { return descalibrada_; }

bool Bascula::calibrar() {
    descalibrada_ = false;
    return true;
}

std::string Bascula::descripcion() const { return "Báscula de Inspección de Peso"; }

bool Bascula::inspeccionar(const Pieza& pieza) {
    double peso = pieza.peso();
    if (descalibrada_) peso += 5.0; // Aplica sesgo de error por falta de calibración
    return (peso >= pesoMin_ && peso <= pesoMax_);
}

}  // namespace calidad