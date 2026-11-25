#pragma once

namespace calidad {

class Bascula : public dispostivo {

    private:
    double pesoMin_;
    double pesoMax_;
    bool descalibrada_;

};

public:
    Bascula(const std::string& id, double pesoMin, double pesoMax, bool estaDescalibrada = false);

    bool necesitaCalibracion() const override;
    bool calibrar() override;
    std::string descripcion() const override;
    bool inspeccionar(const Pieza& pieza) override;
};

}  

