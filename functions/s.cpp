//s) Modifique q) para en lugar de checar a la izquierda, se chequee abajo.

template <typename T>
bool MatrixDown(T matrix, int posR,int posC);

bool MatrixDown(int** matrix, int posR,int posC);

template <typename T>
bool MatrixDown(T matrix, int posR,int posC){
    int Marrow;
    Marrow=sizeof(matrix[0]);
    if(posR>=Marrow)
        return false;
    else
        return true;
};

bool MatrixDown(int** matrix, int posR,int posC){
     int Marrow;
    Marrow=sizeof(matrix[0]);
    if(posR>=Marrow)
        return false;
    else
        return true;
}

//main
/*
     char matrix[6][5]={{'a','b','c'},{'d','e','c'},{'a','b','c'},{'a','b','c'},{'d','e','c'},{'a','b','c'}    };
    cout<<"\n"<<((MatrixDown(matrix,4,3)==false)? "No":"Yes")<<"\n";

*/