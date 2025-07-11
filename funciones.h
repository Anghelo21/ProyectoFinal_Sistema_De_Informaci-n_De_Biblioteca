#ifndef FUNCIONES_H
#define FUNCIONES_H
#include <string>
#include <iostream>
using namespace std;

const int max_libros = 100;

struct cantLibros;

struct Libro{
	int indic=103;
	string titulo;
	string autor;
	int anio;
	bool dispo;
};

void agregarLibro();
void eliminarLibro();
void mostrarLibros();
void infoGrupo();
void alquilarLibro();

#endif
