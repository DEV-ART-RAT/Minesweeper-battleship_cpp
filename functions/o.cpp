#include "../tools/header.h"
#include "../tools/tools.h"

//o) Modifique n) para que se agregue un margen de 4 espacios a la izquierda y derecha de cada barra
//colocada ( ‘ | ‘).

void printArrayCharBarSpace(char* array, int b){
    for(int i = 0 ; i < b ; i++){
        std::cout << array[i] << "    |    ";
    }   
}

// Otra forma :
/*
 * template <typename T>
void printArrayBarSpace(T arr,int size){
     for (int i = 0; i < size-1; i++)
       cout<<arr[i]<<"    |    ";
    cout<<arr[size-1];
};
 */