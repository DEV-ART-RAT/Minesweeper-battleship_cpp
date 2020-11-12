//ee) Fusionar los casos aa), bb), cc) y dd) en una sola función.

template <typename T>
void MatrixOneStepInsertOne(T matrix, int posR,int posC,char pos);
void MatrixOneStepInsertOne(int** matrix, int posR,int posC,char pos);

template <typename T>
void MatrixOneStepInsertOne(T matrix, int posR,int posC,char pos){
    switch (pos)
    {
    case 'u':
        MatrixInsertOne(matrix,posR,posC);
        MatrixInsertOne(matrix,posR-1,posC);
        break;
    case 'd':
        MatrixInsertOne(matrix,posR,posC);
        MatrixInsertOne(matrix,posR+1,posC);
        break;
    case 'l':
        MatrixInsertOne(matrix,posR,posC);
        MatrixInsertOne(matrix,posR,posC-1);
        break;
    case 'r':
        MatrixInsertOne(matrix,posR,posC);
        MatrixInsertOne(matrix,posR,posC+1);
        break;
    default:
        break;
    }
};

void MatrixOneStepInsertOne(int** matrix, int posR,int posC,char pos){
    switch (pos)
    {
    case 'u':
        MatrixInsertOne(matrix,posR,posC);
        MatrixInsertOne(matrix,posR-1,posC);
        break;
    case 'd':
        MatrixInsertOne(matrix,posR,posC);
        MatrixInsertOne(matrix,posR+1,posC);
        break;
    case 'l':
        MatrixInsertOne(matrix,posR,posC);
        MatrixInsertOne(matrix,posR,posC-1);
        break;
    case 'r':
        MatrixInsertOne(matrix,posR,posC);
        MatrixInsertOne(matrix,posR,posC+1);
        break;
    default:
        break;
    }
}
/*

    int matrix[3][3]={{4,2,3},{4,2,3},{4,2,3}};
    printMatrix(matrix,3,3);
    MatrixOneStepInsertOne(matrix,1,1,'d');
    cout<<"Modificada\n";
    printMatrix(matrix,3,3);

*/