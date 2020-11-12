//t) Modifique q) para en lugar de checar a la izquierda, se chequee arriba.
template <typename T>
bool MatrixUp(T matrix, int posR,int posC);

bool MatrixUp(int** matrix, int posR,int posC);

template <typename T>
bool MatrixUp(T matrix, int posR,int posC){
    return(posR<=0?false:true);
};

bool MatrixUp(int** matrix, int posR,int posC){
    return(posR<=0?false:true);
}
//main
/*
      char matrix[6][6]={{'a','b','c','c','c','c'},{'a','b','c','c','c','c'},{'a','b','c','c','c','c'},{'a','b','c','c','c','c'},{'a','b','c','c','c','c'},{'a','b','c','c','c','c'}};
    
    for(int i = 0; i < 6; i++){
        for(int j = 0; j < 6; j++)
            cout<<"\t"<<((MatrixUp(matrix,i,j)==false)? "No":"Yes");
        cout<<"\n";
    }
*/