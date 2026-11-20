#pragma once

#include <string>

#include "Calibrable.h"
#include "Pieza.h"

namespace calidad {

class Dispositivo : public Calibrable {
private:
    std::string id_;

public:
    explicit Dispositivo(const std::string& id) : id_(id) {}

    // Destructor virtual obligatorio para permitir destrucción segura vía Dispositivo*
    virtual ~Dispositivo() = default;

    // Métodos de consulta de la clase base
    const std::string& id() const { return id_; }

    // Métodos virtuales puros: imponen el contrato a las subclases concretas
    virtual std::string tipo() const = 0;
    virtual bool inspeccionar(const Pieza& pieza) = 0;

    // Nota: los métodos necesitaCalibracion() y calibrar() son heredados de Calibrable
};

}  // namespace calidad