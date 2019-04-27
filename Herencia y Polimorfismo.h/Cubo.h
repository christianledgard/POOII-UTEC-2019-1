//
// Created by Christian Ledgard on 2019-04-27.
//

#ifndef HERENCIA_Y_POLIMORFISMO_CON__H_CUBO_H
#define HERENCIA_Y_POLIMORFISMO_CON__H_CUBO_H

#include "Figura.h"
#include "Cuadrado.h"

class Cubo: public Cuadrado{
public:
    Cubo(float lado);

    float calcularArea() override;

    void mostrarFigura() override;
};

#endif //HERENCIA_Y_POLIMORFISMO_CON__H_CUBO_H
