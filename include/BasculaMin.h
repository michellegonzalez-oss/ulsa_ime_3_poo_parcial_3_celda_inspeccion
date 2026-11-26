#pragma once
#include "Dispositivo.h"

namespace calidad {

class BasculaMin : public Dispositivo {
private:
    double pesoMin_;

public:
BasculaMin(const std::string& id, double pesoMin);

    std::string descripcion() const override;
    bool inspeccionar(const Pieza& pieza) override;
};

} 