#include "../tools/header.h"
#include "../tools/tools.h"

//i) Hacer una función en C++ que dado un arreglo de char y su longitud, llene cada casilla con el
//caracter espacio ( ‘ ‘ ).
void setSpacesArray(char* array, int b);
char* newCharPointer(int b);

void setSpacesArray(char* array, int b){
    for(int i = 0 ; i < b ; i++){
        array[i]=' ';
    }   
}
//se crea el nuevo char
char* newCharPointer(int b){
    return new char[b];
}
//No me sirvio
/*
void ArraySpace(char*,int);
template <typename T>
void ArraySpace(T arr,int size);

//para char
void ArraySpace(char *arr,int size){
    for (int i = 0; i < size; i++)
       arr[i]=' ';
}

//para cualquier tipo
template <typename T>
void ArraySpace(T arr,int size){
    for (int i = 0; i < size; i++)
       arr[i]=' ';
};
 */
