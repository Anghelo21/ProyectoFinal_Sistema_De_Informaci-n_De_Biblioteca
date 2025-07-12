#include <iostream>
#include "funciones.h"
#include <string>

using namespace std;

int main(){
	int opcion;
	do{
		cout<<"========== MENU =========="<<endl;
		cout<<"1. Gestion de libros"<<endl;
		cout<<"2. Gestion de usuarios"<<endl;
		cout<<"3. Gestion de prestamos"<<endl;
		cout<<"4. Administracion del sistema"<<endl;
		cout<<"5. Informacion de los creadores"<<endl;
    	cout<<"6. Salir del programa"<<endl;
    	cout<<"Seleccione una opcion: ";
    	cin>>opcion;
		cin.ignore();
		switch(opcion){
			case 1:
				gestionLibros();
				break;
			case 2:
				gestionUsuarios();
				break;
			case 3:
				//gestionPrestamos();
				break;
			case 4:
				//adminSis();
				break;
			case 5:
				infoGrupo();
				break;
			case 6: 
				cout<<"Saliendo..."<<endl; 
				break;
			default:
				cout<<"Opcion invalida"<<endl;
				break;
		}
	} while(opcion!=6);
	return 0;
}
