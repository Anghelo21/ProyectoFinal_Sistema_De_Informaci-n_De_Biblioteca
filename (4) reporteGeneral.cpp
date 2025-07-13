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
		cout<<BOLDCYAN<<"\t\t\t   ___     ___      ___    ___     ___    _____    ___  "<<endl;	
		cout<<"\t\t\t  | _ \\   | __|    | _ \\  / _ \\   | _ \\  |_   _|  | __| "<<endl;	
		cout<<"\t\t\t  |   /   | _|     |  _/ | (_) |  |   /    | |    | _|  "<<endl;	
		cout<<"\t\t\t  |_|_\\   |___|    |_|    \\___/   |_|_\\    |_|    |___| "<<endl;	
		cout<<"      __   ____ \t   ___     ___    _  _     ___     ___     ___     _    "<<endl;	
		cout<<"     |**|_| || |_\t  / __|   | __|  | \\| |   | __|   | _ \\   /   \\   | |  "<<endl;	 
		cout<<"     |--| |=||=|\\\\\t | (_ |   | _|   | .` |   | _|    |   /   | - |   | |__ "<<endl;	
		cout<<"     |  | | || | \\\\\t  \\___|   |___|  |_|\\_|   |___|   |_|_\\   |_|_|   |____|"<<endl;	
		cout<<" ____|__|_|_||_|__\\\\___________________________________________________________________________________________________"<<endl;
		cout<<"|______________________________________________________________________________________________________________________|\n\n"<<RESET<<endl;
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
