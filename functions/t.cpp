//t) Modifique q) para en lugar de checar a la izquierda, se chequee arriba.
template <typename T>
bool MatrixUp(T matrix, int posR,int posC);

bool MatrixUp(int** matrix, int posR,int posC);

template <typename T>
bool MatrixUp(T matrix, int posR,int posC){
    if(posR<=0)
        return false;
    else
        return true;
};

bool MatrixUp(int** matrix, int posR,int posC){
    if(posR<=0)
        return false;
    else
        return true;
}
//main
/*
   char matrix[6][5]={{'a','b','c'},{'d','e','c'},{'a','b','c'},{'a','b','c'},{'d','e','c'},{'a','b','c'}    };
    cout<<"\n"<<((MatrixUp(matrix,1,3)==false)? "No":"Yes")<<"\n";
    */