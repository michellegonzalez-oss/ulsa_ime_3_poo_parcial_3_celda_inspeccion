#include "SensorTemperatura.h"

namespace calidad {

SensorTemperatura::SensorTemperatura(const std::string& id, double tempMax, bool requiereCalib)
    : Dispositivo(id), tempMax_(tempMax), requiereCalib_(requiereCalib) {}

bool SensorTemperatura::necesitaCalibracion() const { return requiereCalib_; }

bool SensorTemperatura::calibrar() {
    requiereCalib_ = false;
    return true;
}

std::string SensorTemperatura::descripcion() const { return "Sensor Térmico Infrarrojo"; }

bool SensorTemperatura::inspeccionar(const Pieza& pieza) {
    double temp = pieza.temperatura();
    if (requiereCalib_) temp += 10.0;
    return (temp <= tempMax_);
}

}  // namespace calidad