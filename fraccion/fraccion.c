#include "fraccion.h"
#include <stdlib.h>
#include <stdio.h>

int calcularMCD(int a, int b) {
    a = (a < 0) ? -a : a;
    b = (b < 0) ? -b : b;
    while (b) {
        a %= b;
        int t = a; a = b; b = t;
    }
    return a;
}

void simplificar(Fraccion* f) {
    if (!f) return;
    int mcd = calcularMCD(f->num, f->den);
    f->num /= mcd;
    f->den /= mcd;
    if (f->den < 0) {
        f->num = -f->num;
        f->den = -f->den;
    }
}

Fraccion* crearFraccion(int num, int den) {
    if (den == 0) {
        printf("Error: El denominador no puede ser 0.\n");
        return NULL;
    }
    Fraccion *f = (Fraccion*)malloc(sizeof(Fraccion));
    f->num = num;
    f->den = den;
    simplificar(f); 
    return f;
}

Fraccion* sumar(const Fraccion* f1, const Fraccion* f2) {
    if (!f1 || !f2) return NULL;
    int nuevoNum = (f1->num * f2->den) + (f2->num * f1->den);
    int nuevoDen = f1->den * f2->den;
    return crearFraccion(nuevoNum, nuevoDen);
}

void imprimir(const Fraccion* f) {
    if (!f) {
        printf("NULL\n");
        return;
    }
    printf("%d/%d\n", f->num, f->den);
}

void destruir(Fraccion* f) {
    if (!f) return;
    free(f);
}
