
#ifndef TAREAEXTRACLASEI_COLLECTOR_H
#define TAREAEXTRACLASEI_COLLECTOR_H


#include <iostream>
/**
 * Clase Collector
 * @author Anthony Chaves
 */


class Node;

#include "../List/Node.h"

class Collector {
private:
    Node ** directions;
    int dirs;
    /**
     * Retorna un valor de verdad segun si hay direcciones disponibles
     * @return valor de verdad que indica si se tienen direcciones
     */
    bool hasDirs();
    /**
     * Muestra las referencias a los espacios de memoria disponibles
     */
    void printCollector();
public:
    /**
     * Constructor de la clase
     */
    Collector();
    /**
     * Agrega una direccion de memorias al "stock" de direcciones
     * @param new_dir nueva direccion de memoria agregada
     */
    void addDir(Node* new_dir);
    /**
     * Asigna una direccion de memoria en caso de que existan en el stock
     * @return la direccion asignada y NULL en caso de que no se encuentren direcciones disponibles
     */
    void * assign_dir();

};


#endif //TAREAEXTRACLASEI_COLLECTOR_H
