#include "../tools/header.h"
#include "../tools/tools.h"

//q) Hacer una función en C++ que dada una matriz int y una posición en la matriz, chequee si es
//posible acceder 1 celda a la izquierda de esta posición.

bool MatrixRightStepValidation(int** array, int i , int size){
    return  A_MENOR_B(i,size) ;
}
/*
 * template <typename T>
bool MatrixRight(T matrix, int posR,int posC){
    int Mcols;
    Mcols=sizeof(matrix[0])/sizeof(matrix[0][0]);
    return(posC>=Mcols-1?false:true);
};
 */