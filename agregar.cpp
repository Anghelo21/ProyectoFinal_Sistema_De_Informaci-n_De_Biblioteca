#include "funciones.h"
#include <iostream>
#include <string>

using namespace std;
struct Libro{
	string libro, autor, editorial;
	int anio, IDlibro;
};

struct Libro2 {
    int id;
    string titulo;
    string autor;
    int anio;
    string genero;
    bool disponible;
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

Libro2 biblioteca[max_libros] = {
    {1, "Cien anios de soledad", "Gabriel Garcia Marquez", 1967, "Realismo magico", true},
    {2, "Don Quijote de la Mancha", "Miguel de Cervantes", 1605, "Novela", true},
    {3, "El Principito", "Antoine de Saint-Exupery", 1943, "Fabula", true}
};

void mostrarLibros() {
    cout << "\nLISTADO DE LIBROS:\n";
    for (int i = 0; i < max_libros; i++) {
        cout << biblioteca[i].id <<" | "<< biblioteca[i].titulo <<" | "
             << biblioteca[i].autor <<" | "<< biblioteca[i].anio <<" | "
             << biblioteca[i].genero <<" | "
             << (biblioteca[i].disponible ? "Disponible" : "Prestado")<< endl;
    }
}

void mostrarOrdenados() {
    Libro2 copia[max_libros];
    for (int i = 0; i < max_libros; i++) {
        copia[i] = biblioteca[i];
    }

    for (int i = 0; i < max_libros - 1; i++) {
        for (int j = 0; j < max_libros - i - 1; j++) {
            if (copia[j].titulo > copia[j+1].titulo) {
                Libro2 aux = copia[j];
                copia[j] = copia[j+1];
                copia[j+1] = aux;
            }
        }
    }

    cout << "\nLISTADO ORDENADO POR TITULO\n";
    for (int i = 0; i < max_libros; i++) {
        cout << copia[i].id << " | "
             << copia[i].titulo << " | "
             << copia[i].autor << endl;
    }
} 

void infoGrupo() {
    cout << "\n=== INFORMACION DEL GRUPO ===\n" << endl;
    cout << "" << endl;
    cout << "" << endl;
    cout << "" << endl;
    cout << "" << endl;
}