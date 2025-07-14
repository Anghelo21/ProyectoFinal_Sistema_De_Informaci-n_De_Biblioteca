#include "funciones.h"
#include <iostream>
#include <string>

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
    system("pause");
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
    system("pause");
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
    system("pause");
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
		cout<<"|______________________________________________________________________________________________________________________|"<<RESET<<endl;
		cout<<BOLDYELLOW<<"   1. Rentar libro"<<RESET<<BOLDGREEN<<"\t\t\t||"<<RESET<<BOLDCYAN<<"  2. Devolver libro"<<RESET<<BOLDGREEN<<"\t\t\t||"<<RESET<<BOLDBLUE<<"   3. Lista de rentas"<<RESET<<endl;
		cout<<BOLDYELLOW<<"               __  ______    "<<RESET<<BOLDGREEN<<"\t\t||\t"<<RESET<<BOLDCYAN<<"       __ _______        "<<RESET<<BOLDGREEN<<"\t||\t"<<RESET<<BOLDBLUE<<"   __________"<<RESET<<endl;
		cout<<BOLDYELLOW<<"         _____/ __) _____\\  "<<RESET<<BOLDGREEN<<"\t\t||\t"<<RESET<<BOLDCYAN<<" _____/ __) _____\\  "<<RESET<<BOLDGREEN<<"\t\t||\t"<<RESET<<BOLDBLUE<<"  /\\          \\     "<<RESET<<endl;
		cout<<BOLDYELLOW<<"               (____)        "<<RESET<<BOLDGREEN<<"\t\t||\t"<<RESET<<BOLDCYAN<<"             ______\\  "<<RESET<<BOLDGREEN<<"\t\t||\t"<<RESET<<BOLDBLUE<<"  \\/| ------- |      "<<RESET<<endl;
		cout<<BOLDYELLOW<<"         ____  (____)        "<<RESET<<BOLDGREEN<<"\t\t||\t"<<RESET<<BOLDCYAN<<" ______     ______\\ "<<RESET<<BOLDGREEN<<"\t\t||\t"<<RESET<<BOLDBLUE<<"    | ------- |      "<<RESET<<endl;
		cout<<BOLDYELLOW<<"             \\_(____)       "<<RESET<<BOLDGREEN<<"\t\t||\t"<<RESET<<BOLDCYAN<<"      \\_______\\     "<<RESET<<BOLDGREEN<<"\t\t||\t"<<RESET<<BOLDBLUE<<"   /| ------- |      "<<RESET<<endl;
		cout<<BOLDYELLOW<<"                             "<<RESET<<BOLDGREEN<<"\t\t||\t"<<RESET<<BOLDCYAN<<"                     "<<RESET<<BOLDGREEN<<"\t\t||\t"<<RESET<<BOLDBLUE<<"   \\/_________|  "<<RESET<<endl;
		cout<<BOLDGREEN<<" _______________________________________||______________________________________||____________________________________"<<endl;
		cout<<"|_____________________________________________________________________________________________________________________|"<<RESET<<endl;
		cout<<BOLDGREEN<<"\t\t\t\t\t||"<<RESET<<BOLDRED<<"   4. Retroceder              "<<RESET<<BOLDGREEN<<"\t||"<<endl;
		cout<<BOLDGREEN<<"\t\t\t\t\t||\t"<<RESET<<BOLDRED<<"       ______   "<<RESET<<BOLDGREEN<<"\t\t||\t\t"<<endl;
		cout<<BOLDGREEN<<"\t\t\t\t\t||\t"<<RESET<<BOLDRED<<"      | EXIT |  "<<RESET<<BOLDGREEN<<"\t\t||\t\t"<<endl;
		cout<<BOLDGREEN<<"\t\t\t\t\t||\t"<<RESET<<BOLDRED<<"      |     o|  "<<RESET<<BOLDGREEN<<"\t\t||\t\t"<<endl;
		cout<<BOLDGREEN<<"\t\t\t\t\t||\t"<<RESET<<BOLDRED<<"      |      |  "<<RESET<<BOLDGREEN<<"\t\t||\t\t"<<endl;
		cout<<BOLDGREEN<<"\t\t\t\t\t||\t"<<RESET<<BOLDRED<<"      |______|     "<<RESET<<BOLDGREEN<<"\t\t||\t\t"<<endl;
		cout<<BOLDGREEN<<"\t\t\t\t\t||\t"<<RESET<<BOLDRED<<"                    "<<RESET<<BOLDGREEN<<"\t\t||\t\t"<<endl;
		cout<<BOLDGREEN<<"________________________________________||______________________________________||_____________________________________"<<endl;
		cout<<"|______________________________________________________________________________________________________________________|"<<RESET<<endl;     
    	cout<<"\t\t\t\t\t\tSeleccione una opcion: ";
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
