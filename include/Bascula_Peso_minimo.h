#pragma once
#include <string>
#include "Dispositivo.h"
#include "Pieza.h"

namespace calidad {

class Bascula_Peso_minimo : public Dispositivo {
private:
    double pesoMin_;

public:
Bascula(const std::string& id, double pesoMin);

    std::string descripcion() const override;
    bool inspeccionar(const Pieza& pieza) override;
};

} 