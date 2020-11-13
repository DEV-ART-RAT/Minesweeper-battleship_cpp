#include "../tools/header.h"
#include "../tools/tools.h"

//j) Modifique i) para que, en lugar de un arreglo, se reciba una matriz cuadrada y un número n, que
//sería el número de filas y columnas.

void setSpacesMatrix(char** array, int b){
    for(int i = 0; i < b; i++) {
        for(int j = 0; j < b; j++)
            array[i][j]=' ';
    }
}

char** newCharDoublePointer(int b){
    //inicializamos el puntero doble
    char** doublePointer;
    doublePointer = new char* [b];
    for(int i = 0; i < b; i++)
        doublePointer[i] = new char [b];
        return doublePointer;
}

void j(char*** array, int b){
    //inicializamos los datos para j
    *array=newCharDoublePointer(b);
    //obtenemos la matriz
    setSpacesMatrix(*array,b);
}
// NO ME SIRVIO
/*
 * template <typename T>
void MatrixSpace(T** matrix, int size ){
    matrix = new T*[size];
    for (int i=0;i<size;i++){
        matrix[i]=new T [size];
    };
    for(int i = 0; i < size; i++)
        for(int j = 0; j < size; j++)
            matrix[i][j]=' ';
}
 */
