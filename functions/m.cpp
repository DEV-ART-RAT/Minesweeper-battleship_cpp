#include "../tools/header.h"
#include "../tools/tools.h"

//m) Hacer una función en C++ que dado un arreglo char y su longitud, imprima su contenido en
//pantalla en una sola línea, separando cada dato con un espacio.

void printArrayCharSpace(char* array, int size){
    for(int i = 0 ; i < size ; i++){
        std::cout << array[i] << " ";
    }   
}
// otra forma:
/*
 * template <typename T>
void printArrayEspace(T arr,int size){
    for (int i = 0; i < size; i++)
       cout<<arr[i]<<" ";
};
 */