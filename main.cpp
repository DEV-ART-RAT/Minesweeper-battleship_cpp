#include "tools/head.h"
#include "tools/header.h"
#include <time.h>

typedef char **MatrixChar;
typedef int **MatrixInt;
/* Responder a la pregunta: ¿Qué está programando? Es decir, viendo el producto como un todo,
    desde lo global, ¿De qué se trata la aplicación?

    Ya segun yo terminado diria que es una especie de battleship pero como es de una sola persona
    podria ser un buscaminas un poco extrano?

 */

int main(void)
{
    //Reiniciamos el random;
    srand(time(NULL));
    //VARIABLES
    string user;
    MatrixChar M1;
    MatrixInt M2;
    int P, C;
    //tamanio de tablero
    int SIZE = 8;
    //Doble lista enlazada de tipo node
    doubleLinked<nodeinfo> list;

    //MAIN:
    //Obtener un nombre con a)
    user = a();
    //Inicializar P con b)
    b(P, 0);
    //Inicializar C en 0
    b(C, 0);
    //Inicializar M1 con j)
    j(&M1, SIZE);
    //Inicializar M2 con l)
    l(&M2, SIZE);
    //Ejecutar kk) 1 vez
    kk(M2, SIZE);
    //Ejecutar ll) 2 veces
    ll(M2, SIZE);
    ll(M2, SIZE);
    //Ejecutar mm) 1 vez
    mm(M2, SIZE);
    //Ejecutar rr), utilizando M1 como N y M2 como M
    ss(M1, SIZE);
    rr(M2, M1, P, C, SIZE);
    //Ejecutar xx), dejando una lista L
    xx(&list);
    //Hacer un nuevo nodo para L utilizando el nombre del primer paso y P, insertar este nodo en L
    pushBack(nodeinfo(P, user), &list);
    //Ejecutar uu)
    quickSort(list.front);
    //Ejecutar ww)
    ww(&list);
    //ejecutar yy)
    yy(list.front);

    return 0;
}
