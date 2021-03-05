#include "List.h"

List::List() {
    this->list_len = 0;
    this->head = NULL;
}

void List::addNode(int value) {
    this->list_len++;
    if (this->head == NULL){
        this->head = new Node(value, NULL);
    }else {
        Node *tmp = new Node(value, this->head);
        head = tmp;
    }
    cout << "Nuevo nodo con el valor de:" << value << "\n";
}

void List::deleteNode() {
    if (this->list_len > 0){
        this->list_len--;
        Node *tmp = this->head;
        this->head = this->head->next;
        delete tmp;
    }else{
        cout << "La lista esta vacia" << "\n";
    }

}

void List::printList() {
    Node * tmp = this->head;
    for (int i=0; i<this->list_len; i++){
        cout << "<Valor: "<< tmp->value << ", direccion" << tmp << ">" <<"\n";
        tmp = tmp->next;
    }
}