#pragma once
#include "Calibrable.h"
#include "Dispositivo.h"

namespace calidad {

class Bascula : public Dispositivo, public Calibrable {
private:
    double pesoMin_;
    double pesoMax_;
    double desfase_;

public: