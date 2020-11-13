#include "../tools/header.h"
#include "../tools/tools.h"

template<class T>
void yy(node<T>* list){
    node<T>* aux = list;
    ofstream data;
    remove("data.csv");
    data.open("data.csv",ios::app);
    while (aux)
    {
        data<<aux->info.c<<","<<aux->info.i<<"\n";
        aux= aux->next;
    }
    data.close();
    
}