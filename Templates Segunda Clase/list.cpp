//
// Created by econtreras on 6/04/2019.
//
#include <iostream>
#include <string>

using namespace std;

template <class T, unsigned int BUFFER_SIZE>
class List {
private:
    unsigned int const CAPACITY = BUFFER_SIZE;
    int reserved;
    int size;
    T* items;
public:
    List() {
        initialize();
    }

    void initialize() {
        reserved = CAPACITY;
        size = 0;
        items = new T[reserved];
    }

    void insert(T item) {
        if (size == reserved) {
            reserve();
        }
        items[size] = item;
        size++;
    }

    void reserve() {
        reserved += CAPACITY;
        T* array = new T[reserved];
        for (int i = 0; i < size; i++) {
            array[i] = items[i];
        }
        delete[] items;
        items = array;
    }

    T getItem(unsigned int index) {
        return items[index];
    }

    void printItems() {
        for (int i = 0; i < size; i++)
            cout << "list[" << i << "]= " << items[i] << endl;
    }

    T remove(unsigned int index) {
        T toRemove;
        if(index<size) {
            toRemove = items[index];
            for (int i = index; i < size; ++i) {
                items[i] = items[i + 1];
            };
            size--;
        }
        return toRemove;
    }

    void removeAll()
    {
        delete[] items;
        initialize();
    }



    int find(T item) {
        for (int i = 0; i < size; i++) {
            if (item == items[i]) {
                return i;
            }
        }
        return -1;
    }

    bool exist(T item) {
        return find(item) != -1;
    }

    int getSize() const{
        return size;
    }

    int getReserved() const{
        return reserved;
    }

    ~List() {
        delete[] items;
    }
};

