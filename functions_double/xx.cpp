#include "../tools/header.h"
#include "../tools/tools.h"
#include "../functions_double/tt.cpp"
/*
xx) Hacer una función en C++ que dado un archivo de texto llamado “data.csv”, que por cada fila tiene
una cadena de caracteres un entero separados por coma, lea estos datos y los vaya colocando en
una lista como la descrita en tt)
*/


template<class T>
void xx(doubleLinked<T> *list) {
    ifstream data;
    data.open("data.csv",ios::in);
    for(string line; getline(data,line);){
        stringstream regi(line);
        string dato,name;
        int point;
        for (int col = 0;getline(regi,dato,',');col++){
            if(col==0){
                name = dato;
            }else
            {
                point = stoi(dato);
                pushBack(T(point,name),list);
            }
        }

    }
    data.close();
}
