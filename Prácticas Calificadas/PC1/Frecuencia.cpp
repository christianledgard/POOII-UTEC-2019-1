//
// Created by Christian Ledgard on 2019-04-16.
//

#include <iostream>
#include <fstream>
#include <string>
#include <map>
#include <iomanip>
#include "List.cpp"


using namespace std;

class Frecuencia{
private:
    fstream* archivo;
    string nombreArchivo;
    map<int,int> contador;
    List* faa = new List();
    List* fr = new List();
    List* fra = new List();


public:
    Frecuencia(string nombreArchivo) {
        this->nombreArchivo=nombreArchivo;
        int elemento;
        archivo = new fstream(nombreArchivo, ios::in);

        std::locale loc;

        while (*archivo >> elemento){
            adicionarElemento(elemento);
        }

        if (archivo ->is_open())
            archivo->close();

    }

    void adicionarElemento(int elemento) {
        contador[elemento]++;
    }



    void CALCULARfrecuenciaAbsolutaAcumulada(){
        int temporal = 0;
        for (auto it = contador.cbegin(); it != contador.cend(); ++it) {
            temporal += it->second;
            faa->insert(temporal);
        }
    }

    void CALCULARfrecuenciaRelativa(){
        for (auto it = contador.cbegin(); it != contador.cend(); ++it) {
            fr -> insert((it->second)*100/sumFI());
        }
    }

    void CALCULARfrecuenciaRelativaAcumulada(){
        int temporal = 0;
        for (auto it = contador.cbegin(); it != contador.cend(); ++it) {
            temporal += (it->second)*100/sumFI();
            fra->insert(temporal);
        }
    }

    int sumFI(){
        unsigned int suma = 0;
        for (auto it = contador.cbegin(); it != contador.cend(); ++it) {
            suma += it->second;
        }
        return suma;
    }

    int sumFR(){
        int suma = 0;
        for (int i = 0; i < fr->getSize(); ++i) {
            suma += fr->getItem(i);
        }
        return suma;
    }

    void imprimirTABLA(){
        CALCULARfrecuenciaAbsolutaAcumulada();
        CALCULARfrecuenciaRelativa();
        CALCULARfrecuenciaRelativaAcumulada();
        print();

    }

    void print() {
        int size = 5;
        int i = 0;
        cout << endl;
        cout << "            - - - TABLA DE FRECUENCIAS - - - " << endl << endl;
        cout << "|" << setw(size) << "xi" << setw(size) << "|" << setw(size) << "fi" << setw(size) << "|" << setw(size) << "fia"
             << setw(size) << "|" << setw(size) << "hi" << setw(size) << "|" << setw(size) << "Hi" << setw(size) << "|" << endl;

        for (auto it = contador.cbegin(); it != contador.cend(); ++it, ++i) {
            cout << "|" << setw(size) << it->first << setw(size) << "|" << setw(size) << it->second << setw(size) << "|" << setw(size)
                 << faa->getItem(i) << setw(size) << "|" << setw(size) << fr->getItem(i) << "%" << setw(size) << "|" << setw(size)
                 << fra->getItem(i) << "%" << setw(size) << "|" << endl;
        }

        cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
        cout << "|" << setw(size) << "Σ" << setw(size) << "|" << setw(size) << sumFI() << setw(size) << "|" << setw(size)
             << "-" << setw(size) << "|"<< setw(size) << sumFR() << "%" << setw(size) << "|";
    }

    virtual ~Frecuencia() {
        if (archivo ->is_open())
            archivo->close();

        delete faa;
        delete fr;
        delete fra;
        delete[] archivo;
    }

};
