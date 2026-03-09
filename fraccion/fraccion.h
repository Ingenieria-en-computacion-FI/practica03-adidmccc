#ifndef __FRACCION__H__
#define __FRACCION__H__

struct Fraccion {
    int num;
    int den;
};
typedef struct Fraccion Fraccion;

Fraccion* crearFraccion(int num, int den);
void simplificar(Fraccion* f);
Fraccion* sumar(const Fraccion* f1, const Fraccion* f2);
void imprimir(const Fraccion* f);
void destruir(Fraccion* f);

#endif
