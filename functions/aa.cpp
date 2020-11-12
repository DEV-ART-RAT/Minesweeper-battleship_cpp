// aa) Hacer una función en C++ que dada una matriz int y una posición en la matriz, 
//coloque un 1 en la celda dada y en la celda a su izquierda.
template <typename T>
void MatrixLeftInsertOne(T matrix, int posR,int posC);
void MatrixLeftInsertOne(int** matrix, int posR,int posC);


template <typename T>
void MatrixLeftInsertOne(T matrix, int posR,int posC){
    if(MatrixLeft(matrix,posR,posC)){
        MatrixInsertOne(matrix,posR,posC);
        MatrixInsertOne(matrix,posR,posC-1);
    }
};

void MatrixLeftInsertOne(int** matrix, int posR,int posC){
    if(MatrixLeft(matrix,posR,posC)){
        MatrixInsertOne(matrix,posR,posC);
        MatrixInsertOne(matrix,posR,posC-1);
    };
}

//MAIN
/*

    int matrix[3][3]={{4,2,3},{4,2,3},{4,2,3}};
    printMatrix(matrix,3,3);
    MatrixLeftInsertOne(matrix,0,1);
    cout<<"Modificada\n";
    printMatrix(matrix,3,3);

*/

