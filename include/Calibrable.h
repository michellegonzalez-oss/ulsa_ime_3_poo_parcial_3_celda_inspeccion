#pragma once

namespace calidad {

class Calibrable {
public:
    // Destructor virtual obligatorio para garantizar la destrucción segura vía puntero
    virtual ~Calibrable() = default;

    // Métodos virtuales puros: definen el contrato de calibración
    virtual bool necesitaCalibracion() const = 0;
    virtual void calibrar() = 0;
};

}  // namespace calidad