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
    if(posC<=0||posC>=Mcols-1 || posR>=Marrow || posR<=0)
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
    if(posC<=0||posC>=Mcols || posR>=Marrow || posR<=0)
        return false;
    else
        return true;
}
/*
    char matrix[6][3]={{'a','b','c'},{'d','e','c'},{'a','b','c'},{'a','b','c'},{'d','e','c'},{'a','b','c'}    };
    cout<<"\n"<<((MatrixOnePos(matrix,1,2)==false)? "No":"Yes")<<"\n";

    */