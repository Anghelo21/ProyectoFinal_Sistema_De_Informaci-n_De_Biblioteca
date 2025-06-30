// Para el proyecto
#include <iostream>
#include "funciones.h"
#include <string>

using namespace std;

int main(){
	int opcion;
	do{
		cout<<"\n=== MENU ===\n"<<endl;
		cout<<"1. Agregar libro"<<endl;
		cout<<"2. Eliminar libro"<<endl;
		cout<<"3. Mostrar lista general de libros\n"<<endl;
		cout<<"4. Mostrar libros ordenados por titulo\n";
		cout<<"5. Informacion del grupo"<<endl;
		cout<<"6. Salir del programa\n"<<endl;
		cout<<"Seleccione una opcion: "<<endl;
		cin>>opcion;
		cin.ignore();
		switch(opcion){
			case 1:
				agregarLibro();
				break;
			case 2:
				//eliminar();
				break;
			case 3:
				mostrarLibros();
				break;
			case 4:
				mostrarOrdenados();
				break;
			case 5: 
				infoGrupo(); 
				break;
			case 6:
				cout<<"Saliendo..."<<endl;
				break;
			default:
				cout<<"Opcion invalida"<<endl;
		}
	} while(opcion!=5);
	return 0;
}

