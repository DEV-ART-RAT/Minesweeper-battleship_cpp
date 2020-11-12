//j) Modifique i) para que, en lugar de un arreglo, se reciba una matriz
// cuadrada y un número n, que sería el número de filas y columnas.
#include "../tools/tools.h"
void MatrixSpace(char**, int );

template <typename T>
void MatrixSpace(T matrix, int size);

// si queremos hacerla solo de caracteres
void MatrixSpace(char **matrix, int size){
    for(int i = 0; i < size; i++)
        for(int j = 0; j < size; j++)
            matrix[i][j]= ' ';
}
//pero si queremos hacerla de cualquier tipo
template <typename T>
void MatrixSpace(T matrix, int size ){
    for(int i = 0; i < size; i++)
        for(int j = 0; j < size; j++)
            matrix[i][j]=' ';
}

/* MAIN

 char matrix[2][2]={{'a','b'},{'d','e'}};
    printMatrix(matrix,2,2);
    MatrixSpace(matrix,2);
    printMatrix(matrix,2,2);

*/
    // char** matrix=MatrixCuadrada<char>(2);
    // MatrixSpace(matrix,2);
    // printMatrix(matrix,2,2);


// ayuda :https://stackoverflow.com/questions/49525287/why-c-template-function-do-not-support-returning-a-pointer