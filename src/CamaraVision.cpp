// src/CamaraVision.cpp
#include "CamaraVision.h"

namespace calidad {

CamaraVision::CamaraVision(const std::string& id)
    : Dispositivo(id) {}

std::string CamaraVision::descripcion() const {
    return "Cámara de Visión Artificial (Defectos Visibles)";
}

bool CamaraVision::inspeccionar(const Pieza& pieza) {
    // Rechaza la pieza si tiene defectos visibles
    return !pieza.tieneDefectos();
}

}  // namespace calidad