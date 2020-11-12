// r) Modifique q) para en lugar de checar a la izquierda, se chequee a la derecha.
template <typename T>
bool MatrixRight(T matrix, int posR,int posC);

bool MatrixRight(int** matrix, int posR,int posC);

template <typename T>
bool MatrixRight(T matrix, int posR,int posC){
    int Mcols;
    Mcols=sizeof(matrix[0])/sizeof(matrix[0][0]);
    if(posC>=Mcols)
        return false;
    else
        return true;
};

bool MatrixRight(int** matrix, int posR,int posC){
    int Mcols;
    Mcols=sizeof(matrix[0])/sizeof(matrix[0][0]);
    if(posC>=Mcols)
        return false;
    else
        return true;
}

//main
/*
    char matrix[6][3]={{'a','b','c'},{'d','e','c'},{'a','b','c'},{'a','b','c'},{'d','e','c'},{'a','b','c'}    };
    cout<<"\n"<<((MatrixRight(matrix,4,3)==false)? "No":"Yes")<<"\n";
*/








//Ayuda : https://stackoverflow.com/questions/34134074/c-size-of-two-dimensional-array/34135270