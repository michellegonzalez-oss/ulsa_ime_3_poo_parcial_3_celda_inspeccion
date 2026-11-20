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

    // Destructor virtual para destrucción segura a través de Dispositivo*
    virtual ~Dispositivo() = default;

    // Métodos concretos compartidos
    const std::string& id() const { return id_; }

    // Métodos virtuales puros (Clase Abstracta)
    virtual std::string descripcion() const = 0;
    virtual bool inspeccionar(const Pieza& pieza) = 0;
};

}  // namespace calidad