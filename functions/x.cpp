#include "../tools/header.h"
#include "../tools/tools.h"
//x) Modificar los casos q), r), s) y t) para que, en lugar de checar una celda en la dirección indicada,
//chequee si es posible avanzar 4 celdas en dicha dirección.

bool MatrixLeftFourStepValidation(int** array, int i, int size){
    return  A_MENOR_IGUAL_B(3,i) ;
}
bool MatrixRightFourStepValidation(int** array, int i , int size){
    return  A_MENOR_B(i,size-3) ;
}
bool MatrixDownFourStepValidation(int** array, int i, int size){
    return  A_MENOR_B(i,size-3);
}
bool MatrixUpFourStepValidation(int** array, int i, int size){
    return  A_MENOR_IGUAL_B(3,i) ;
}
bool x(int** array, int i, int j, int size){
    return  MatrixLeftFourStepValidation(array,j,size) && MatrixRightFourStepValidation(array,j,size) 
    && MatrixUpFourStepValidation(array,i,size) && MatrixDownFourStepValidation(array,i,size);
}