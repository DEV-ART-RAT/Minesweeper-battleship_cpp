//p) Modifique o) para que también se agreguen barras al inicio y 
//al final de la secuencia impresa, con sus respectivos márgenes 
//(que en este caso serían a un solo lado).

//para todo tipo
template <typename T>
void printArrayBarSpaceMargin(T arr,int size);
//para char
void printArrayBarSpaceMargin(char *arr,int size);


template <typename T>
void printArrayBarSpaceMargin(T arr,int size){
      cout<<"|    ";
    for (int i = 0; i < size-1; i++)
       cout<<arr[i]<<"    |    ";
    cout<<arr[size]<<"    |";
};

void printArrayBarSpaceMargin(char *arr,int size){
      cout<<"|    ";
    for (int i = 0; i < size-1; i++)
       cout<<arr[i]<<"    |    ";
    cout<<arr[size]<<"    |";
};

/*

    char* array =NewArray<char>(3);
    ArraySpace(array,3);
    printArrayBarSpaceMargin(array,3);

    */