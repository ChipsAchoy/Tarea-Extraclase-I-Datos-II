
#ifndef TAREAEXTRACLASEI_LIST_H
#define TAREAEXTRACLASEI_LIST_H

#include <iostream>

using namespace std;
class Node;

class Collector;

#include "Node.h"
#include "../Collector/Collector.h"

class List {
    private:
        int list_len;
    public:
        Node * head = NULL;
        /**
         * Constructor de la clase lista
         */
        List();
        /**
         * Elimina el primer nodo de la lista
         */
        void deleteNode();
        /**
         * Agrega un nodo al inicio de la lista
         * @param value valor asociado al nodo
         */
        void addNode(int value);
        /**
         * Muestra los nodos de la lista
         */
        void printList();

};

#endif //TAREAEXTRACLASEI_LIST_H
