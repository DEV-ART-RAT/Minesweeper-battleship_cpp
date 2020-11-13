#include <iostream>
#include "../tools/node.h"
using namespace std;

//uu) Modificar Quicksort para que sea capaz de ordenar descendentemente una lista como la descrita
//en tt), usando como criterio de comparación el entero que hay en cada nodo.

// cambia
template<class T>
void swap(node<T>* a, node<T>* b) {
    T temp = a->info;
    a->info = b->info;
    b->info = temp;
}
//push atras
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
        if(j->info.comparate(pivot,1)) {
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
        show(list->next);
    }
}

