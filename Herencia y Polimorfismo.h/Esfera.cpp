//
// Created by Christian Ledgard on 2019-04-27.
//

#include "Esfera.h"

float Esfera::calcularArea() {
    return Circulo::calcularArea()*4;
}

Esfera::Esfera(float radio) : Circulo(radio) {}

void Esfera::mostrarFigura() {
    cout << "Esfera" << endl;
    Figura::mostrarFigura();
}

