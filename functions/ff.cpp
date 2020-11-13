//ff) Modificar los casos aa), bb), cc) y dd) para que, coloque los 1 en la celda dada y en 2 celdas en la
//dirección indicada.

template <typename T>
void MatrixTwoStepInsertOne(T matrix, int posR,int posC,char pos);

template <typename T>
void MatrixTwoStepInsertOne(T matrix, int posR,int posC,char pos){
    switch (pos)
    {
    case 'u':
        if(MatrixTwoPos(matrix,posR,posC,pos)){
            MatrixInsertOne(matrix,posR,posC);
            MatrixInsertOne(matrix,posR-2,posC);
        }
        break;
    case 'd':
        if(MatrixTwoPos(matrix,posR,posC,pos)){
            MatrixInsertOne(matrix,posR,posC);
            MatrixInsertOne(matrix,posR+2,posC);}
        break;
    case 'l':
        if(MatrixTwoPos(matrix,posR,posC,pos)){
        MatrixInsertOne(matrix,posR,posC);
        MatrixInsertOne(matrix,posR,posC-2);
        }
        break;
    case 'r':
        if(MatrixTwoPos(matrix,posR,posC,pos)){
        MatrixInsertOne(matrix,posR,posC);
        MatrixInsertOne(matrix,posR,posC+2);}
        break;
    default:
        break;
    }
};
/*

int matrix[3][3]={{4,2,3},{4,2,3},{4,2,3}};
    printMatrix(matrix,3,3);
    MatrixTwoStepInsertOne(matrix,0,0,'r');
    cout<<"Modificada\n";
    printMatrix(matrix,3,3);

    */