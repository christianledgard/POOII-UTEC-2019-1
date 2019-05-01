#include <iostream>
#include <math.h>
using namespace std;

class Progression {
protected:
    long first, cur;
public:
    Progression(long first) : first(first) {}
    long firstValue() {
        return first;
    }
    virtual long nextValue() = 0;
    void printProgression(int n) {
        for (int i = 1; i <= n; i++){
            cout << i <<  " -> "<< nextValue() << endl;
        }
    };
};


class ArithProgression : public Progression {
private:
    long inc;
public:
    ArithProgression(long first, long inc) : Progression(first), inc(inc) {
        cur = first;
    }

    long nextValue() override{
        cur += inc;
        return cur - inc;
    }
};


class GeomProgression : public Progression {
private:
    long base;
public:
    GeomProgression(long first, long base) : Progression(first), base(base) {
        cur = first;
    }

    long nextValue() override {
        cur = cur * base;
        return cur / base;
    }
};

class FibonacciProgression : public Progression {
private:
    long prev;
public:
    FibonacciProgression() : Progression(0), prev(1) {
        cur = first;
    }
    long nextValue() {
        long a = cur, b = prev;
        cur += prev;
        prev = a;
        return cur - b;
    }

};

int main(){
    ArithProgression* arithProgression = new ArithProgression(1, 5);
    arithProgression->printProgression(5);
    cout << endl;
    GeomProgression* geomProgression = new GeomProgression(1, 5);
    geomProgression->printProgression(5);
    cout << endl;
    FibonacciProgression* fibonacciProgression = new FibonacciProgression();
    fibonacciProgression->printProgression(10);

    return 0;
}