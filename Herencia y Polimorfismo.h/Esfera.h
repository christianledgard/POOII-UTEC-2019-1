//
// Created by Christian Ledgard on 2019-04-27.
//

#ifndef HERENCIA_Y_POLIMORFISMO_CON__H_ESFERA_H
#define HERENCIA_Y_POLIMORFISMO_CON__H_ESFERA_H

#include "Figura.h"
#include "Circulo.h"

class Esfera : public Circulo{
public:
    Esfera(float radio);

    float calcularArea() override;

    void mostrarFigura() override;
};

#endif //HERENCIA_Y_POLIMORFISMO_CON__H_ESFERA_H
