//
// Created by Christian Ledgard on 2019-04-27.
//

#ifndef HERENCIA_Y_POLIMORFISMO_CON__H_CIRCULO_H
#define HERENCIA_Y_POLIMORFISMO_CON__H_CIRCULO_H

#include "Figura.h"
#include <cmath>

class Circulo: public Figura{
private:
    float radio;
    double const PI = M_PI;

public:
    Circulo(float radio);

    float calcularArea() override;

    void mostrarAtributos() override;

    void mostrarFigura() override;

};

#endif //HERENCIA_Y_POLIMORFISMO_CON__H_CIRCULO_H
