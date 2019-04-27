#include <iostream>
#include <vector>

#include "Figura.h"
#include "Circulo.h"
#include "Cuadrado.h"
#include "Esfera.h"
#include "Cubo.h"


int main() {

    vector<Figura*> * figuras = new vector<Figura*>();

    figuras->push_back(new Circulo(10));
    figuras->push_back(new Cuadrado(20));
    figuras->push_back(new Circulo(10));
    figuras->push_back(new Esfera(15));
    figuras->push_back(new Esfera(5));
    figuras->push_back(new Cubo(10));
    figuras->push_back(new Cubo(20));



    for(Figura* figura : *figuras)
        figura->mostrarFigura();

    for(Figura* figura : *figuras)
        delete figura;

    delete figuras;



    /*                    *
     *  SIN POLIMORFISMO  *
     *                    *
    Figura* circulo = new Circulo(20);
    circulo->mostrarFigura();
    delete circulo;


    Figura* cuadrado = new Cuadrado(40);
    cuadrado->mostrarFigura();
    delete cuadrado;

    Figura* esfera = new Esfera(20);
    esfera->mostrarFigura();
    delete esfera;
    */




    return 0;
}