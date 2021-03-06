#include "../tools/header.h"
#include "../tools/tools.h"

//y) Modificar los casos q), r), s) y t) para que, en lugar de checar una celda en la dirección indicada,
//chequee si es posible avanzar 5 celdas en dicha dirección.
bool MatrixLeftFiveStepValidation(int** array, int i, int size){
    return  A_MENOR_IGUAL_B(4,i) ;
}
bool MatrixRightFiveStepValidation(int** array, int i , int size){
    return  A_MENOR_B(i,size-4);
}
bool MatrixDownFiveStepValidation(int** array, int i, int size){
    return  A_MENOR_B(i,size-4);
}
bool MatrixUpFiveStepValidation(int** array, int i, int size){
    return  A_MENOR_IGUAL_B(4,i) ;
}
bool y(int** array, int i, int j, int size){
    return  MatrixLeftFiveStepValidation(array,j,size) && MatrixRightFiveStepValidation(array,j,size) 
    && MatrixUpFiveStepValidation(array,i,size) && MatrixDownFiveStepValidation(array,i,size);
}