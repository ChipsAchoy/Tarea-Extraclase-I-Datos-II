
#ifndef TAREAEXTRACLASEI_NODE_H
#define TAREAEXTRACLASEI_NODE_H


#include <iostream>

/**
 * Clase Node
 * @author Anthony Chaves
 */

class Collector;

#include "../Collector/Collector.h"

class Node {
public:
    Node * next;
    int value;
    /**
     * Constructor de la clase
     *
     * @param val valor asociado al nodo
     * @param n direccion de memoria del siguiente nodo
     */
    Node(int val, Node* n);
    /**
     * Overload del metodo new para la clase Node
     * @param size cantidad de bytes que leera el puntero
     * @return puntero asociado al nodo
     */
    void * operator new(size_t size);
    /**
     * Overload del metodo delete para la clase Node
     * @param n direccion de memoria que contiene la referencia
     */
    void operator delete(void * n)noexcept ;

};


#endif //TAREAEXTRACLASEI_NODE_H
