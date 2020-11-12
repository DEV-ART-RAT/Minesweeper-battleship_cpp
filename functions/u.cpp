//u) Fusionar los casos q), r), s) y t) en una sola función.

template <typename T>
bool MatrixOnePos(T matrix, int posR,int posC);

bool MatrixOnePos(int** matrix, int posR,int posC);

template <typename T>
bool MatrixOnePos(T matrix, int posR,int posC){
    //right
    int Mcols;
    Mcols=sizeof(matrix[0])/sizeof(matrix[0][0]);
    //Down
    int Marrow;
    Marrow=sizeof(matrix[0]);
    //left ; right ; Down ; Up
    if(posC<=0||posC>=Mcols-1 || posR>=Marrow-1 || posR<=0)
        return false;
    else
        return true;
};

bool MatrixOnePos(int** matrix, int posR,int posC){
   //right
    int Mcols;
    Mcols=sizeof(matrix[0])/sizeof(matrix[0][0]);
    //Down
    int Marrow;
    Marrow=sizeof(matrix[0]);
    //left ; right ; Down ; Up
    if(posC<=0||posC>=Mcols-1 || posR>=Marrow-1 || posR<=0)
        return false;
    else
        return true;
}
/*
    char matrix[6][6]={{'a','b','c','c','c','c'},{'a','b','c','c','c','c'},{'a','b','c','c','c','c'},{'a','b','c','c','c','c'},{'a','b','c','c','c','c'},{'a','b','c','c','c','c'}};
    
    for(int i = 0; i < 6; i++){
        for(int j = 0; j < 6; j++)
            cout<<"\t"<<((MatrixOnePos(matrix,i,j)==false)? "No":"Yes");
        cout<<"\n";
    }

    */