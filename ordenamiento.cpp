#include <iostream>
#include "ordenamiento.h"
using namespace std;

void ordenamientoAlfabetico(Libro libros[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (libros[j].titulo > libros[j + 1].titulo) {
                Libro temp = libros[j];
                libros[j] = libros[j + 1];
                libros[j + 1] = temp;
            }
        }
    }
    cout << "Ordenamiento de libros: Alfabetico";
}

