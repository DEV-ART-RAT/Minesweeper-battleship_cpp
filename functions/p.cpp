#include "../tools/header.h"
#include "../tools/tools.h"

//p) Modifique o) para que también se agreguen barras al inicio y al final de la secuencia impresa, con
//sus respectivos márgenes (que en este caso serían a un solo lado).

void printArrayCharBarMargin(char* array, int b){
    cout<<"|    ";
    for(int i = 0 ; i < b - 1 ; i++){
        std::cout << array[i] << "    |    ";
    }   
    cout<<array[b-1]<<"    |";
}

// otra forma:
/*
 * template <typename T>
void printArrayBarSpaceMargin(T arr,int size){
      cout<<"|    ";
    for (int i = 0; i < size-1; i++)
       cout<<arr[i]<<"    |    ";
    cout<<arr[size-1]<<"    |";
};
 */