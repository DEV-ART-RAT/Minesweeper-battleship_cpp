//l) Modifique k) para que, en lugar de un arreglo, se reciba una matriz cuadrada 
//y un número n, que sería el número de filas y columnas.
#include "../tools/tools.h"
void MatrixZeroes(int**, int );

template <typename T>
void MatrixZeroes(T matrix, int size);

// si queremos hacerla solo de caracteres
void MatrixZeroes(int **matrix, int size){
    for(int i = 0; i < size; i++)
        for(int j = 0; j < size; j++)
            matrix[i][j]= 0;
}
//pero si queremos hacerla de cualquier tipo
template <typename T>
void MatrixZeroes(T matrix, int size ){
    for(int i = 0; i < size; i++)
        for(int j = 0; j < size; j++)
            matrix[i][j]=0;
}

//Main
/*
 int** matrix=MatrixCuadrada<int>(2);
    MatrixZeroes(matrix,2);
    printMatrix(matrix,2,2);
    */