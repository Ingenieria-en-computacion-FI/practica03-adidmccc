#ifndef  __NODO__H__
#define __NODO__H__
struct Nodo{

    int valor;
};
typedef struct Nodo Nodo;

Nodo *crearNodo(int valor);
int obtenerValor(const Nodo *);
void asignarValor(Nodo*, int);
void destruirNodo(Nodo *);

#endif
