#include "../tools/header.h"
#include "../tools/tools.h"

//l) Modifique k) para que, en lugar de un arreglo, se reciba una matriz cuadrada y un número n, que
//sería el número de filas y columnas.

// Matrix Zeroes
void setZeroesMatrix(int** pointer, int size){
    for(int i = 0; i < size; i++) {
        pointer[i]= new int[size];
        for(int j = 0; j < size; j++)
            pointer[i][j]=0;
    }
}
// doble puntero inicializado
int** newIntDoublePointer(int size){
    int** doublePointer;
    doublePointer = new int* [size];
    for(int i = 0; i < size; i++)
        doublePointer[i] = new int [size];
        return doublePointer;
}

void  l(int*** pointer, int size){
    //comenzamos el puntero
    *pointer = newIntDoublePointer(size);
    //ahora la matriz de zeroes
    setZeroesMatrix(*pointer,size);
}

// intentos
/*
 * template <typename T>
void MatrixZeroes(T matrix, int size ){
    matrix = new T*[size];
    for (int i=0;i<size;i++){
        matrix[i]=new T [size];
    };
    for(int i = 0; i < size; i++)
        for(int j = 0; j < size; j++)
            matrix[i][j]=0;
}
 */