#pragma once

#include <vector>
#include <iostream>
#include <iomanip>

#include "Dispositivo.h"

namespace calidad {

class ReporteTurno {
private:
    int inspeccionadas_ = 0;
    int aceptadas_ = 0;
    int rechazadas_ = 0;

public:
    ReporteTurno() = default;

    // Registra el resultado global de la inspección de una pieza
    void registrarPieza(bool fueAceptada);

    // Métodos de lectura (getters const)
    int inspeccionadas() const { return inspeccionadas_; }
    int aceptadas() const { return aceptadas_; }
    int rechazadas() const { return rechazadas_; }

    // Genera la salida formateada en consola con el desglose del turno
    void imprimir(const std::vector<Dispositivo*>& dispositivos) const;
};

}  // namespace calidad