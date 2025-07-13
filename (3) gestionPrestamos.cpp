#include "funciones.h"
#include <iostream>
#include <string>
// Colores 
#define RESET       "\033[0m"
#define BLACK       "\033[30m"      
#define RED         "\033[31m"      
#define GREEN       "\033[32m"     
#define YELLOW      "\033[33m"     
#define BLUE        "\033[34m"      
#define MAGENTA     "\033[35m"     
#define CYAN        "\033[36m"     
#define WHITE       "\033[37m"      

// Colores Brillantes
#define BOLDBLACK   "\033[1m\033[30m"      
#define BOLDRED     "\033[1m\033[31m"      
#define BOLDGREEN   "\033[1m\033[32m"      
#define BOLDYELLOW  "\033[1m\033[33m"      
#define BOLDBLUE    "\033[1m\033[34m"     
#define BOLDMAGENTA "\033[1m\033[35m"      
#define BOLDCYAN    "\033[1m\033[36m"      
#define BOLDWHITE   "\033[1m\033[37m"      

// Colores para el fondo de las letras 
#define BG_BLACK    "\033[40m"
#define BG_RED      "\033[41m"
#define BG_GREEN    "\033[42m"
#define BG_YELLOW   "\033[43m"
#define BG_BLUE     "\033[44m"
#define BG_MAGENTA  "\033[45m"
#define BG_CYAN     "\033[46m"
#define BG_WHITE    "\033[47m"
using namespace std;
Prestamo prestamos[max_prestamos];
int cantPrestamos = 0;

void Prestar(){
	int idUsuario, idLibro;
    cout << "\n====== GESTION DE PRESTAMOS ======\n";
    cout << "Ingrese su ID de usuario: ";
    cin >> idUsuario;

    string nombreUsuario = "";
    bool usuarioExiste = false;
    for (int i = 0; i < cantUsuarios; i++) {
        if (personas[i].id == idUsuario) {
            usuarioExiste = true;
            nombreUsuario = personas[i].nombre;
            break;
        }
    }

    if (!usuarioExiste) {
        cout << "Usuario no encontrado.\n";
        return;
    }

    cout << "Ingrese el ID del libro a prestar: ";
    cin >> idLibro;

    bool libroEncontrado = false;
    for (int i = 0; i < cantLibros; i++) {
        if (biblioteca[i].indic == idLibro) {
            libroEncontrado = true;

            if (biblioteca[i].dispo) {
                cout << "El libro ya esta rentado.\n";
                return;
            }

            for (int j = 0; j < cantPrestamos; j++) {
                if (prestamos[j].idUsuario == idUsuario && prestamos[j].idLibro == idLibro) {
                    cout << "Ya tienes ese libro prestado.\n";
                    return;
                }
            }

            biblioteca[i].dispo = true;
            prestamos[cantPrestamos++] = { idUsuario, idLibro };

            cout << "El usuario " << nombreUsuario << " ha rentado el libro "
                 << biblioteca[i].titulo << " correctamente.\n";
            biblioteca[i].contPrestamos++;
            return;
        }
    }

    if (!libroEncontrado) {
        cout << "Libro no encontrado.\n";
    }
}

void devolverLibro() {
    int idUsuario, idLibro;
    cout << "\n====== DEVOLUCION DE LIBROS ======\n";
    cout << "Ingrese su ID de usuario: ";
    cin >> idUsuario;

    bool usuarioValido = false;
    for (int i = 0; i < cantUsuarios; i++) {
        if (personas[i].id == idUsuario) {
            usuarioValido = true;
            break;
        }
    }

    if (!usuarioValido) {
        cout << "❌ Usuario no encontrado.\n";
        return;
    }

    cout << "Ingrese el ID del libro que desea devolver: ";
    cin >> idLibro;

    int indicePrestamo = -1;
    for (int i = 0; i < cantPrestamos; i++) {
        if (prestamos[i].idUsuario == idUsuario && prestamos[i].idLibro == idLibro) {
            indicePrestamo = i;
            break;
        }
    }

    if (indicePrestamo == -1) {
        cout << "No se encontro prestamo de ese libro para este usuario.\n";
        return;
    }

    for (int i = 0; i < cantLibros; i++) {
        if (biblioteca[i].indic == idLibro) {
            biblioteca[i].dispo = false;
            break;
        }
    }

    for (int i = indicePrestamo; i < cantPrestamos - 1; i++) {
        prestamos[i] = prestamos[i + 1];
    }
    cantPrestamos--;

    cout << "Libro devuelto correctamente.\n";
}

