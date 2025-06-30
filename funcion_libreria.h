#ifndef FUNCION_LIBRO_H
#define FUNCION_LIBRO_H
#include <string>
using namespace std;

struct Libro {
    int id;
    string titulo;
    string autor;
    int anio;
    string genero;
    bool disponible;
};

const int max_libros = 3;
 
extern Libro biblioteca[max_libros];

void mostrarLibros();
void mostrarOrdenados();

#endif