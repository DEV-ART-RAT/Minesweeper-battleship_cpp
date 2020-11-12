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
 char matrix[4][3]={{'a','b','c'},{'d','e','c'},{'a','b','c'},{'a','b','c'}};
    cout<<"\n"<<((MatrixLeft(matrix,0,1)==false)? "No":"Yes")<<"\n";

    */