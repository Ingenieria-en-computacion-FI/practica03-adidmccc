#ifndef pelicula_h
#define pelicula_h

#include <stdio.h>

struct pelicula{
    char *nombre;
    char *genero;
    short anio;
    short numdirectores;
    char *directores[10];
} 
typedef struct pelicula pelicula;

pelicula* crearpelicula(const char *nombre, const char *genero, short year);
void imprimirpelicula(const pelicula *p);
void cambiargenero(pelicula *p, const char *nuevogenero);
void agregardirector(pelicula *p, const char *director);
void destruirpelicula(pelicula *p);

#endif
