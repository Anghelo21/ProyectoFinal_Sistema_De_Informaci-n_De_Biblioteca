#include "funciones.h"
#include <iostream>
#include <string>
using namespace std;

const int max_usuarios = 100;
Usuario personas[max_usuarios]={
	{1, "Anghelo", 18, "12345678"},
	{2, "Samuel", 17, "87654321"}
};

int cantUsuarios = 2;

void agregarUsuario(){
	if (cantUsuarios<max_usuarios){
		Usuario user;
		user.id = cantUsuarios + 1;
		cout<<"Nombre del usuario:"<<endl;
		getline(cin, user.nombre);
		cout<<"Edad del usuario:"<<endl;
		cin>>user.edad;
		cin.ignore();
		cout<<"DNI del usuario:"<<endl;
		getline(cin, user.dni);
		personas[cantUsuarios] = user;
		cantUsuarios++;
		cout<<"Usuario agregado"<<endl;
	} else{
		cout<<"Limite de usuarios alcanzado, no se puede agregar mas usuarios";
	}
	system("pause");
}

void modificarUsuario(){
	int idUsuario;
	bool encontrado=false;
    cout<<"Ingrese el ID del usuario a modificar: ";
    cin>>idUsuario;
    cin.ignore();
    for (int i=0; i<cantUsuarios; i++){
        if (personas[i].id == idUsuario){
            encontrado=true;
            cout<<"Usuario encontrado: "<<endl; 
			cout<<"Nombre: "<<personas[i].nombre<<endl;
            cout<<"Edad: "<<personas[i].edad<<endl;
            cout<<"DNI: "<<personas[i].dni<<endl;
            cout<<"Ingrese el nuevo nombre del usuario: "<<endl;
            cout<<"Nuevo nombre: ";
			getline(cin, personas[i].nombre);
            cout<<"Ingrese la nueva edad del usuario: "<<endl;
            cout<<"Nueva edad: ";
            cin>>personas[i].edad;
            cin.ignore();
            cout<<"Ingrese el nuevo DNI del usuario: "<<endl;
            cout<<"Nuevo DNI: ";
            getline(cin, personas[i].dni);
            cout<<"Datos del usuario modificados"<<endl;
            break;
        }
    }
    if (!encontrado){
        cout<<"Usuario con ID "<<idUsuario<<" no encontrado"<<endl;
    }
    system("pause");
}

void eliminarUsuario(){
	int idUsuario;
	bool encontrado=false;
    cout<<"Ingrese el ID del usuario a eliminar: ";
    cin>>idUsuario;
    cin.ignore();
    for (int i=0; i<cantUsuarios; i++){
        if (personas[i].id == idUsuario){
            encontrado=true;
            cout<<"Usuario encontrado: "<<endl; 
			cout<<"Nombre: "<<personas[i].nombre<<endl;
            cout<<"Edad: "<<personas[i].edad<<endl;
            cout<<"DNI: "<<personas[i].dni<<endl;
            for (int j=i; j<cantUsuarios-1; j++){
                personas[j]=personas[j+1];
            }
            cantUsuarios--;
            cout<<"Usuario eliminado con exito"<<endl;
            break;
        }
    }
    if (!encontrado){
        cout<<"Usuario con ID "<<idUsuario<<" no encontrado."<<endl;
    }
    system("pause");
}

void verUsuarios(){
    if (cantUsuarios == 0){
        cout<<"No hay usuarios registrados."<<endl;
    } else{
        cout<<"========== Lista de Usuarios =========="<<endl;
        for (int i=0; i<cantUsuarios; i++){
            cout<<"ID: "<<personas[i].id<<endl;
            cout<<"Nombre: "<<personas[i].nombre<<endl;
            cout<<"Edad: "<<personas[i].edad<<endl;
            cout<<"DNI: "<<personas[i].dni<<endl;
            cout<<"----------------------------------------"<<endl;
        }
    }
    system("pause");
}

void gestionUsuarios(){
	int selec;
	do{
		cout<<"========== GESTION DE USUARIOS =========="<<endl;
		cout<<"1. Agregar nuevo usuario"<<endl;
		cout<<"2. Modificar datos del usuario"<<endl;
		cout<<"3. Eliminar usuario"<<endl;
		cout<<"4. Ver todos los usuarios"<<endl;
		cout<<"5. Retroceder"<<endl;
		cout<<"Seleccione una opcion: ";
		cin>>selec;
		cin.ignore();
		switch(selec){
			case 1:
				agregarUsuario();
				break;
			case 2:
				modificarUsuario();
				break;
			case 3:
				eliminarUsuario();
				break;
			case 4:
				verUsuarios();
				break;
			case 5:
				cout<<"Restrocediendo..."<<endl;
				break;
			default:
				cout<<"Opcion invalida"<<endl;
				break;
		}
	} while(selec!=5);
}
