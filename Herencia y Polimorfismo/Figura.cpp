//
// Created by Christian Ledgard on 2019-04-27.
//
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

};