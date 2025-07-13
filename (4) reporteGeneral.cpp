#include "funciones.h"
#include <iostream>
#include <string>
using namespace std;
void Reportelibros(){
	cout << "---- REPORTE DE LIBROS ----\n";
    cout << "Total de libros registrados: " << cantLibros << endl;
}
void Reporteusuarios(){
	cout << "---- REPORTE DE USUARIOS ----\n";
    cout << "Total de usuarios registrados: " << cantUsuarios<< endl;
}
void Reporteprestamos(){
	cout << "---- REPORTE DE PRÉSTAMOS ----\n";
    cout << "Total de préstamos activos: " << cantPrestamos << endl;
}
void Libromasprestado(){
	int maxPrestamos = 0, pos = -1;
    for (int i = 0; i < cantLibros; i++) {
        if (biblioteca[i].contPrestamos > maxPrestamos) {
            maxPrestamos = biblioteca[i].contPrestamos ;
            pos = i;
        }
    }

    cout << "---- LIBRO MÁS PRESTADO ----\n";
    if (pos != -1) {
        cout << "Título: " << biblioteca[pos].titulo << endl;
        cout << "Autor: " << biblioteca[pos].autor << endl;
        cout << "Veces prestado: " << maxPrestamos << endl;
    } else {
        cout << "No hay registros de préstamos.\n";
    }
}
void reporteGeneral(){
	int Opcion;
	do{
		cout<<"\t\t\t   ___     ___      ___    ___     ___    _____    ___  "<<endl;	
		cout<<"\t\t\t  | _ \\   | __|    | _ \\  / _ \\   | _ \\  |_   _|  | __| "<<endl;	
		cout<<"\t\t\t  |   /   | _|     |  _/ | (_) |  |   /    | |    | _|  "<<endl;	
		cout<<"\t\t\t  |_|_\\   |___|    |_|    \\___/   |_|_\\    |_|    |___| "<<endl;	
		cout<<"      __   ____ \t   ___     ___    _  _     ___     ___     ___     _    "<<endl;	
		cout<<"     |**|_| || |_\t  / __|   | __|  | \\| |   | __|   | _ \\   /   \\   | |  "<<endl;	 
		cout<<"     |--| |=||=|\\\\\t | (_ |   | _|   | .` |   | _|    |   /   | - |   | |__ "<<endl;	
		cout<<"     |  | | || | \\\\\t  \\___|   |___|  |_|\\_|   |___|   |_|_\\   |_|_|   |____|"<<endl;	
		cout<<" ____|__|_|_||_|__\\\\___________________________________________________________________________________________________"<<endl;
		cout<<"|______________________________________________________________________________________________________________________|\n\n"<<endl;
		cout << "1. Reporte de libros"<<endl;
		cout << "2. Reporte de usuarios"<<endl;
		cout << "3. Reporte de prestamos"<<endl;
		cout << "4. Libro mas prestado"<<endl;
		cout << "5. Volver al menu principal"<<endl;
		cout <<"Seleccione una opcion: ";
		cin>>Opcion;
		cin.ignore();
		switch(Opcion){
			case 1:
				Reportelibros();
				break;
			case 2:
				Reporteusuarios();
				break;
			case 3:
				Reporteprestamos();
				break;
			case 4:
				Libromasprestado();
				break;
			case 5:
				cout<<"Restrocediendo..."<<endl;
				break;
			default:
				cout<<"Opcion invalida"<<endl;
				break;
		}
	} while(Opcion!=5);
}
