//cc) Modifique aa) para que coloque los 1 en la celda dada y en la de abajo.

template <typename T>
void MatrixDownInsertOne(T matrix, int posR,int posC);
void MatrixDownInsertOne(int** matrix, int posR,int posC);

template <typename T>
void MatrixDownInsertOne(T matrix, int posR,int posC){
    if(MatrixDown(matrix,posR,posC)){
        MatrixInsertOne(matrix,posR,posC);
        MatrixInsertOne(matrix,posR+1,posC);
    }
};

void MatrixDownInsertOne(int** matrix, int posR,int posC){
    if(MatrixDown(matrix,posR,posC)){
        MatrixInsertOne(matrix,posR,posC);
        MatrixInsertOne(matrix,posR+1,posC);
    };
}

//MAIN
/*

    int matrix[3][3]={{4,2,3},{4,2,3},{4,2,3}};
    printMatrix(matrix,3,3);
    MatrixDownInsertOne(matrix,0,1);
    cout<<"Modificada\n";
    printMatrix(matrix,3,3);

*/