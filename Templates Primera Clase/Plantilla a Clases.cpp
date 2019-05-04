//
// Created by Christian Ledgard on 2019-05-04.
//

#include <iostream>
using namespace std;

template <class T>
class Pair{
private:
    T first;
    T second;

public:
    Pair(T first, T second) : first(first), second(second) {}

    T getMAX(){
        return first > second ? first : second;
    }

    T getMIN(){
        return first < second ? first : second;
    }

    T getFirst() const {
        return first;
    }

    T getSecond() const {
        return second;
    }


};


int main() {
    auto * pair1 = new Pair<int>(10, 20);
    auto * pair2 = new Pair<double>(10.67, 20.34);
    auto * pair3 = new Pair<double>(356.56, 5);

    cout << "El mayor de " << pair1->getFirst() << " y " << pair1->getSecond() << " es " << pair1->getMAX() << endl;
    cout << "El menor de " << pair1->getFirst() << " y " << pair1->getSecond() << " es " << pair1->getMIN() << endl;

    cout << "El mayor de " << pair2->getFirst() << " y " << pair2->getSecond() << " es " << pair2->getMAX() << endl;
    cout << "El menor de " << pair2->getFirst() << " y " << pair2->getSecond() << " es " << pair2->getMIN() << endl;

    cout << "El mayor de " << pair3->getFirst() << " y " << pair3->getSecond() << " es " << pair3->getMAX() << endl;
    cout << "El menor de " << pair3->getFirst() << " y " << pair3->getSecond() << " es " << pair3->getMIN() << endl;

    delete pair1;
    delete pair2;
    delete pair3;


    return 0;
}