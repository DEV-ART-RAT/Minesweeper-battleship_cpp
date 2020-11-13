#include "../tools/header.h"
#include "../tools/tools.h"

//p) Modifique o) para que también se agreguen barras al inicio y al final de la secuencia impresa, con
//sus respectivos márgenes (que en este caso serían a un solo lado).

void printArrayCharBarMargin(char* array, int size){
    //imprimimos la primera parte
    cout<<"|    ";
    for(int i = 0 ; i < SIZEONE(size) ; i++){
        std::cout << array[i] << "    |    ";
    }   
    //imprimimos el final y admeas el ultimo elemento
    cout<<array[SIZEONE(size)]<<"    |";
}

// otra forma:
/*
 * template <typename T>
void printArrayBarSpaceMargin(T arr,int size){
      cout<<"|    ";
    for (int i = 0; i < SIZEONE(size); i++)
       cout<<arr[i]<<"    |    ";
    cout<<arr[SIZEONE(size)]<<"    |";
};
 */