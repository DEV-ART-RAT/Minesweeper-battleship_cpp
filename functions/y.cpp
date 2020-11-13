//y) Modificar los casos q), r), s) y t) para que, en lugar de checar una celda en
// la dirección indicada, chequee si es posible avanzar 5 celdas en dicha dirección.


template <typename T>
bool MatrixFivePos(T matrix, int posR,int posC,char pos);

template <typename T>
bool MatrixFivePos(T matrix, int posR,int posC,char pos){
  int moves=5;
    int Right=posC+moves,Left=posC-moves,Up=posR-moves,Down=posR+moves,Mcols,Mrow,MaxCol,MaxRow;   
    Mcols=sizeof(matrix[0])/sizeof(matrix[0][0]);Mrow=sizeof(matrix[0]);
    MaxCol=Mcols-1;
    MaxRow=Mrow-1;
    //left ; right ; Down ; Up
    switch (pos)
    {
    case 'a':
        return (Left<0||Right>MaxCol || Down>MaxRow || Up<0)?false:true;
        break;
    case 'l':
        return((Left<0)?false:true);
    case 'r':
        return((Right>MaxCol)?false:true);
    case 'd':
        return((Down>MaxRow)?false:true);
    case 'u':
        return((Up<0)?false:true);

    default:
        return false;
        break;
    }
       
};


//MAIN
/*

    char matrix[16][16]={{'a','b','c','c','c','c','c','c','a','b','c','c','c','c','c','c'},{'a','b','c','c','c','c','c','c','a','b','c','c','c','c','c','c'},{'a','b','c','c','c','c','c','c','a','b','c','c','c','c','c','c'},{'a','b','c','c','c','c','c','c','a','b','c','c','c','c','c','c'},{'a','b','c','c','c','c','c','c','a','b','c','c','c','c','c','c'},{'a','b','c','c','c','c','c','c','a','b','c','c','c','c','c','c'},{'a','b','c','c','c','c','c','c','a','b','c','c','c','c','c','c'},{'a','b','c','c','c','c','c','c','a','b','c','c','c','c','c','c'},{'a','b','c','c','c','c','c','c','a','b','c','c','c','c','c','c'},{'a','b','c','c','c','c','c','c','a','b','c','c','c','c','c','c'},{'a','b','c','c','c','c','c','c','a','b','c','c','c','c','c','c'},{'a','b','c','c','c','c','c','c','a','b','c','c','c','c','c','c'},{'a','b','c','c','c','c','c','c','a','b','c','c','c','c','c','c'},{'a','b','c','c','c','c','c','c','a','b','c','c','c','c','c','c'},{'a','b','c','c','c','c','c','c','a','b','c','c','c','c','c','c'},{'a','b','c','c','c','c','c','c','a','b','c','c','c','c','c','c'}};
    for(int i = 0; i < 16; i++){
        for(int j = 0; j < 16; j++)
            cout<<((MatrixFivePos(matrix,i,j,'a')==false)? "No":"Yes")<<"\t";
        cout<<"\n";
    }

*/