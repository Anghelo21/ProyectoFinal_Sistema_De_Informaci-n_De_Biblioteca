#include<iostream>
#include "funcion_libreria.h"
using namespace std;

int main() {
	int opcion;
    do {
        cout << "\n=== MENU ===\n";
        cout << "1. Agregar Libro\n";
        cout << "2. Mostrar todos los libros\n";
        cout << "3. Mostrar libros ordenados por titulo\n";
        cout << "4. Retornar\n";
        cout << "5. Salir\n";
        cout << "Opcion: ";
        cin >> opcion;
		cin.ignore();
        switch (opcion) {
        	case 1: "Por completar";
            case 2: mostrarLibros(); break;
            case 3: mostrarOrdenados(); break;
            case 4: "Por completar";
            case 5: cout << "Safando. . .\n"; break;
            default: cout << "Vuelve a intentar burro.\n";
        }
  		
    } while (opcion != 4 && 5);
    return 0;
}  