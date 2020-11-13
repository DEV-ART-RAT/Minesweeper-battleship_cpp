//ii) Modificar los casos aa), bb), cc) y dd) para que, coloque los 1 en la celda dada 
//y en 5 celdas en la dirección indicada.

template <typename T>
void MatrixFiveStepInsertOne(T matrix, int posR,int posC,char pos);

template <typename T>
void MatrixFiveStepInsertOne(T matrix, int posR,int posC,char pos){
    switch (pos)
    {
    case 'u':
        if(MatrixFivePos(matrix,posR,posC,pos)){
            MatrixInsertOne(matrix,posR,posC);
            MatrixInsertOne(matrix,posR-5,posC);
        }
        break;
    case 'd':
        if(MatrixFivePos(matrix,posR,posC,pos)){
            MatrixInsertOne(matrix,posR,posC);
            MatrixInsertOne(matrix,posR+5,posC);}
        break;
    case 'l':
        if(MatrixFivePos(matrix,posR,posC,pos)){
        MatrixInsertOne(matrix,posR,posC);
        MatrixInsertOne(matrix,posR,posC-5);
        }
        break;
    case 'r':
        if(MatrixFivePos(matrix,posR,posC,pos)){
        MatrixInsertOne(matrix,posR,posC);
        MatrixInsertOne(matrix,posR,posC+5);}
        break;
    default:
        break;
    }
};