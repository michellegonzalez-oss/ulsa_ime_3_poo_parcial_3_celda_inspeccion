#pragma once
#include "Dispositivo.h"

namespace calidad {

class Bascula : public Dispositivo {
private:
    double pesoMin_;
    double desfase_;

public:
Bascula(const std::string& id, double pesoMin,);

    std::string descripcion() const override;
    bool inspeccionar(const Pieza& pieza) override;
};

} 