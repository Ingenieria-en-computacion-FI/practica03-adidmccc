#include "pelicula.h"

int main() {
    pelicula mipelícula = crearpelicula("interstellar", "sci-fi", 2014);
    agregardirector(mipelícula, "christopher nolan");
    cambiargenero(mipelícula, "ciencia ficcion");
    imprimirpelicula(mipelícula);
    destruirpelicula(mipelícula);
    return 0;
}
