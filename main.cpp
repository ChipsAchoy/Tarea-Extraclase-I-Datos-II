#include <iostream>

#include "List/List.h"

/**
 * Metodo main que permite ver la ejecucion especificada en la documentacion
 * @author Anthony Chaves Achoy
 */

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

}