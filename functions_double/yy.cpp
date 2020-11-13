#include "../tools/header.h"
#include "../tools/tools.h"
/*
yy) Hacer una función en C++ que dada una lista como la descrita en tt) , escriba su contenido en un
archivo de texto llamado “data.csv” con el formato descrito en xx) .
*/

// elemento tipo template
template<class T>
void yy(node<T>* list){
    //auxiliamos el nodo
    node<T>* aux = list;
    ofstream data;
    remove("data.csv");
    //abrimos data
    data.open("data.csv",ios::app);
    while (aux)
    {
        //segun nuestra lista que llene el csv
        data<<aux->info.c<<","<<aux->info.i<<"\n";
        //saltamos 
        aux= aux->next;
    }
    data.close();
    
}