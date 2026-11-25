#include "Bascula.h"

namespace calidad {

Bascula::Bascula(const std::string& id, double pesoMin, double pesoMax, bool estaDescalibrada)
    : Dispositivo(id), pesoMin_(pesoMin), pesoMax_(pesoMax), descalibrada_(estaDescalibrada) {}
