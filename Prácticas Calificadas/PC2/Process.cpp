//
// Created by Christian Ledgard on 2019-05-14.
//
#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>

using namespace std;

class Process{
protected:
    string name;
    int duration;

public:
    Process(const string &name) : name(name) {
        srand(time(0));
    }
    virtual bool run() = 0;
};


class SyncProcess : public Process{
public:
    SyncProcess(const string &name) : Process(name) {}

    bool run() override {
        duration = (rand() % 90) + 10;
        cout << "\n" << "------" << "\n";
        cout << "Sync Process " << name << endl;
        cout << "\t Duration: " << duration << endl;
        if(duration<80) {
            cout << "\t Result: Success";
            return true;
        }
        else{
            cout << "\t Result: Fail";
            return false;
        }
    }
};

class AsyncProcess : public Process{
private:
    string callbackClient;

public:
    AsyncProcess(const string &name, const string &callbackClient) : Process(name), callbackClient(callbackClient) {}

    bool run() override {
        unsigned int intentos = 0;
        bool result = false;
        cout << "\n" << "------" << "\n";
        cout << "Async Process " << name << endl;

        while(intentos < 10){
            duration = (rand() % 1000) + 100;
            cout << "Attempt " << intentos+1 <<endl;
            cout << "-" << "\t Duration: " << duration << endl;
            if(duration%2!=0){
                cout << "-" << "\t Result: Success" << endl;
                result = true;
            }
            else{
                cout << "-" << "\t Result: Fail" << endl;
                intentos++;
            }
            if(result)
                break;
        }

        if(result)
            return true;
        else
            return false;
    }
};

template<class T, unsigned int N>
class Queue{
private:
    unsigned int const MaxSize = N;
    unsigned int numeroElementos;
    T *array;

public:
    Queue() {
        array = new T[MaxSize];
        numeroElementos = 0;
    }


    T enqueue(T elemento) {
        array[numeroElementos] = elemento;
        numeroElementos++;
    }

    T dequeue(){
        T removing = array[0];
        T* copy = array;
        for (int i = 0; i < numeroElementos; ++i) {
            array[i] = copy[i+1];
        }
        numeroElementos--;
        return removing;
    }

    bool isEmpty(){
        return numeroElementos == 0;
    }

    bool isFull(){
        return  numeroElementos == MaxSize;
    }


    ~Queue() {
        delete[] array;
    }

};