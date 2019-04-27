//
// Created by Christian Ledgard on 2019-04-27.
//

#ifndef HERENCIA_Y_POLIMORFISMO_CON__H_FIGURA_H
#define HERENCIA_Y_POLIMORFISMO_CON__H_FIGURA_H

#include <iostream>


using namespace std;

class Figura{
public:
    //Metodos abstractos.
    //Se definen en la clase base y se implementan en las hijas.
    virtual float calcularArea() = 0;
    virtual void mostrarAtributos() = 0;

    //Metodos concretos:
    //Se definen e implementan en la clase base.
    void mostrarArea(){
        cout<< "\t Area: "<< calcularArea()<< endl;
    }

    virtual void mostrarFigura(){
        mostrarAtributos();
        mostrarArea();
    }

};
#endif //HERENCIA_Y_POLIMORFISMO_CON__H_FIGURA_H
