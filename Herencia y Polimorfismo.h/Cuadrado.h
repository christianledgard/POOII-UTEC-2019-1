//
// Created by Christian Ledgard on 2019-04-27.
//

#ifndef HERENCIA_Y_POLIMORFISMO_CON__H_CUADRADO_H
#define HERENCIA_Y_POLIMORFISMO_CON__H_CUADRADO_H

#include "Figura.h"

class Cuadrado: public  Figura{
private:
    float lado;

public:
    Cuadrado(float lado);

    float calcularArea() override;

    void mostrarAtributos() override;

    void mostrarFigura() override;
};


#endif //HERENCIA_Y_POLIMORFISMO_CON__H_CUADRADO_H
