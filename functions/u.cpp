//u) Fusionar los casos q), r), s) y t) en una sola función.

template <typename T>
bool MatrixOnePos(T matrix, int posR,int posC);

bool MatrixOnePos(int** matrix, int posR,int posC);

template <typename T>
bool MatrixOnePos(T matrix, int posR,int posC){
    int moves=1;
    int Right=posC+moves,Left=posC-moves,Up=posR-moves,Down=posR+moves;
    //cout<<Right<<Left<<Up<<Down;
    int Mcols,Mrow,MaxCol,MaxRow;
    //right
    Mcols=sizeof(matrix[0])/sizeof(matrix[0][0]);
    //Down
    Mrow=sizeof(matrix[0]);
    MaxCol=Mcols-1;
    MaxRow=Mrow-1;

    //cout<<"\n-> Columnas:"<<Mcols<<"\t-> Filas:"<<Mrow;
    //cout<<"\n-> Columnas Max:"<<MaxCol<<"\t-> Fila Max:"<<MaxRow;

    //left ; right ; Down ; Up
    if(Left<0||Right>MaxCol || Down>MaxRow || Up<0)
        return false;
    else
        return true;
};

bool MatrixOnePos(int** matrix, int posR,int posC){
    int moves=1;
    int Right=posC+moves,Left=posC-moves,Up=posR-moves,Down=posR+moves;
    //cout<<Right<<Left<<Up<<Down;
    
    int Mcols,Mrow,MaxCol,MaxRow;
    //right
    Mcols=sizeof(matrix[0])/sizeof(matrix[0][0]);
    //Down
    Mrow=sizeof(matrix[0]);
    MaxCol=Mcols-1;
    MaxRow=Mrow-1;

    //cout<<"\n-> Columnas:"<<Mcols<<"\t-> Filas:"<<Mrow;
    //cout<<"\n-> Columnas Max:"<<MaxCol<<"\t-> Fila Max:"<<MaxRow;

    //left ; right ; Down ; Up
    if(Left<0||Right>MaxCol || Down>MaxRow || Up<0)
        return false;
    else
        return true;
}
/*
   char matrix[10][10]={{'a','b','c','c','c','c','c','c','a','b'},{'a','b','c','c','c','c','c','c','a','b'},{'a','b','c','c','c','c','c','c','a','b'},{'a','b','c','c','c','c','c','c','a','b'},{'a','b','c','c','c','c','c','c','a','b'},{'a','b','c','c','c','c','c','c','a','b'},{'a','b','c','c','c','c','c','c','a','b'},{'a','b','c','c','c','c','c','c','a','b'},{'a','b','c','c','c','c','c','c','a','b'},{'a','b','c','c','c','c','c','c','a','b'}};
    
    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++)
            cout<<"\t"<<((MatrixOnePos(matrix,i,j)==false)? "No":"Yes");
        cout<<"\n";
    }

    */