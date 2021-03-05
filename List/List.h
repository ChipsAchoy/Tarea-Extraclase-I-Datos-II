//
// Created by anthony on 5/3/21.
//

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
        List();
        void deleteNode();
        void addNode(int value);
        void printList();

};

#endif //TAREAEXTRACLASEI_LIST_H
