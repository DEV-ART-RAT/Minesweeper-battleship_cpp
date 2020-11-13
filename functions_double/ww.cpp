#include "../tools/header.h"
#include "../tools/tools.h"
#include "../functions_double/tt.cpp"

template <class T>
void ww(doubleLinked<T>* front) {
    int flag = 1;
    node<T>* aux = front->front;
    while (aux && flag < 10)
    {
        flag++;
        aux=aux->next;
    }
    if(aux){
        front->back = aux;
        wwAux(aux->next);
        aux->next=NULL; 
    }
    
}

template <class T>
void wwAux(node<T>* front) {
    if(front){
        wwAux(front->next);
        delete(front);
    }
}
