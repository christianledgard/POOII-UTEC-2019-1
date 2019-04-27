//
// Created by Christian Ledgard on 2019-04-27.
//

#include "Cuadrado.h"


Cuadrado::Cuadrado(float lado) : lado(lado) {}

float Cuadrado::calcularArea() {
    return lado*lado;
}

void Cuadrado::mostrarAtributos() {
    cout<< "\t Lado: "<< lado << endl;
}

void Cuadrado::mostrarFigura() {
    cout<< "Cuadrado" << endl;
    Figura::mostrarFigura();
}
