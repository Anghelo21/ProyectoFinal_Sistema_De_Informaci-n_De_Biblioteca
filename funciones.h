#ifndef FUNCIONES_H
#define FUNCIONES_H
#include <string>
#include <iostream>
using namespace std;

const int max_libros = 100;
const int max_usuarios = 100;

struct Libro{
	int indic;
	string titulo;
	string autor;
	int anio;
	bool dispo;
};

struct Usuario{
	int id;
	string nombre;
	int edad;
	string dni;
};

void gestionUsuarios();
void infoGrupo();

#endif
