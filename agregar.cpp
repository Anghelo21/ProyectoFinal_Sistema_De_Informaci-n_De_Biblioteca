#include "funciones.h"
#include <iostream>
using namespace std;
struct Libro{
	string libro, autor, editorial;
	int anio, IDlibro;
};
const int max_libros = 100;
Libro AlcL[max_libros];
int cantLibros = 0, contlibros = 1;
void agregarLibro() {
	if(cantLibros<max_libros){
		Libro li;
		li.IDlibro = contlibros++;
		cout<<"Nombre del libro: ";
		getline(cin, li.libro);
		cout<<"Autor del libro: ";
		getline(cin, li.autor);
		cout<<"Anio de publicacion: ";
		cin>>li.anio;
		cin.ignore();
		cout<<"Editorial del libro: ";
		getline(cin, li.editorial);
		AlcL[cantLibros] = li;
		cantLibros++;
		cout<<"Libro agregado, exitosamente"<<endl;
	}else{
		cout<<"Limite de libros alcanzado no se puede agregar mas libros";	
	}
}