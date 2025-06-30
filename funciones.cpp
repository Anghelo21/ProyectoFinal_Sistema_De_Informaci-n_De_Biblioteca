#include <iostream>
#include "funcion_libreria.h"
using namespace std;

Libro biblioteca[max_libros] = {
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
    Libro copia[max_libros];
    for (int i = 0; i < max_libros; i++) {
        copia[i] = biblioteca[i];
    }

    for (int i = 0; i < max_libros - 1; i++) {
        for (int j = 0; j < max_libros - i - 1; j++) {
            if (copia[j].titulo > copia[j+1].titulo) {
                Libro aux = copia[j];
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