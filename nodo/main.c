#include "nodo.h"
#include <stdio.h>

int main(){
    Nodo *n;
    n = crearNodo(2);
    printf("El valor del nodo es: %d\n", obtenerValor(n));
    asignarValor(n, 45);
    printf("El valoer del nodo es: %d\n", obtenerValor(n));
    destruirNodo(n);
    n =  NULL;
    (n == NULL)? printf("el nodo es nuelo\n") : printf("el nodo es nuelo\n");
    return 0;
}
