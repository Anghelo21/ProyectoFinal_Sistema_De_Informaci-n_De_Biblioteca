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
    cout << "Total de prestamos activos: " << cantPrestamos << endl;
}
void Libromasprestado(){
	int maxPrestamos = 0, pos = -1;
    for (int i = 0; i < cantLibros; i++) {
        if (biblioteca[i].contPrestamos > maxPrestamos) {
            maxPrestamos = biblioteca[i].contPrestamos ;
            pos = i;
        }
    }

    cout << "---- LIBRO MAS PRESTADO ----\n";
    if (pos != -1) {
        cout << "Titulo: " << biblioteca[pos].titulo << endl;
        cout << "Autor: " << biblioteca[pos].autor << endl;
        cout << "Veces prestado: " << maxPrestamos << endl;
    } else {
        cout << "No hay registros de prestamos.\n";
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
		cout<<"|______________________________________________________________________________________________________________________|"<<RESET<<endl;
		cout<<BOLDYELLOW<<"   1. Reporte de libros"<<RESET<<BOLDCYAN<<"\t\t\t||"<<RESET<<BOLDBLUE<<"  2. Reporte de usuarios"<<RESET<<BOLDCYAN<<"\t\t||"<<RESET<<BOLDGREEN<<"   3. Reporte de prestamos"<<RESET<<endl;
		cout<<BOLDYELLOW<<"                ________     "<<RESET<<BOLDCYAN<<"\t\t||\t"<<RESET<<BOLDBLUE<<"     ____      ____     "<<RESET<<BOLDCYAN<<"\t||\t"<<RESET<<BOLDGREEN<<"       __  ______    "<<RESET<<endl;
		cout<<BOLDYELLOW<<"           ____/       //____"<<RESET<<BOLDCYAN<<"\t\t||\t"<<RESET<<BOLDBLUE<<"    /    \\____/    \\  "<<RESET<<BOLDCYAN<<"\t\t||\t"<<RESET<<BOLDGREEN<<" _____/ __) _____\\  "<<RESET<<endl;
		cout<<BOLDYELLOW<<"          /   /       //   //"<<RESET<<BOLDCYAN<<"\t\t||\t"<<RESET<<BOLDBLUE<<"   |     /    \\     |  "<<RESET<<BOLDCYAN<<"\t\t||\t"<<RESET<<BOLDGREEN<<"       (____)        "<<RESET<<endl;
		cout<<BOLDYELLOW<<"         /   /______ //   // "<<RESET<<BOLDCYAN<<"\t\t||\t"<<RESET<<BOLDBLUE<<"    \\___|      |___/   "<<RESET<<BOLDCYAN<<"\t\t||\t"<<RESET<<BOLDGREEN<<" ____  (____)        "<<RESET<<endl;
		cout<<BOLDYELLOW<<"        /___(_______(/__ //  "<<RESET<<BOLDCYAN<<"\t\t||\t"<<RESET<<BOLDBLUE<<"   /____ \\____/ ____\\ "<<RESET<<BOLDCYAN<<"\t\t||\t"<<RESET<<BOLDGREEN<<"     \\_(____)       "<<RESET<<endl;
		cout<<BOLDYELLOW<<"       (_______/(_______(/   "<<RESET<<BOLDCYAN<<"\t\t||\t"<<RESET<<BOLDBLUE<<"        /______\\       "<<RESET<<BOLDCYAN<<"\t\t||\t"<<RESET<<BOLDGREEN<<"                     "<<RESET<<endl;
		cout<<BOLDCYAN<<" _______________________________________||______________________________________||____________________________________"<<endl;
		cout<<"|_____________________________________________________________________________________________________________________|"<<RESET<<endl;
		cout<<BOLDCYAN<<"\t\t\t||"<<RESET<<BOLDMAGENTA<<"   4. Libro mas prestado"<<RESET<<BOLDCYAN<<"\t\t||"<<RESET<<BOLDRED<<"   5. Retroceder      "<<BOLDCYAN<<"\t\t||"<<endl;
		cout<<BOLDCYAN<<"\t\t\t||\t"<<RESET<<BOLDMAGENTA<<"     /_/ /_//_/|       "<<RESET<<BOLDCYAN<<"\t\t||\t\t"<<RESET<<BOLDRED<<" ______ "<<RESET<<BOLDCYAN<<"\t\t||\t\t"<<endl;
		cout<<BOLDCYAN<<"\t\t\t||\t"<<RESET<<BOLDMAGENTA<<"    |**|_| || ||      "<<RESET<<BOLDCYAN<<"\t\t||\t\t"<<RESET<<BOLDRED<<"| EXIT |"<<RESET<<BOLDCYAN<<"\t\t||\t\t"<<endl;
		cout<<BOLDCYAN<<"\t\t\t||\t"<<RESET<<BOLDMAGENTA<<"    |**|_| || ||     "<<RESET<<BOLDCYAN<<"\t\t||\t\t"<<RESET<<BOLDRED<<"|     o|"<<RESET<<BOLDCYAN<<"\t\t||\t\t"<<endl;
		cout<<BOLDCYAN<<"\t\t\t||\t"<<RESET<<BOLDMAGENTA<<"    |--| |=||=||      "<<RESET<<BOLDCYAN<<"\t\t||\t\t"<<RESET<<BOLDRED<<"|      |"<<RESET<<BOLDCYAN<<"\t\t||\t\t"<<endl;
		cout<<BOLDCYAN<<"\t\t\t||\t"<<RESET<<BOLDMAGENTA<<"    |  | | || ||      "<<RESET<<BOLDCYAN<<"\t\t||\t\t"<<RESET<<BOLDRED<<"|______|"<<RESET<<BOLDCYAN<<"\t\t||\t\t"<<endl;
		cout<<BOLDCYAN<<"\t\t\t||\t"<<RESET<<BOLDMAGENTA<<"    |__|_|_||_|/      "<<RESET<<BOLDCYAN<<"\t\t||\t\t"<<RESET<<BOLDRED<<"        "<<RESET<<BOLDCYAN<<"\t\t||\t\t"<<endl;
		cout<<BOLDCYAN<<" _______________________||______________________________________||______________________________________||____________"<<endl;
		cout<<"|______________________________________________________________________________________________________________________|"<<RESET<<endl;     
    	cout<<"\t\t\t\t\t\tSeleccione una opcion: ";
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
