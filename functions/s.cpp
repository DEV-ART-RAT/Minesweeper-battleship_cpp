//s) Modifique q) para en lugar de checar a la izquierda, se chequee abajo.

template <typename T>
bool MatrixDown(T matrix, int posR,int posC);

bool MatrixDown(int** matrix, int posR,int posC);

template <typename T>
bool MatrixDown(T matrix, int posR,int posC){
    int Marrow;
    Marrow=sizeof(matrix[0]);
    return(posR>=Marrow-1?false:true);    
};

bool MatrixDown(int** matrix, int posR,int posC){
    int Marrow;
    Marrow=sizeof(matrix) / sizeof(matrix[0]);
    return(posR>=Marrow-1?false:true); 
}

//main
/*
 char matrix[6][6]={{'a','b','c','c','c','c'},{'a','b','c','c','c','c'},{'a','b','c','c','c','c'},{'a','b','c','c','c','c'},{'a','b','c','c','c','c'},{'a','b','c','c','c','c'}};
    
    for(int i = 0; i < 6; i++){
        for(int j = 0; j < 6; j++)
            cout<<"\t"<<((MatrixDown(matrix,i,j)==false)? "No":"Yes");
        cout<<"\n";
    }

*/