
#ifndef TAREAEXTRACLASEI_COLLECTOR_H
#define TAREAEXTRACLASEI_COLLECTOR_H


#include <iostream>

class Node;

#include "../List/Node.h"

class Collector {
private:
    Node ** directions;
    bool hasDirs();
    int dirs;
    void printCollector();
public:
    Collector();
    void addDir(Node* new_dir);
    void * assign_dir();

};


#endif //TAREAEXTRACLASEI_COLLECTOR_H
