
#ifndef TAREAEXTRACLASEI_NODE_H
#define TAREAEXTRACLASEI_NODE_H


#include <iostream>

class Collector;

#include "../Collector/Collector.h"

class Node {
public:
    Node(int val, Node* n);
    Node * next;
    int value;
    void * operator new(size_t size);
    void operator delete(void * n)noexcept ;

};


#endif //TAREAEXTRACLASEI_NODE_H
