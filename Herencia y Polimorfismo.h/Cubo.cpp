//
// Created by Christian Ledgard on 2019-04-27.
//

#include "Cubo.h"

Cubo::Cubo(float lado) : Cuadrado(lado) {}

float Cubo::calcularArea() {
    return Cuadrado::calcularArea()*6;
}

void Cubo::mostrarFigura() {
    cout<< "Cubo"<< endl;
    Figura::mostrarFigura();
}
