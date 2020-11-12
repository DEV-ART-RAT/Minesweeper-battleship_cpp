//bb) Modifique aa) para que coloque los 1 en la celda dada y en la de su derecha.

template <typename T>
void MatrixRightInsertOne(T matrix, int posR,int posC);
void MatrixRightInsertOne(int** matrix, int posR,int posC);

template <typename T>
void MatrixRightInsertOne(T matrix, int posR,int posC){
    if(MatrixRight(matrix,posR,posC)){
        MatrixInsertOne(matrix,posR,posC);
        MatrixInsertOne(matrix,posR,posC+1);
    }
};

void MatrixRightInsertOne(int** matrix, int posR,int posC){
    if(MatrixRight(matrix,posR,posC)){
        MatrixInsertOne(matrix,posR,posC);
        MatrixInsertOne(matrix,posR,posC+1);
    };
}

//MAIN

/*

    int matrix[3][3]={{4,2,3},{4,2,3},{4,2,3}};
    printMatrix(matrix,3,3);
    MatrixRightInsertOne(matrix,0,1);
    cout<<"Modificada\n";
    printMatrix(matrix,3,3);

*/