// o) Modifique n) para que se agregue un margen de 4 espacios a la izquierda
// y derecha de cada barra colocada ( ‘ | ‘).

//para todo tipo
template <typename T>
void printArrayBarSpace(T arr,int size);
//para char
void printArrayBarSpace(char *arr,int size);


template <typename T>
void printArrayBarSpace(T arr,int size){
     for (int i = 0; i < size-1; i++)
       cout<<arr[i]<<"    |    ";
    cout<<arr[size-1];
};

void printArrayBarSpace(char *arr,int size){
     for (int i = 0; i < size-1; i++)
       cout<<arr[i]<<"    |    ";
    cout<<arr[size-1];
};

/*

    char* array =NewArray<char>(3);
    ArraySpace(array,3);
    printArrayBarSpace(array,3);

    */