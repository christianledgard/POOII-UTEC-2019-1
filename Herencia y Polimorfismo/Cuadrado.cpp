//
// Created by Christian Ledgard on 2019-04-27.
//
#include "Figura.cpp"

class Cuadrado: public Figura{
private:
    float lado;

public:
    Cuadrado(float lado) : lado(lado) {}

    float calcularArea() override {
        return lado*lado;
    }

    void mostrarAtributos() override {
        cout<< "\t Lado: "<< lado << endl;
    }


};