void mostrarPrestamos() {
    if (cantPrestamos == 0) {
        cout << "No hay libros rentados actualmente.\n";
        return;
    }

    cout << "\n====== LISTA DE PRESTAMOS ======\n";

    for (int i = 0; i < cantPrestamos; i++) {
        string nombreUsuario = "Desconocido";
        string tituloLibro = "Desconocido";

        for (int j = 0; j < cantUsuarios; j++) {
            if (personas[j].id == prestamos[i].idUsuario) {
                nombreUsuario = personas[j].nombre;
                break;
            }
        }

        for (int k = 0; k < cantLibros; k++) {
            if (biblioteca[k].indic == prestamos[i].idLibro) {
                tituloLibro = biblioteca[k].titulo;
                break;
            }
        }

        cout << "Usuario: " << nombreUsuario 
             << " | Libro rentado: " << tituloLibro << endl;
    }
}

void gestionPrestamos() {
	int selec;
	do{
		cout<<BOLDGREEN<<"\t\t\t   ___     ___     ___    _____    ___     ___    _  _      ___     ___             "<<endl;  
		cout<<"\t\t\t  / __|   | __|   / __|  |_   _|  |_ _|   / _ \\  | \\| |    |   \\   | __|             "<<endl;  
		cout<<"\t\t\t | (_ |   | _|    \\__ \\    | |     | |   | (_) | | .` |    | |) |  | _|               "<<endl;  
		cout<<"\t\t\t  \\___|   |___|   |___/   _|_|_   |___|   \\___/  |_|\\_|    |___/   |___|             "<<endl;  
		cout<<"      __   ____ \t   ___    ___     ___     ___    _____    ___   __  __    ___     ___   "<<endl;   
		cout<<"     |**|_| || |_\t  | _ \\  | _ \\   | __|   / __|  |_   _|  /   \\ |  \\/  |  / _ \\   / __| "<<endl;  
		cout<<"     |--| |=||=|\\\\\t  |  _/  |   /   | _|    \\__ \\    | |    | - | | |\\/| | | (_) |  \\__ \\ "<<endl;  
		cout<<"     |  | | || | \\\\\t  |_|_   |_|_\\   |___|   |___/    |_|    |_|_| |_|__|_|  \\___/   |___/ "<<endl;  
		cout<<" ____|__|_|_||_|__\\\\___________________________________________________________________________________________________"<<endl;
		cout<<"|______________________________________________________________________________________________________________________|\n\n"<<RESET<<endl;
		cout<<"1. RENTAR LIBRO"<<endl;
		cout<<"2. DEVOLVER LIBRO"<<endl;
		cout<<"3. LISTA DE RENTAS"<<endl;
		cout<<"4. SALIR AL MENU PRINCIPAL"<<endl;
		cout<<"Seleccione una opcion: ";
		cin>>selec;
		cin.ignore();
		switch(selec){
			case 1:
				Prestar();
				break;
			case 2:
				devolverLibro();
				break;
			case 3:
				mostrarPrestamos();
				break;
			case 4:
				cout<<"Restrocediendo..."<<endl;
				break;
			default:
				cout<<"Opcion invalida"<<endl;
				break;
		}
	} while(selec!=4);
}
