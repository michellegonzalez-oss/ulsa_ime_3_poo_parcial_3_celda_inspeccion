#pragma once
#include "Dispositivo.h"

namespace calidad {

class SensorTemperatura : public Dispositivo {
private:
    double tempMax_;
    bool requiereCalib_;

public:
    SensorTemperatura(const std::string& id, double tempMax, bool requiereCalib = false);

    bool necesitaCalibracion() const override;
    bool calibrar() override;
    std::string descripcion() const override;
    bool inspeccionar(const Pieza& pieza) override;
};

}  // namespace calidad
