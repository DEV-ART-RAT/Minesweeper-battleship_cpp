//i) Hacer una función en C++ que dado un arreglo de char y su longitud, 
// llene cada casilla con el caracter espacio ( ‘ ‘ ).
#include "../tools/tools.h"
void ArraySpace(char*,int);

void ArraySpace(char *arr,int size){
    for (int i = 0; i < size; i++)
    {
       arr[i]=' ';
    }
    
}

/*
    char arr[2]={'a','d'};
    PrintArray(arr,2);
    ArraySpace(arr,2);
    PrintArray(arr,2);

*/