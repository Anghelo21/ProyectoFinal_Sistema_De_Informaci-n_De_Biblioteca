#include "funciones.h"
#include <iostream>
#include <string>
using namespace std;

void infoGrupo() {
    cout<<"\t\t\t ___    _  _    ___    ___     ___    __  __    ___     ___    ___     ___    _  _       "<<endl;
		cout<<"\t\t\t|_ _|  | \\| |  | __|  / _ \\   | _ \\  |  \\/  |  /   \\   / __|  |_ _|   / _ \\  | \\| |    "<<endl; 
		cout<<"\t\t\t | |   | .` |  | _|  | (_) |  |   /  | |\\/| |  | - |  | (__    | |   | (_) | | .` |     "<<endl;
		cout<<"\t\t\t|___|  |_|\\_|  |_|    \\___/   |_|_\\  |_|__|_|  |_|_|   \\___|  |___|   \\___/  |_|\\_|     "<<endl;   
		                                                    
		cout<<"\t\t\t___      ___      _       ___     ___      "<<endl;                                       
		cout<<"\t\t\t|   \\   | __|    | |     / _ \\   / __|    "<<endl;               
		cout<<"\t\t\t| |) |  | _|     | |__  | (_) |  \\__ \\    "<<endl;               
		cout<<"\t\t\t|___/   |___|    |____|  \\___/   |___/       "<<endl;                                                             
		cout<<"      __   ____ \t  ___     ___     ___     ___     ___     ___     ___     ___     ___  "<<endl;                                                             
		cout<<"     |**|_| || |_\t / __|   | _ \\   | __|   /   \\   |   \\   / _ \\   | _ \\   | __|   / __| "<<endl;                                                             
		cout<<"     |--| |=||=|\\\\\t| (__    |   /   | _|    | - |   | |) | | (_) |  |   /   | _|    \\__ \\  "<<endl;                                                             
		cout<<"     |  | | || | \\\\\t \\___|   |_|_\\   |___|   |_|_|   |___/   \\___/   |_|_\\   |___|   |___/  "<<endl;                                                             
		cout<<" ____|__|_|_||_|__\\\\___________________________________________________________________________________________________"<<endl;
		cout<<"|______________________________________________________________________________________________________________________|\n\n"<<endl;	
		cout<<"\t\t\t\t\t _____________________________________                         "<<endl;
		cout<<"                                ________|    __  __    ___    _  _    _   _   |________                            "<<endl;
		cout<<"      __     __   ____   ___    \\       |   |  \\/  |  | __|  | \\| |  | | | |  |       /     ____    ____     _  __  "<<endl;
		cout<<"     |  |__ |**|_| || |_|   |    \\      |   | |\\/| |  | _|   | .` |  | |_| |  |      /    _|**|+|__|+|+||___| ||  | "<<endl;
		cout<<"     |==|^^||--| |=||=| |=*=|    /      |___|_|__|_|__|___|__|_|\\_|___\\___/___|      \\   | |==|-|  |=|=|| | | ||==|   "<<endl;
		cout<<"     |  |  ||  | | || | |   |   /__________)                               (__________\\  |-|  | |==| | ||-|-| ||__|   "<<endl;
		cout<<" ____|__|__||__|_|_||_|_|___|____________________________________________________________|_|__|_|__|_|_||_|_|_||__|____"<<endl;
		cout<<"|______________________________________________________________________________________________________________________|\n\n"<<endl;
		
    cout << "Curso     : Fundamentos de Programacion\n";
    cout << "Practica  : 09 - Registros en C++\n";
    cout << "Docente  : Wilson Cesar Callisaya Choquecota\n";
    cout << "Numero del Grupo  : 03\n\n";
    cout << "Integrantes:\n";
    cout << " 1. Anghelo del Piero Calderon Morales\n";
    cout << " 2. Josue Adrian Sosa Cruz\n";
    cout << " 3. Rene David Charaña Jalire\n";
    cout << " 4. Samuel Alexander Gomez Salcedo\n";
    int aporte;
	cout << "Escoge un integrante para conocer sus contribuciones: ";
	cin >> aporte;
	switch(aporte) {
		case 1:
        	cout << " \nAnghelo lidero la estructura general del proyecto:\n";
        	cout << "- Creacion del menú principal\n";
        	cout << "- Organizacion del proyecto en modulos .h y .cpp\n"<<endl;
        	 system("pause");
        	break;
    	case 2:
        	cout << " \nSosa se encargo de la muestra de datos:\n";
        	cout << "- Muestra de la lista de libros.\n";
        	cout << "- Aplicacion del algoritmo de muestra.\n";
        	cout << "- Integracion correcta de la funcion al menu principal.\n"<<endl;
        	 system("pause");
        	break;
    	case 3:
        	cout << " \nDavid responsable de mejorar la presentacion de informacion al usuario:\n";
        	cout << "- Optimizacion de informacion del grupo y docente.\n";
        	cout << "- Mejoramiento de interfaz al usuario.\n"<<endl;
        	 system("pause");
        	break;
		case 4:
        	cout << " \nSamuel fue responsable de:\n";
        	cout << "- Eliminacion de libros.\n";
        	cout << "- Incorporacion de libros al programa.\n"<<endl;
        	 system("pause");
        	break;
    	default:
        	cout << " Error, no es una opcion valida.\n"<<endl;
        	 system("pause");
        	break;
	}
}
