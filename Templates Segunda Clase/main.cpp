#include <iostream>
#include "list.cpp"
#include "linked_list.cpp"

int main() {
    /*
    auto * stringList = new List<string,5>();

    stringList->pushBack("Ximana");
    stringList->pushBack("Mateo");
    stringList->pushBack("Josefina");
    stringList->pushBack("Carlos");
    stringList->pushBack("Jose");
    stringList->pushBack("Mateo");
    stringList->pushBack("Christian");

    stringList->printItems();
    cout<<endl;

    stringList->insertAt("JOSE",3);

    stringList->printItems();

    */

    auto* stringLinkedList = new LinkedList<string>();

    stringLinkedList->pushBack("Juan");
    stringLinkedList->pushBack("Carlos");
    stringLinkedList->pushBack("Josefina");
    stringLinkedList->pushBack("Mateo");
    stringLinkedList->pushBack("Christian");

    stringLinkedList->printItems();

    return 0;
}