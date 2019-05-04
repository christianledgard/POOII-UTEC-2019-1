//
// Created by Christian Ledgard on 2019-05-04.
//

#include <iostream>
#include <cmath>

using namespace std;

//Plantilla a funcion con dos parametros diferentes.

template <class Y, class T>
T entrePI(Y argumento){
    return argumento/M_PI;
}


//Plantilla a clase con 1 parametro que identifica a un atributo

template <class T>
class Clase{
private:
    T atributo;

public:
    Clase(T atributo) : atributo(atributo) {}
};


//Clase que toma dos parametros como plantilla.
//Uno con argumento al constructor y  otro de retorno de una funcion miembro sin argumentos.

template <class A, class R>
class Clase2{
public:
    Clase2(A argumento) {}

    R metodoSinParametros(){
        R result;
        return result;
    }
};

//Declarar una clase plantilla con un parametro entero con un valor por defecto
// y que sirva como el  tamamño de un atributo array.


template <class A, class D>
class Clase3{
private:
    D* arreglo;
public:
    Clase3(A const size = 10) {
        arreglo = new D[size];
    }
};




int main() {

    cout << entrePI<int, double>(1250);


    return 0;
}
