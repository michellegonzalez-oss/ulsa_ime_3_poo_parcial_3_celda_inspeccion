#include "ReporteTurno.h"

namespace calidad {

void ReporteTurno::registrarPieza(bool fueAceptada) {
    inspeccionadas_++;
    if (fueAceptada) {
        aceptadas_++;
    } else {
        rechazadas_++;
    }
}

void ReporteTurno::imprimir(const std::vector<Dispositivo*>& dispositivos) const {
    std::cout << "\n====================================================\n";
    std::cout << "         REPORTE FINAL DE INSPECCION DE TURNO       \n";
    std::cout << "====================================================\n";
    std::cout << " Total de piezas inspeccionadas : " << inspeccionadas_ << '\n';
    std::cout << " Total de piezas aceptadas      : " << aceptadas_ << '\n';
    std::cout << " Total de piezas rechazadas     : " << rechazadas_ << '\n';
    std::cout << "----------------------------------------------------\n";
    std::cout << " DESGLOSE DE RECHAZOS POR DISPOSITIVO:\n";
    
    for (const Dispositivo* d : dispositivos) {
        if (d != nullptr) {
            std::cout << "  - [" << d->id() << "] " 
                      << std::left << std::setw(38) << d->descripcion()
                      << " : " << d->getRechazos() << " rechazo(s)\n";
        }
    }
    std::cout << "====================================================\n\n";
}

}  // namespace calidad