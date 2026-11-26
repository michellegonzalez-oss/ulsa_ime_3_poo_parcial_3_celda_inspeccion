<!-- Resultados y respuestas de los experimentos 1 y 2. -->
PS C:\Users\Renata Farías\Documents\GitHub\ulsa_ime_3_poo_parcial_3_celda_inspeccion> g++ -std=c++17 -Iinclude experimentos/memoria.cpp src/Bascula.cpp src/CalibradorLaser.cpp src/CamaraVision.cpp src/SensorTemperatura.cpp src/Pieza.cpp -o exp_memoria.exe; if ($?) { .\exp_memoria.exe }
=== Experimento 2: Object Slicing ===
V├¡a Referencia: B├íscula de Inspecci├│n de Peso

=== Experimento 3: Destrucci├│n Polim├│rfica Segura ===
PS C:\Users\Renata Farías\Documents\GitHub\ulsa_ime_3_poo_parcial_3_celda_inspeccion> 


PS C:\Users\Renata Farías\Documents\GitHub\ulsa_ime_3_poo_parcial_3_celda_inspeccion> g++ -std=c++17 -Iinclude experimentos/destructores.cpp src/Bascula.cpp src/CalibradorLaser.cpp src/CamaraVision.cpp src/SensorTemperatura.cpp src/Pieza.cpp -o exp_destructores.exe; if ($?) { .\exp_destructores.exe }
=== Experimento 1: Memoria y vptr ===
sizeof(std::string): 32 bytes
sizeof(Dispositivo): 40 bytes (contiene id_ + vptr oculto)
sizeof(Bascula):     72 bytes (base + atributos propios)
PS C:\Users\Renata Farías\Documents\GitHub\ulsa_ime_3_poo_parcial_3_celda_inspeccion> 