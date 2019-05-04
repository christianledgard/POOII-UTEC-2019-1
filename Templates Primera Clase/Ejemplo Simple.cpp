#include <iostream>
using namespace std;


template <class T>
T mayor(T a1, T a2){
    T resultado;
    if(a1<a2)
        resultado = a2;
    else
        resultado = a1;
    return resultado;
}


int main() {

    cout << mayor(11,12);
    cout << mayor(12.567,12.56778);

    return 0;
}