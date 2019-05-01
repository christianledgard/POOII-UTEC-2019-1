//
// Created by Christian Ledgard on 2019-04-27.
//

#include "Figura.cpp"
#include <cmath>

class Circulo: public Figura{
private:
    float radio;
    float const PI = M_PI;

public:
    Circulo(float radio) : radio(radio){}
    //Se debe redefinir los metodos abtractos

    float calcularArea() override {
        return PI*radio*radio;
    }

    void mostrarAtributos() override {
        cout << "\t Radio: "<< radio<< endl;
        cout << "\t Pi: "<< PI<< endl;
    }


};

