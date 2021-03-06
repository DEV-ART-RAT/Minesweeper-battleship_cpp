#include "../tools/header.h"
#include "../tools/tools.h"
#include "../functions_double/tt.cpp"
/*
xx) Hacer una función en C++ que dado un archivo de texto llamado “data.csv”, que por cada fila tiene
una cadena de caracteres un entero separados por coma, lea estos puntajes y los vaya colocando en
una lista como la descrita en tt)
*/


template<class T>
void xx(doubleLinked<T> *list) {
    //definimos la variable
    ifstream data;
    //abrimos el archivo
    data.open("data.csv",ios::in);
    for(string line; getline(data,line);){
        stringstream data(line);
        string puntaje,name;
        int point;
        //damos los datos
        for (int col = 0;getline(data,puntaje,',');col++){
            if(col==0){
                name = puntaje;
            }else
            {
                point = stoi(puntaje);
                pushBack(T(point,name),list);
            }
        }

    }
    data.close();
}
