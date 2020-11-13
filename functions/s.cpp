#include "../tools/header.h"
#include "../tools/tools.h"

//q) Hacer una función en C++ que dada una matriz int y una posición en la matriz, chequee si es
//posible acceder 1 celda a la izquierda de esta posición.

bool MatrixDownStepValidation(int** array, int i, int size){
    return  A_MENOR_B(i,size);
}
/*
 *  template <typename T>
bool MatrixDown(T matrix, int posR,int posC){
    int Marrow;
    Marrow=sizeof(matrix[0]);
    return(posR>=Marrow-1?false:true);
};
 */