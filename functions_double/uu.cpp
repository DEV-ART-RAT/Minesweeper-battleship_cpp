#include <iostream>
#include "../tools/node.h"
using namespace std;

//uu) Modificar Quicksort para que sea capaz de ordenar descendentemente una lista como la descrita
//en tt), usando como criterio de comparación el entero que hay en cada nodo.


template<class T>
void swap(node<T>* a, node<T>* b) {
    //cout<<"swat: "<<a->info<<":"<<b->info<<"| ";
    T temp = a->info;
    a->info = b->info;
    b->info = temp;
}

template<class T>
void pushBack(node<T>** dl, T info) {
    node<T>* n = new node<T>(info);

    if(!*dl){
        *dl = n;
        //cout<<"no hay elemento: "<<n->info<<endl;;
    }else {
        node<T>* aux = *dl;
        while(aux->next)
            aux = aux->next;
        n->prev = aux;
        aux->next = n;
        //cout<<"ya enconre un elemento";
    }
    cout<<n->info<<"aqui";
}

template<class T>
void _quickSort(node<T>* low, node<T>* high) {
    //cout<<"\n_quitSort\n";
    if(high && low != high && low != high->next) {
        node<T>* pivot = partition(low, high);
        _quickSort(low, pivot->prev);
        _quickSort(pivot->next, high);
    }
}

template<class T>
void quickSort(node<T>* head) {
    //cout<<"\nquickSort";
    node<T>* last = lastNode(head);
    _quickSort(head, last);
}

template<class T>
node<T>* lastNode(node<T>* head) {
    while(head && head->next)
        head = head->next;
    return head;
}

// NULL 8 9 5 7 12 NULL
template<class T>
node<T>* partition(node<T>* low, node<T>* high) {
    T pivot = high->info;
    node<T>* i = low->prev;

    for(node<T>* j = low; j != high; j = j->next) {
        //cout<<"particion: "<<j->info<<":"<<pivot<<"| ";
        //cout<<"\npartition";
        if(/*j->info >= pivot*/j->info.comparate(pivot,1)) {

            // equivalent to i++
            i = (!i) ? low : i->next;

            swap(i, j);
            //cout<<"_"<<i->info<<":"<<j->info<<"| ";
        }
    }

    // swap arr i + 1, arr high
    // return i + 1
    i = (!i) ? low : i->next;
    swap(i, high);
    return i;
}

template<class T>
void show(node<T>* list){
    if(list){
        cout<<list->info<<" ";
        show(list->next);
    }
}



/*
template<class T>
void swap(node<T>* a, node<T>* b);

template<class T>
void show(node<T>*);

template<class T>
void pushBack(node<T>** dl, T info);

template<class T>
void quickSort(node<T>*);

int main(void) {
    node<nodeinfo>* list = NULL;
    pushBack(&list, nodeinfo(12, "gsad"));
    pushBack(&list, nodeinfo(13, "sdhb"));
    pushBack(&list, nodeinfo(55, "sdas"));
    pushBack(&list, nodeinfo(7, "asd"));
    pushBack(&list, nodeinfo(19, "asd"));
    pushBack(&list, nodeinfo(23, "asdf"));
    pushBack(&list, nodeinfo(32, "asdsad"));
    pushBack(&list, nodeinfo(43, "asdad"));
    pushBack(&list, nodeinfo(15, "zvcvfg"));
    pushBack(&list, nodeinfo(46, "gfgsd"));
    pushBack(&list, nodeinfo(11, "ffffff"));
    pushBack(&list, nodeinfo(80, "uk"));
    pushBack(&list, nodeinfo(12, "aswd"));
    pushBack(&list, nodeinfo(15, "scdse"));
    show(list);

    quickSort(list);
    cout<<endl;
    show(list);
    //cout<<list->next;

    return 0;
}
*/