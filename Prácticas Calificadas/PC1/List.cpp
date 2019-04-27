//
// Modified by christianledgard on 15/04/2019.
//
#include <iostream>
#include <string>
using namespace std;

class List {
private:
    int const CAPACITY = 5;
    int reserved;
    int size;
    int* items;
public:
    List() {
        initialize();
    }

    void initialize() {
        reserved = CAPACITY;
        size = 0;
        items = new int[reserved];
    }

    void insert(int item) {
        if (size == reserved) {
            reserve();
        }
        items[size] = item;
        size++;
    }

    void reserve() {
        reserved += CAPACITY;
        int* array = new int[reserved];
        for (int i = 0; i < size; i++) {
            array[i] = items[i];
        }
        delete[] items;
        items = array;
    }

    int getItem(int item){
        return items[item];

    }

    ~List() {
        delete items;

    }

    int getSize() {
        return size;
    }
};

