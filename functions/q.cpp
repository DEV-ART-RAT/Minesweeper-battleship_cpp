//q) Hacer una función en C++ que dada una matriz int y una posición en la matriz,
// chequee si es posible acceder 1 celda a la izquierda de esta posición.
template <typename T>
bool MatrixLeft(T matrix, int posR,int posC);
bool MatrixLeft(int** matrix, int posR,int posC);

template <typename T>
bool MatrixLeft(T matrix, int posR,int posC){
    if(posC<=0)
        return false;
    else
        return true;
};

bool MatrixLeft(int** matrix, int posR,int posC){
    if(posC<=0)
        return false;
    else
        return true;
}

//MAIN

/*
  char matrix[6][6]={{'a','b','c','c','c','c'},{'a','b','c','c','c','c'},{'a','b','c','c','c','c'},{'a','b','c','c','c','c'},{'a','b','c','c','c','c'},{'a','b','c','c','c','c'}};
    
    for(int i = 0; i < 6; i++){
        for(int j = 0; j < 6; j++)
            cout<<"\t"<<((MatrixLeft(matrix,i,j)==false)? "No":"Yes");
        cout<<"\n";
    }

    */