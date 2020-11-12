//q) Hacer una función en C++ que dada una matriz int y una posición en la matriz,
// chequee si es posible acceder 1 celda a la izquierda de esta posición.
template <typename T>
bool MatrixLeft(T matrix, int posR,int posC);

bool MatrixLeft(int** matrix, int posR,int posC);

template <typename T>
bool MatrixLeft(T matrix, int posR,int posC){
    if(posR<=0)
        return false;
    else
        return true;
};

bool MatrixLeft(int** matrix, int posR,int posC){
    if(posR<=0)
        return false;
    else
        return true;
}

//MAIN

/*
char matrix[2][2]={{'a','b'},{'d','e'}};
    MatrixSpace(matrix,2);
    cout<<"\n"<<((MatrixLeft(matrix,1,1)==false)? "No Left":"Left")<<"\n";

    */