// main.cpp: punto de entrada del programa. Lo completa el equipo.
// Revisen la sección "main.cpp" de la Fase 3 en PROYECTO.md.
#include <iostream>
#include <vector>

#include "CeldaInspeccion.h"
#include "CamaraVision.h"

using namespace calidad;

int main() {
    std::cout << "====================================================\n";
    std::cout << "  CELDA ROBOTICA DE INSPECCION DE CALIDAD - PARCIAL 3\n";
    std::cout << "====================================================\n\n";

    // 1. Instanciación de dispositivos con IDs según requerimientos
    // - B-01 (Báscula): Rango [10.0, 50.0] kg, Desfase de fábrica = +5.0 (Descalibrada)
    // - L-01 (Láser):   Rango [100.0, 200.0] mm, Desfase de fábrica = -3.0 (Descalibrado)
    // - C-01 (Cámara):  Inspección visual de defectos
    // - T-01 (Sensor):  Temperatura máxima 80.0 °C (Clase declarada como final)
    
    CamaraVision camara("C-01");

    // 2. Configurar la Celda de Inspección (Relación de Agregación)
    // La celda almacena punteros a los dispositivos existentes sin ser dueña de su memoria
    
    CeldaInspeccion celda;
    celda.agregarDispositivo(&camara);

    // 3. Fase Pre-Turno: Calibración
    // dynamic_cast identifica qué dispositivos son Calibrables y resetea su desfase a 0.0

    // 4. Definición de Lote de Piezas de Prueba
    // Pieza(id, peso, largo, tieneDefectos, temperatura)

    // 5. Fase de Operación: Inspección en Flujo

    // 6. Fase de Cierre: Consolidación del Reporte de Turno

    return 0;
}