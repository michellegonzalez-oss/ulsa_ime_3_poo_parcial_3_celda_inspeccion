#include "Bascula.h"

namespace calidad {

Bascula::Bascula(const std::string& id, double pesoMin, double pesoMax, double desfaseFabrica)
    : Dispositivo(id), pesoMin_(pesoMin), pesoMax_(pesoMax), desfase_(desfaseFabrica) {}

bool Bascula::necesitaCalibracion() const { return desfase_ != 0.0; }

bool Bascula::calibrar() {
    desfase_ = 0.0;
    return true;
}
