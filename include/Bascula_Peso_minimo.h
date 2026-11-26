#pragma once
#include "Dispositivo.h"

namespace calidad {

class Bascula : public Dispositivo {
private:
    double pesoMin_;
    double desfase_;

public:
Basculamin(const std::string& id, double pesoMin, double desfaseFabrica);

    bool necesitaCalibracion() const override;
    bool calibrar() override;

    std::string descripcion() const override;
    bool inspeccionar(const Pieza& pieza) override;
};

} 