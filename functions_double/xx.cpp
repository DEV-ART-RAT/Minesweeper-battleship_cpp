#include "../tools/header.h"
#include "../tools/tools.h"
#include "../functions_double/tt.cpp"

template<class T>
void xx(doubleLinked<T> *list) {
    ifstream data;
    data.open("data.csv",ios::in);
    for(string line; getline(data,line);){
        stringstream regi(line);
        string dato,name;
        int point;
        for (int col = 0;getline(regi,dato,',');col++){
            if(col==0){
                name = dato;
            }else
            {
                point = stoi(dato);
                pushBack(T(point,name),list);
            }
        }

    }
    data.close();
}
