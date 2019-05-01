//
// Created by Christian Ledgard on 2019-04-30.
//

#include <iostream>
#include <string>
#include <vector>

using namespace std;


class Volumen{
protected:
    string nombre;
    int numVol;

public:
    Volumen(const string &nombre, int numVol) : nombre(nombre), numVol(numVol) {}

    virtual void mostrar(){
        cout << nombre << " " << numVol;
    }

};


class Libro : public Volumen{
private:
    int numLibros;

public:
    Libro(const string &nombre, int numVol, int numLibros) : Volumen(nombre, numVol), numLibros(numLibros) {}

    void mostrar() override {
         Volumen::mostrar(); cout << " " << numLibros << endl;
    }
};


class Revista : public Volumen{
private:
    int numRevistas;

public:
    Revista(const string &nombre, int numVol, int numRevistas) : Volumen(nombre, numVol), numRevistas(numRevistas) {}

    void mostrar() override {
        Volumen::mostrar(); cout << " " << numRevistas << endl;
    }
};


class Biblioteca{
private:
    vector<Volumen*> * volumenes;

public:
    Biblioteca() : volumenes(volumenes) {
        volumenes = new vector<Volumen*>();
    }

    void incluir(Volumen* a){
        volumenes->push_back(a);
    }

    void mostrarBiblioteca(){
        for(Volumen* volumen: *volumenes)
            volumen->mostrar();
    }

};



int main(){

    Biblioteca* biblioteca = new Biblioteca();

    biblioteca->incluir(new Libro("Libro",1,20));
    biblioteca->incluir(new Revista("Revista",1,2));


    biblioteca->mostrarBiblioteca();

    return 0;
}