//ee) Fusionar los casos aa), bb), cc) y dd) en una sola función.

template <typename T>
void MatrixOneStepInsertOne(T matrix, int posR,int posC,char pos);

template <typename T>
void MatrixOneStepInsertOne(T matrix, int posR,int posC,char pos){
    switch (pos)
    {
    case 'u':
        if(MatrixUp(matrix,posR,posC)){
            MatrixInsertOne(matrix,posR,posC);
            MatrixInsertOne(matrix,posR-1,posC);
        }
        break;
    case 'd':
        if(MatrixDown(matrix,posR,posC)){
            MatrixInsertOne(matrix,posR,posC);
            MatrixInsertOne(matrix,posR+1,posC);}
        break;
    case 'l':
        if(MatrixLeft(matrix,posR,posC)){
        MatrixInsertOne(matrix,posR,posC);
        MatrixInsertOne(matrix,posR,posC-1);
        }
        break;
    case 'r':
        if(MatrixRight(matrix,posR,posC)){
        MatrixInsertOne(matrix,posR,posC);
        MatrixInsertOne(matrix,posR,posC+1);}
        break;
    default:
        break;
    }
};

/*

    int matrix[3][3]={{4,2,3},{4,2,3},{4,2,3}};
    printMatrix(matrix,3,3);
    MatrixOneStepInsertOne(matrix,2,1,'l');
    cout<<"Modificada\n";
    printMatrix(matrix,3,3);
*/