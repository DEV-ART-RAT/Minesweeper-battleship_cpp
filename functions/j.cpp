#include "../tools/header.h"
#include "../tools/tools.h"

//j) Modifique i) para que, en lugar de un arreglo, se reciba una matriz cuadrada y un número n, que
//sería el número de filas y columnas.

// genera una matriz de espacios
void setSpacesMatrix(char** pointer, int size){
    for(int i = 0; i < size; i++) {
        for(int j = 0; j < size; j++)
            pointer[i][j]=' ';
    }
}

//inicializa el puntero
char** newCharDoublePointer(int size){
    //inicializamos el puntero doble
    char** doublePointer;
    doublePointer = new char* [size];
    for(int i = 0; i < size; i++)
        doublePointer[i] = new char [size];
        return doublePointer;
}

//funcion que controla j
void j(char*** pointer, int size){
    //inicializamos los datos para j
    *pointer=newCharDoublePointer(size);
    //obtenemos la matriz
    setSpacesMatrix(*pointer,size);
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
