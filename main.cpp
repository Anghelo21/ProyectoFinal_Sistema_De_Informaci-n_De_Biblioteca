// Para el proyecto
#include <iostream>
#include <string>
#include <funciones.h>
using namespace std;

struct contactoEmail{
	string libro, autor, editorial;
	int anio;
};

int main(){
	int opcion;
	do{
		cout<<" --- Menu --- "<<endl;
		cout<<"1. Agregar libro"<<endl;
		cout<<"2. Eliminar libro"<<endl;
		cout<<"3. Mostrar lista general de libros"<<endl;
		cout<<"4. Salir del programa"<<endl;
		cout<<"Seleccione una opcion"<<endl;
		cin>>opcion;
		cin.ignore();
		switch(opcion){
			case 1:
				//agregar();
				break;
			case 2:
				//eliminar();
				break;
			case 3:
				//mostrar();
				break;
			case 4:
				cout<<"Saliendo..."<<endl;
				break;
			default:
				cout<<"Opcion invalida"<<endl;
		}
	} while(opcion!=4);
	return 0;
}

