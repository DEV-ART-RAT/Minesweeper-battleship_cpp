//n) Modifique m) para que, en lugar de separar cada dato con espacio,
// los separe con el caracter de barra ( ‘|’ ).

//para todo tipo
template <typename T>
void printArrayBar(T arr,int size);
//para char
void printArrayBar(char *arr,int size);


template <typename T>
void printArrayBar(T arr,int size){
    for (int i = 0; i < size; i++)
       cout<<arr[i]<<"|";
};

void printArrayBar(char *arr,int size){
    for (int i = 0; i < size; i++)
       cout<<arr[i]<<"|";
};
