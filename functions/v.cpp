//v) Modificar los casos q), r), s) y t) para que, en lugar de checar
// una celda en la dirección indicada, chequee si es posible avanzar 2 celdas en dicha dirección.

template <typename T>
bool MatrixTwoPos(T matrix, int posR,int posC);

bool MatrixTwoPos(int** matrix, int posR,int posC);

template <typename T>
bool MatrixTwoPos(T matrix, int posR,int posC){
    int moves=2;
    int TwoRight=posC+moves,TwoLeft=posC-moves,TwoUp=posR-moves,TwoDown=posR+moves;
    //cout<<TwoRight<<TwoLeft<<TwoUp<<TwoDown;
    //right
    int Mcols;
    Mcols=sizeof(matrix[0])/sizeof(matrix[0][0]);
    //Down
    int Marrow;
    Marrow=sizeof(matrix[0]);
    //left ; right ; Down ; Up
    if(TwoLeft<0||TwoRight>Mcols-1 || TwoDown>Marrow-1 || TwoUp<0)
        return false;
    else
        return true;
};

bool MatrixTwoPos(int** matrix, int posR,int posC){
    int moves=2;
    int TwoRight=posC+moves,TwoLeft=posC-moves,TwoUp=posR-moves,TwoDown=posR+moves;
    //cout<<TwoRight<<TwoLeft<<TwoUp<<TwoDown;
    //right
    int Mcols;
    Mcols=sizeof(matrix[0])/sizeof(matrix[0][0]);
    //Down
    int Marrow;
    Marrow=sizeof(matrix[0]);
    //left ; right ; Down ; Up
    if(TwoLeft<0||TwoRight>Mcols-1 || TwoDown>Marrow-1 || TwoUp<0)
        return false;
    else
        return true;
}

//main

/*

 char matrix[6][6]={{'a','b','c','c','c','c'},{'a','b','c','c','c','c'},{'a','b','c','c','c','c'},{'a','b','c','c','c','c'},{'a','b','c','c','c','c'},{'a','b','c','c','c','c'}};
    
    for(int i = 0; i < 6; i++){
        for(int j = 0; j < 6; j++)
            cout<<"\t"<<((MatrixTwoPos(matrix,i,j)==false)? "No":"Yes");
        cout<<"\n";
    }

*/