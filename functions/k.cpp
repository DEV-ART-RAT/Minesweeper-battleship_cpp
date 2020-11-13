#include "../tools/header.h"
#include "../tools/tools.h"
//k) Hacer una función en C++ que dado un arreglo de int y su longitud, llene cada casilla con un 0.

void setZeroesArray(int* array, int b){
    for(int i = 0 ; i < b ; i++){
        array[i]=0;
    }   
}
//comenzamos un puntero
int* newIntPointer(int b){
    return new int[b];
}

//Pruebas:
/*
 * template <typename T>
void ArrayZero(T arr,int size){
    for (int i = 0; i < size; i++)
       arr[i]=0;
};
 */