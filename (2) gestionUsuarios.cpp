#include "funciones.h"
#include <iostream>
#include <string>

using namespace std;

Usuario personas[max_usuarios] = {
    {1, "Anghelo", 18, "12345678"},
    {2, "Samuel", 17, "87654321"},
    {3, "Sosa", 18, "82746129"},
    {4, "David", 20, "61283765"}
};

int idMaxUsuarios = 4;
int cantUsuarios = 4;

void agregarUsuario(){
	if (cantUsuarios<max_usuarios){
		Usuario user;
		user.id = idMaxUsuarios + 1;
		cout<<"Nombre del usuario:"<<endl;
		getline(cin, user.nombre);
		cout<<"Edad del usuario:"<<endl;
		cin>>user.edad;
		cin.ignore(); // Limpia el b�fer
		cout<<"DNI del usuario:"<<endl;
		getline(cin, user.dni);
		personas[cantUsuarios] = user;
		cantUsuarios++;
		cout<<"Usuario agregado"<<endl;
	} else{
		cout<<"Limite de usuarios alcanzado, no se puede agregar mas usuarios";
	}
	system("pause"); // Para que el sistema se pause hasta que el usuario presione "enter"
}

void modificarUsuario(){
	int idUsuario;
	bool encontrado=false;
    cout<<"Ingrese el ID del usuario a modificar: ";
    cin>>idUsuario;
    cin.ignore();
    for (int i=0; i<cantUsuarios; i++){ // Itera hasta encontrar el ID del usuario
        if (personas[i].id == idUsuario){
            encontrado=true; // Si lo encuentra muestra los datos y los vuelve a solicitar
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
    if (!encontrado){ // En caso de no haber encontrado el ID
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
    for (int i=0; i<cantUsuarios; i++){ // Itera hasta encontrar al usuario
        if (personas[i].id == idUsuario){ 
            encontrado=true;              
            cout<<"Usuario encontrado: "<<endl; 
			cout<<"Nombre: "<<personas[i].nombre<<endl;
            cout<<"Edad: "<<personas[i].edad<<endl;
            cout<<"DNI: "<<personas[i].dni<<endl;
            for (int j=i; j<cantUsuarios-1; j++){ // Si lo encuentra reemplaza la posici�n en el arreglo del usuario a eliminar
                personas[j]=personas[j+1];        // y lo reemplaza con el siguiente
            }
            cantUsuarios--; // Disminuye la cantidad de usuarios
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
        for (int i=0; i<cantUsuarios; i++){ // Muestra en pantalla a todos los usuarios registrados con sus datos
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
	int selec; // Variable para la elecci�n de las opciones
	do{ // Dise�o del submen�
		cout<<BOLDBLUE<<"\t\t\t   ___     ___     ___    _____    ___     ___    _  _  "<<endl;                 
		cout<<"\t\t\t  / __|   | __|   / __|  |_   _|  |_ _|   / _ \\  | \\| |  "<<endl;                
		cout<<"\t\t\t | (_ |   | _|    \\__ \\    | |     | |   | (_) | | .` |  "<<endl;                
		cout<<"\t\t\t  \\___|   |___|   |___/    |_|    |___|   \\___/  |_|\\_|  "<<endl;                               
		cout<<"      __   ____           ___     ___       _   _    ___    _   _    ___     ___     ___     ___     ___  "<<endl; 
		cout<<"     |**|_| || |_        |   \\   | __|     | | | |  / __|  | | | |  /   \\   | _ \\   |_ _|   / _ \\   / __|"<<endl;
		cout<<"     |--| |=||=|\\\\       | |) |  | _|      | |_| |  \\__ \\  | |_| |  | - |   |   /    | |   | (_) |  \\__ \\ "<<endl;
		cout<<"     |  | | || | \\\\      |___/   |___|      \\___/   |___/   \\___/   |_|_|   |_|_\\   |___|   \\___/   |___/ "<<endl;
		cout<<" ____|__|_|_||_|__\\\\___________________________________________________________________________________________________"<<endl;
		cout<<"|______________________________________________________________________________________________________________________|"<<RESET<<endl;
		cout<<BOLDYELLOW<<"   1. Agregar nuevo usuario"<<RESET<<BOLDBLUE<<"\t\t||"<<RESET<<BOLDCYAN<<"  2. Ver todos los usuarios"<<RESET<<BOLDBLUE<<"\t\t||"<<RESET<<BOLDGREEN<<"   3. Eliminar usuario"<<RESET<<endl;
		cout<<BOLDYELLOW<<"                ________     "<<RESET<<BOLDBLUE<<"\t\t||\t"<<RESET<<BOLDCYAN<<"     ____      ____     "<<RESET<<BOLDBLUE<<"\t||\t"<<RESET<<BOLDGREEN<<"       ___  ___     "<<RESET<<endl;
		cout<<BOLDYELLOW<<"              /  _   _  \\   "<<RESET<<BOLDBLUE<<"\t\t||\t"<<RESET<<BOLDCYAN<<"    /    \\____/    \\  "<<RESET<<BOLDBLUE<<"\t\t||\t"<<RESET<<BOLDGREEN<<"       \\  \\/  /    "<<RESET<<endl;
		cout<<BOLDYELLOW<<"              | (_) (_) |    "<<RESET<<BOLDBLUE<<"\t\t||\t"<<RESET<<BOLDCYAN<<"   |     /    \\     |  "<<RESET<<BOLDBLUE<<"\t\t||\t"<<RESET<<BOLDGREEN<<"        \\    /      "<<RESET<<endl;
		cout<<BOLDYELLOW<<"              \\_________/   "<<RESET<<BOLDBLUE<<"\t\t||\t"<<RESET<<BOLDCYAN<<"    \\___|      |___/   "<<RESET<<BOLDBLUE<<"\t\t||\t"<<RESET<<BOLDGREEN<<"        /    \\      "<<RESET<<endl;
		cout<<BOLDYELLOW<<"               (/     \\)    "<<RESET<<BOLDBLUE<<"\t\t||\t"<<RESET<<BOLDCYAN<<"   /____ \\____/ ____\\ "<<RESET<<BOLDBLUE<<"\t\t||\t"<<RESET<<BOLDGREEN<<"       /  /\\  \\    "<<RESET<<endl;
		cout<<BOLDYELLOW<<"               /_______\\    "<<RESET<<BOLDBLUE<<"\t\t||\t"<<RESET<<BOLDCYAN<<"        /______\\       "<<RESET<<BOLDBLUE<<"\t\t||\t"<<RESET<<BOLDGREEN<<"      /__/  \\__\\   "<<RESET<<endl;
		cout<<BOLDBLUE<<" _______________________________________||______________________________________||____________________________________"<<endl;
		cout<<"|_____________________________________________________________________________________________________________________|"<<RESET<<endl;
		cout<<BOLDBLUE<<"\t\t\t||"<<RESET<<BOLDMAGENTA<<"   4. Modificar datos del usuario"<<RESET<<BOLDBLUE<<"\t||"<<RESET<<BOLDRED<<"   5. Retroceder      "<<BOLDBLUE<<"\t\t||"<<endl;
		cout<<BOLDBLUE<<"\t\t\t||\t"<<RESET<<BOLDMAGENTA<<"           __         "<<RESET<<BOLDBLUE<<"\t\t||\t\t"<<RESET<<BOLDRED<<" ______ "<<RESET<<BOLDBLUE<<"\t\t||\t\t"<<endl;
		cout<<BOLDBLUE<<"\t\t\t||\t"<<RESET<<BOLDMAGENTA<<"          / /   /|     "<<RESET<<BOLDBLUE<<"\t\t||\t\t"<<RESET<<BOLDRED<<"| EXIT |"<<RESET<<BOLDBLUE<<"\t\t||\t\t"<<endl;
		cout<<BOLDBLUE<<"\t\t\t||\t"<<RESET<<BOLDMAGENTA<<"         |  \\__/ |    "<<RESET<<BOLDBLUE<<"\t\t||\t\t"<<RESET<<BOLDRED<<"|     o|"<<RESET<<BOLDBLUE<<"\t\t||\t\t"<<endl;
		cout<<BOLDBLUE<<"\t\t\t||\t"<<RESET<<BOLDMAGENTA<<"          \\   __/     "<<RESET<<BOLDBLUE<<"\t\t||\t\t"<<RESET<<BOLDRED<<"|      |"<<RESET<<BOLDBLUE<<"\t\t||\t\t"<<endl;
		cout<<BOLDBLUE<<"\t\t\t||\t"<<RESET<<BOLDMAGENTA<<"          /  /        "<<RESET<<BOLDBLUE<<"\t\t||\t\t"<<RESET<<BOLDRED<<"|______|"<<RESET<<BOLDBLUE<<"\t\t||\t\t"<<endl;
		cout<<BOLDBLUE<<"\t\t\t||\t"<<RESET<<BOLDMAGENTA<<"         /__/         "<<RESET<<BOLDBLUE<<"\t\t||\t\t"<<RESET<<BOLDRED<<"        "<<RESET<<BOLDBLUE<<"\t\t||\t\t"<<endl;
		cout<<BOLDBLUE<<" _______________________||______________________________________||______________________________________||____________"<<endl;
		cout<<"|______________________________________________________________________________________________________________________|"<<RESET<<endl;     
    	cout<<"\t\t\t\t\t\tSeleccione una opcion: ";
		cin>>selec; 
		cin.ignore();
		switch(selec){
			case 1:
				agregarUsuario();
				system("cls");
				break;
			case 2:
				verUsuarios();
				system("cls");
				break;
			case 3:
				eliminarUsuario();
				system("cls");
				break;
			case 4:
				modificarUsuario();
				system("cls");
				break;
			case 5:
				system("cls");
				cout<<"Restrocediendo..."<<endl;
				break;
			default:
				cout<<"Opcion invalida"<<endl;
				break;
		}
	} while(selec!=5);
}
