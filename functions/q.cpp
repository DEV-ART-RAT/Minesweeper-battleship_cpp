#include "../tools/header.h"
#include "../tools/tools.h"

//q) Hacer una función en C++ que dada una matriz int y una posición en la matriz, chequee si es
//posible acceder 1 celda a la izquierda de esta posición.

bool MatrixLeftStepValidation(int** array, int i, int size){
    return  i >= 0 ;
}

//un intento:
/*
 * template <typename T>
bool MatrixLeft(T matrix, int posR,int posC){
    return((posC<=0)?false:true);
};
 */