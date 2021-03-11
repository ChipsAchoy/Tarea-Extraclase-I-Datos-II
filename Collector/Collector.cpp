
using namespace std;
#include "Collector.h"

Collector::Collector() {
    this->dirs = 0;
    this->directions = (Node**)malloc(0*sizeof(Node));
}

void * Collector::assign_dir() {
    if (this->hasDirs()){
        Node* dir_ret = this->directions[0];
        this->dirs --;
        if (this->dirs == 0){
            this->directions = (Node**)malloc(0*sizeof(Node));
        }else{
            Node ** cur_directions = (Node** )malloc(this->dirs*sizeof(Node));
            for (int i = 0; i<this->dirs; i++){
                cur_directions[i] = this->directions[i+1];
            }
            this->directions = cur_directions;
        }

        cout << "La direc asignada es: " << dir_ret << "\n";
        return dir_ret;
    }else{
        cout << "Direccion nueva asignada" << "\n";
        return NULL;
    }
}

void Collector::addDir(Node* new_dir) {
    this->dirs ++;
    cout << "Se agrega la direccion: " << new_dir << "\n";
    Node ** cur_directions = (Node**)malloc(this->dirs*sizeof(Node));
    if (this->dirs == 1){
        this->directions = cur_directions;
        this->directions[0] = new_dir;
    }
    else{
        int lim = this->dirs-1;
        for (int i=0; i<lim; i++){
            cur_directions[i] = this->directions[i];
        }
        cur_directions[this->dirs-1] = new_dir;
        this->directions = cur_directions;
    }
    this->printCollector();
}

void Collector::printCollector() {
    cout << "-------------------\n" << "El colector contiene las dirs\n" << "\n";
    for (int i=0; i<this->dirs; i++){
        cout << "<" << this->directions[i] << ">\n";
    }
    cout << "-------------------\n" ;
}

bool Collector::hasDirs() {
    int directs = this->dirs;
    if (directs > 0){
        return true;
    }else{
        return false;
    }
}