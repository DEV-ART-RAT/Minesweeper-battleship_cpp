#include "tools.h"

//inicializar
template <class TMatrix>
TMatrix** MatrixCuadrada(int size);


//Print de varios tipos
template <typename T>
void printArray(T *arr,int size);
template <typename T>
void printMatrix(T matrix, int sizerows,int sizecols);

// print especificos
void printArray(char *arr,int size);
void printMatrix(int** matrix, int sizerows,int sizecols);



template <class TMatrix>
TMatrix** MatrixCuadrada(int size){
    TMatrix** doublepointer;
    doublepointer = new TMatrix*[size];    
    for (int i=0;i<size;i++){
        doublepointer[i]=new TMatrix [size];
    };
    return doublepointer;
};

template <typename T>
void printArray(T *arr,int size){
    for (int i = 0; i < size; i++)
       cout<<arr[i]<<endl;
};

template <typename T>
void printMatrix(T matrix, int sizerows,int sizecols) {
    for(int i = 0; i < sizerows; i++) {
        for(int j = 0; j < sizecols; j++)
            cout << matrix[i][j] << "\t";
        cout << endl;
}};



// ESPECIFICAS:

char** MatrixCuadrada(int size){
    char** doublepointer;
    doublepointer = new char*[size];    
    for (int i=0;i<size;i++){
        doublepointer[i]=new char [size];
    };
    return doublepointer;
};

void printArray(char *arr,int size){
    for (int i = 0; i < size; i++)
       cout<<arr[i]<<endl;
};

void printMatrix(int** matrix, int sizerows,int sizecols) {
    for(int i = 0; i < sizerows; i++) {
        for(int j = 0; j < sizecols; j++)
            cout << matrix[i][j] << "\t";
        cout << endl;
}}