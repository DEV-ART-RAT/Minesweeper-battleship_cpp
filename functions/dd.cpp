//dd) Modifique aa) para que coloque los 1 en la celda dada y en la de arriba.

template <typename T>
void MatrixUpInsertOne(T matrix, int posR,int posC);
void MatrixUpInsertOne(int** matrix, int posR,int posC);

template <typename T>
void MatrixUpInsertOne(T matrix, int posR,int posC){
    if(MatrixUp(matrix,posR,posC)){
        MatrixInsertOne(matrix,posR,posC);
        MatrixInsertOne(matrix,posR-1,posC);
    }
};

void MatrixUpInsertOne(int** matrix, int posR,int posC){
    if(MatrixUp(matrix,posR,posC)){
        MatrixInsertOne(matrix,posR,posC);
        MatrixInsertOne(matrix,posR-1,posC);
    }
}

//MAIN
/*
    int matrix[3][3]={{4,2,3},{4,2,3},{4,2,3}};
    printMatrix(matrix,3,3);
    MatrixUpInsertOne(matrix,2,1);
    cout<<"Modificada\n";
    printMatrix(matrix,3,3);

*/