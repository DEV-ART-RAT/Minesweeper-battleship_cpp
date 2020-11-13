//hh) Modificar los casos aa), bb), cc) y dd) para que, coloque los 1 en la celda dada 
//y en 4 celdas en la dirección indicada.
template <typename T>
void MatrixFourStepInsertOne(T matrix, int posR,int posC,char pos);

template <typename T>
void MatrixFourStepInsertOne(T matrix, int posR,int posC,char pos){
    switch (pos)
    {
    case 'u':
        if(MatrixFourPos(matrix,posR,posC,pos)){
            MatrixInsertOne(matrix,posR,posC);
            MatrixInsertOne(matrix,posR-4,posC);
        }
        break;
    case 'd':
        if(MatrixFourPos(matrix,posR,posC,pos)){
            MatrixInsertOne(matrix,posR,posC);
            MatrixInsertOne(matrix,posR+4,posC);}
        break;
    case 'l':
        if(MatrixFourPos(matrix,posR,posC,pos)){
        MatrixInsertOne(matrix,posR,posC);
        MatrixInsertOne(matrix,posR,posC-4);
        }
        break;
    case 'r':
        if(MatrixFourPos(matrix,posR,posC,pos)){
        MatrixInsertOne(matrix,posR,posC);
        MatrixInsertOne(matrix,posR,posC+4);}
        break;
    default:
        break;
    }
};