#include <iostream>
#include "Frecuencia.cpp"

int main() {
    cout << "PC1 / Christian Ledgard Ferrero"<< endl;

    Frecuencia* Notas = new Frecuencia("notas.txt");

    Notas->imprimirTABLA();


    return 0;
}

