#include "../tools/header.h"
#include "../tools/tools.h"
#include "../functions_double/tt.cpp"
/*
ww)
Hacer una función que dada una lista como la descrita en tt), y que si la lista tiene más de
10 nodos, recorte nodos desde el final hasta que queden 10.
*/

// top 10
template <class T>
void ww(doubleLinked<T>* front) {
    int flag = 1;
    node<T>* aux = front->front;
    while (aux && flag < 10)
    {
        flag++;
        aux=aux->next;
    }
    //borra si sobran
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
