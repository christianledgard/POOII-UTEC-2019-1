#include <iostream>
using namespace std;


template <class T>
T getMAX(T n1, T n2){
    return n1 > n2 ? n1 : n2;
}


int main() {

    int i=5, j=10, k;
    long m=65885, n=648897, o;
    double x=646.93, y=648.97, z;

    k=getMAX(i,j);
    o=getMAX(m,n);
    z=getMAX(x,y);
    string s = getMAX("abc","xyz");

    cout<<"El mayor de "<< i << " y "<< j << " es "<< k << "." << endl;
    cout<<"El mayor de "<< m << " y "<< n << " es "<< o << "." << endl;
    cout<<"El mayor de "<< x << " y "<< y << " es "<< z << "." << endl;
    cout<<"El mayor de abc y xyz es "              << s << "." << endl;


    return 0;
}