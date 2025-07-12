#ifndef FUNCIONES_H
#define FUNCIONES_H
#include <string>
#include <iostream>
using namespace std;

struct Libro{
	int indic=100;
	string titulo;
	string autor;
	string editorial;
	int NumPaginas;
	int anio;
	int cantidad;
	bool dispo;
};

struct Usuario{
	int id;
	string nombre;
	int edad;
	string dni;
};
void gestionLibros();
void gestionUsuarios();
void infoGrupo();

#endif
