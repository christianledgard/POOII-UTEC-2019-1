#include <iostream>
#include "Circulo.cpp"
#include "Cuadrado.cpp"

int main() {
    Figura* circulo = new Circulo(20);
    Figura* cuadrado = new Cuadrado(40);

    circulo->mostrarAtributos();
    circulo->mostrarArea();

    cuadrado->mostrarAtributos();
    cuadrado->mostrarArea();

    delete circulo;
    delete cuadrado;

    return 0;
}