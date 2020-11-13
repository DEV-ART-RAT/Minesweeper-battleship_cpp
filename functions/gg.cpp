//gg) Modificar los casos aa), bb), cc) y dd) para que, coloque los 1 en la celda dada y 
//en 3 celdas en la dirección indicada.

template <typename T>
void MatrixThreeStepInsertOne(T matrix, int posR,int posC,char pos);

template <typename T>
void MatrixThreeStepInsertOne(T matrix, int posR,int posC,char pos){
    switch (pos)
    {
    case 'u':
        if(MatrixThreePos(matrix,posR,posC,pos)){
            MatrixInsertOne(matrix,posR,posC);
            MatrixInsertOne(matrix,posR-3,posC);
        }
        break;
    case 'd':
        if(MatrixThreePos(matrix,posR,posC,pos)){
            MatrixInsertOne(matrix,posR,posC);
            MatrixInsertOne(matrix,posR+3,posC);}
        break;
    case 'l':
        if(MatrixThreePos(matrix,posR,posC,pos)){
        MatrixInsertOne(matrix,posR,posC);
        MatrixInsertOne(matrix,posR,posC-3);
        }
        break;
    case 'r':
        if(MatrixThreePos(matrix,posR,posC,pos)){
        MatrixInsertOne(matrix,posR,posC);
        MatrixInsertOne(matrix,posR,posC+3);}
        break;
    default:
        break;
    }
};
/*
int matrix[8][8]={{4,2,3,3,4,3,4,3},{4,2,3,3,4,3,4,3},{4,2,3,3,4,3,4,3},{4,2,3,3,4,3,4,3},{4,2,3,3,4,3,4,3},{4,2,3,3,4,3,4,3},{4,2,3,3,4,3,4,3},{4,2,3,3,4,3,4,3}};
    printMatrix(matrix,8,8);
    MatrixThreeStepInsertOne(matrix,0,0,'r');
    cout<<"Modificada\n";
    printMatrix(matrix,8,8);
*/