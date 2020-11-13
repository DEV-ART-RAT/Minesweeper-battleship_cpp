#include "../tools/header.h"
#include "../tools/tools.h"

//l) Modifique k) para que, en lugar de un arreglo, se reciba una matriz cuadrada y un número n, que
//sería el número de filas y columnas.

// Matrix Zeroes
void setZeroesMatrix(int** array, int b){
    for(int i = 0; i < b; i++) {
        array[i]= new int[b];
        for(int j = 0; j < b; j++)
            array[i][j]=0;
    }
}
// doble puntero inicializado
int** newIntDoublePointer(int b){
    int** doublePointer;
    doublePointer = new int* [b];
    for(int i = 0; i < b; i++)
        doublePointer[i] = new int [b];
        return doublePointer;
}

void  l(int*** array, int b){
    //comenzamos el puntero
    *array = newIntDoublePointer(b);
    //ahora la matriz de zeroes
    setZeroesMatrix(*array,b);
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