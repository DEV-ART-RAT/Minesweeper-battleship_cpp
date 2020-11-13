#include <iostream>
using namespace std;
/*
vv) Modificar Quicksort para que sea capaz de ordenar descendentemente una lista como la descrita
en tt) , usando como criterio de comparación la cadena de caracteres (orden lexicográfico) que
hay en cada nodo.
*/
struct nodeinfo {
    int i;
    string c;

    nodeinfo() {}
    nodeinfo(int _i, string _c) : i(_i), c(_c) {}

    bool operator==(const nodeinfo& r) {
        return this->i == r.i && this->c == r.c;
    }

    bool operator!=(const nodeinfo& r) {
        return this->i != r.i && this->c != r.c;
    }

    string toString() {
        return "{" + to_string(this->i) + ":" + this->c + "}";
    }

    bool comparate(nodeinfo& r,int flag){
        if(flag == 1){
            return this->i >= r.i;
        }
        return this->c >= r.c;
    }
};


template<class T>
struct node {
    T info;
    node<T>* next,* prev;

    node() { next = prev = NULL; }
    node(T _info) : info(_info) { next = prev = NULL; }
};

template<class T>
void swap(node<T>* a, node<T>* b) {
    T temp = a->info;
    a->info = b->info;
    b->info = temp;
}

template<class T>
void pushBack(node<T>** dl, T info) {
    node<T>* n = new node<T>(info);
    if(!*dl){
        *dl = n;
    }else {
        node<T>* aux = *dl;
        while(aux->next)
            aux = aux->next;
        n->prev = aux;
        aux->next = n;
    }
}

template<class T>
void _quickSort(node<T>* low, node<T>* high) {
    if(high && low != high && low != high->next) {
        node<T>* pivot = partition(low, high);
        _quickSort(low, pivot->prev);
        _quickSort(pivot->next, high);
    }
}

template<class T>
void quickSort(node<T>* head) {
    node<T>* last = lastNode(head);
    _quickSort(head, last);
}

template<class T>
node<T>* lastNode(node<T>* head) {
    while(head && head->next)
        head = head->next;
    return head;
}
template<class T>
node<T>* partition(node<T>* low, node<T>* high) {
    T pivot = high->info;
    node<T>* i = low->prev;
    for(node<T>* j = low; j != high; j = j->next) {
        if(j->info.comparate(pivot,0)) {
            i = (!i) ? low : i->next;
            swap(i, j);
        }
    }
    i = (!i) ? low : i->next;
    swap(i, high);
    return i;
}

template<class T>
void show(node<T>* list){
    if(list){
        cout<<list->info.toString()<<" ";
        show(list->next);
    }
}