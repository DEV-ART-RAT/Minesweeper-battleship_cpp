#include "../tools/header.h"
#include "../tools/tools.h"

//w) Modificar los casos q), r), s) y t) para que, en lugar de checar una celda en la dirección indicada,
//chequee si es posible avanzar 3 celdas en dicha dirección.

bool MatrixLeftThreeStepValidation(int** array, int i, int size){
    return  A_MENOR_IGUAL_B(2,i) ;
}
bool MatrixRightThreeStepValidation(int** array, int i , int size){
    return  A_MENOR_B(i,size-2)  ;
}
bool MatrixDownThreeStepValidation(int** array, int i, int size){
    return  A_MENOR_B(i,size-2)  ;
}
bool MatrixUpThreeStepValidation(int** array, int i, int size){
    return  A_MENOR_IGUAL_B(2,i) ;
}
bool w(int** array, int i, int j, int size){
    return  MatrixLeftThreeStepValidation(array,j,size) && MatrixRightThreeStepValidation(array,j,size) 
    && MatrixUpThreeStepValidation(array,i,size) && MatrixDownThreeStepValidation(array,i,size);
}