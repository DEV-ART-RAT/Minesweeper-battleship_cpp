#include "../tools/header.h"
#include "../tools/tools.h"
//k) Hacer una función en C++ que dado un arreglo de int y su longitud, llene cada casilla con un 0.

//genera una array de ceros
void setZeroesArray(int* pointer, int size){
    for(int i = 0 ; i < size ; i++){
        pointer[i]=0;
    }   
}
//comenzamos un puntero
int* newIntPointer(int size){
    return new int[size];
}
//control de k
void k(int** pointer, int size){
    //inicializamos los datos 
    *pointer=newIntPointer(size);
    //obtenemos la array
    setZeroesArray(*pointer,size);
}

//Pruebas:
/*
 * template <typename T>
void ArrayZero(T arr,int size){
    for (int i = 0; i < size; i++)
       arr[i]=0;
};
 */