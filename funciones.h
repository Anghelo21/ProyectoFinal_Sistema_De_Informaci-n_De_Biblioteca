#ifndef FUNCIONES_H
#define FUNCIONES_H

#include <string>
using namespace std;

const int max_libros = 100;
const int max_usuarios = 100;
const int max_prestamos = 100;


struct Libro {
    int indic;
    string titulo;
    string autor;
    string editorial;
    int NumPaginas;
    int anio;
    int contPrestamos;
    bool dispo;
};
struct Prestamo {
    int idUsuario;
    int idLibro;
};


struct Usuario {
    int id;
    string nombre;
    int edad;
    string dni;
};

extern Libro biblioteca[max_libros];
extern int cantLibros;

extern Usuario personas[max_usuarios];
extern int cantUsuarios;

extern Prestamo prestamos[max_prestamos];
extern int cantPrestamos;

void gestionLibros();
void gestionUsuarios();
void gestionPrestamos();
void reporteGeneral();
void infoGrupo();

#endif
