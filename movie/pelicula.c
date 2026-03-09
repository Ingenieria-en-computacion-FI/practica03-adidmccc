#include "pelicula.h"
#include <stdlib.h>
#include <string.h>

static char* copiartexto(const char *s) {
    if (!s) return NULL;
    char *copia = malloc(strlen(s) + 1);
    if (copia) strcpy(copia, s);
    return copia;
}

pelicula* crearpelicula(const char *nombre, const char *genero, short year) {
    pelicula *p = malloc(sizeof(pelicula));
    if (!p) return NULL;
    p->nombre = copiartexto(nombre);
    p->genero = copiartexto(genero);
    p->year = year;
    p->numdirectores = 0;
    return p;
}

void imprimirpelicula(const pelicula *p) {
    if (!p) return;
    printf("pelicula: %s\nyear: %d\ngenero: %s\ndirectores:\n", p->nombre, p->year, p->genero);
    for (int i = 0; i < p->numdirectores; i++) {
        printf("- %s\n", p->directores[i]);
    }
}

void cambiargenero(pelicula *p, const char *nuevogenero) {
    if (!p || !nuevogenero) return;
    free(p->genero);
    p->genero = copiartexto(nuevogenero);
}

void agregardirector(pelicula *p, const char *director) {
    if (!p || p->numdirectores >= 10 || !director) return;
    p->directores[p->numdirectores] = copiartexto(director);
    p->numdirectores++;
}

void destruirpelicula(pelicula *p) {
    if (!p) return;
    free(p->nombre);
    free(p->genero);
    for (int i = 0; i < p->numdirectores; i++) {
        free(p->directores[i]);
    }
    free(p);
}
