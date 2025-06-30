#include <iostream>
#include "funciones.h"
#include <string>

using namespace std;

int main(){
	int opcion;
	do{
		cout<<"\n=== MENU ===\n";
		cout<<"1. Agregar libro\n";
		cout<<"2. Eliminar libro\n";
		cout<<"3. Mostrar lista general de libros\n";
		cout<<"4. Informacion del grupo\n";
		cout<<"5. Salir del programa\n";
		cout<<"Seleccione una opcion: \n";
		cin>>opcion;
		cin.ignore();
		switch(opcion){
			case 1:
				agregarLibro();
				break;
			case 2:
				eliminarLibro();
				break;
			case 3:
				mostrarLibros();
				break;
			case 4:
				infoGrupo();
				break;
			case 5: 
				cout<<"Saliendo..."<<endl; 
				break;
			default:
				cout<<"Opcion invalida"<<endl;
				break;
		}
	} while(opcion!=5);
	return 0;
}
