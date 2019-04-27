//
// Created by Christian Ledgard on 2019-04-27.
//
#include "Circulo.h"


Circulo::Circulo(float radio) : radio(radio) {}

float Circulo::calcularArea() {
    return PI*radio*radio;
}

void Circulo::mostrarAtributos() {
    cout << "\t Radio: "<< radio<< endl;
    cout << "\t Pi: "<< PI<< endl;
}

void Circulo::mostrarFigura() {
    cout << "Circulo" << endl;
    Figura::mostrarFigura();
}
