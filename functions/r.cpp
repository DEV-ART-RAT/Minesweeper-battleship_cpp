// r) Modifique q) para en lugar de checar a la izquierda, se chequee a la derecha.
template <typename T>
bool MatrixRight(T matrix, int posR,int posC);

bool MatrixRight(int** matrix, int posR,int posC);

template <typename T>
bool MatrixRight(T matrix, int posR,int posC){
    int Mcols;
    Mcols=sizeof(matrix[0])/sizeof(matrix[0][0]);
    if(posC>=Mcols-1)
        return false;
    else
        return true;
};

bool MatrixRight(int** matrix, int posR,int posC){
    int Mcols;
    Mcols=sizeof(matrix[0])/sizeof(matrix[0][0]);
    if(posC>=Mcols-1)
        return false;
    else
        return true;
}

//main
/*
   char matrix[6][6]={{'a','b','c','c','c','c'},{'a','b','c','c','c','c'},{'a','b','c','c','c','c'},{'a','b','c','c','c','c'},{'a','b','c','c','c','c'},{'a','b','c','c','c','c'}};
    
    for(int i = 0; i < 6; i++){
        for(int j = 0; j < 6; j++)
            cout<<"\t"<<((MatrixRight(matrix,i,j)==false)? "No":"Yes");
        cout<<"\n";
    }
*/








//Ayuda : https://stackoverflow.com/questions/34134074/c-size-of-two-dimensional-array/34135270