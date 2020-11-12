// r) Modifique q) para en lugar de checar a la izquierda, se chequee a la derecha.
template <typename T>
bool MatrixRight(T matrix, int posR,int posC);

bool MatrixRight(int** matrix, int posR,int posC);

template <typename T>
bool MatrixRight(T matrix, int posR,int posC){
    int Mcols;
    Mcols=sizeof(matrix[0])/sizeof(matrix[0][0]);
    if(posR>=Mcols)
        return false;
    else
        return true;
};

bool MatrixRight(int** matrix, int posR,int posC){
    int Mcols;
    Mcols=sizeof(matrix[0])/sizeof(matrix[0][0]);
    if(posR>=Mcols)
        return false;
    else
        return true;
}

//main
/*
    char matrix[3][3]={{'a','b','c'},{'d','e','c'}};
    MatrixSpace(matrix,3);
    cout<<"\n"<<((MatrixRight(matrix,2,0)==false)? "No Right":"Right")<<"\n";
*/








//Ayuda : https://stackoverflow.com/questions/34134074/c-size-of-two-dimensional-array/34135270