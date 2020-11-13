#include "../tools/header.h"
#include "../tools/tools.h"

//n) Modifique m) para que, en lugar de separar cada dato con espacio, los separe con el caracter de
//barra ( ‘|’ ).

void printArrayCharBar(char* array, int size){
    for(int i = 0 ; i < size ; i++){
        std::cout << array[i] << "|";
    }   
}
// otra forma
/*
 * template <typename T>
void printArrayBar(T arr,int size){
    for (int i = 0; i < size; i++)
       cout<<arr[i]<<"|";
};
 */