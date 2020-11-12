//m) Hacer una función en C++ que dado un arreglo char y su longitud,
// imprima su contenido en pantalla en una sola línea, separando cada dato con un espacio.

//para todo tipo
template <typename T>
void printArrayEspace(T arr,int size);
//para char
void printArrayEspace(char *arr,int size);


template <typename T>
void printArrayEspace(T arr,int size){
    for (int i = 0; i < size; i++)
       cout<<arr[i]<<" ";
};

void printArrayEspace(char *arr,int size){
    for (int i = 0; i < size; i++)
       cout<<arr[i]<<" ";
};

// MAIN

/*

    char* array =NewArray<char>(3);
    ArraySpace(array,3);
    printArrayEspace(array,3);

*/