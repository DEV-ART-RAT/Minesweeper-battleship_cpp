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

    int** matrix=MatrixCuadrada<int>(10);
    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++)
            cout<<((MatrixNumberPos(matrix,i,j,1,'u')==false)? "No":"Yes")<<"\t";
        cout<<"\n";
    }
*/