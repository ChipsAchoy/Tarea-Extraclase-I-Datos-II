#include <iostream>

#include "List/List.h"

int main() {
    List * list = new List();
    list->addNode(4);
    list->addNode(5);
    list->addNode(7);
    list->addNode(2);
    list->printList();
    list->deleteNode();
    list->printList();
    list->deleteNode();
    list->printList();
    list->addNode(9);
    list->addNode(2);
    list->printList();
    list->addNode(8);
    list->printList();

}