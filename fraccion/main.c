#include "fraccion.h"
#include <stdio.h>
#include <stdlib.h>

int main() {
    Fraccion *f1, *f2, *res;
    f1 = crearFraccion(2, 4);   
    f2 = crearFraccion(1, 3);   

    printf("Fraccion 1: ");
    imprimir(f1);
    printf("Fraccion 2: ");
    imprimir(f2);

    res = sumar(f1, f2);
    printf("Resultado de la suma: ");
    imprimir(res);

    destruir(f1);
    destruir(f2);
    destruir(res);
    
    f1 = NULL;
    (f1 == NULL) ? printf("Memoria liberada correctamente.\n") : printf("Error.\n");

    return 0;
}
