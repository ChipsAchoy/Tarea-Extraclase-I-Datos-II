

#include "Node.h"
Collector * col = new Collector();

Node::Node(int val, Node* n){
    this->next = n;
    this->value = val;

}
void * Node::operator new(size_t size) {
    Node *direction = (Node*)col->assign_dir();
    if (direction == NULL){
        direction = (Node*)malloc(sizeof(Node));
    }
    return direction;

}

void Node::operator delete(void *n) noexcept {
    col->addDir((Node*)n);
}