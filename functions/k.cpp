//k) Hacer una función en C++ que dado un arreglo de int 
// y su longitud, llene cada casilla con un 0.
#include "../tools/tools.h"
void ArraySpace(int*,int);
template <typename T>
void ArraySpace(T arr,int size);

//para int
void ArrayZero(int *arr,int size){
    for (int i = 0; i < size; i++)
       arr[i]=0;
}

//para cualquier tipo
template <typename T>
void ArrayZero(T arr,int size){
    for (int i = 0; i < size; i++)
       arr[i]=0;
};

// MAIN
/*
int* array =NewArray<int>(3);
ArrayZero(array,3);
printArray(array,3);

    */