#include <iostream>
#include "Process.cpp"


int main() {
    //auto *carlos = new SyncProcess("Hola");
    //carlos->run();

    //auto *lucas = new AsyncProcess("Hola","jeje");
    //lucas->run();


    auto *fifo = new Queue<Process*,10>();


    //Encolar 10 procesos: 5 Syn, 5 Async


    fifo->enqueue(new AsyncProcess("TestAsync",""));
    fifo->enqueue(new SyncProcess("TestSync"));
    fifo->enqueue(new AsyncProcess("TestAsync",""));
    fifo->enqueue(new SyncProcess("TestSync"));
    fifo->enqueue(new AsyncProcess("TestAsync",""));
    fifo->enqueue(new SyncProcess("TestSync"));
    fifo->enqueue(new AsyncProcess("TestAsync",""));
    fifo->enqueue(new SyncProcess("TestSync"));
    fifo->enqueue(new AsyncProcess("TestAsync",""));
    fifo->enqueue(new SyncProcess("TestSync"));


    fifo->dequeue()->run();
    fifo->dequeue()->run();
    fifo->dequeue()->run();
    fifo->dequeue()->run();
    fifo->dequeue()->run();
    fifo->dequeue()->run();
    fifo->dequeue()->run();
    fifo->dequeue()->run();
    fifo->dequeue()->run();
    fifo->dequeue()->run();








    return 0;
}