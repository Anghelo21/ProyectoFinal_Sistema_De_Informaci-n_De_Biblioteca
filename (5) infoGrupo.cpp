#include "funciones.h"
#include <iostream>
#include <string>

using namespace std;

void infoGrupo() {
	int aporte;
	do{
    	cout<<BOLDWHITE<<"\t\t\t ___    _  _    ___    ___     ___    __  __    ___     ___    ___     ___    _  _       "<<endl;
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
		cout<<"|______________________________________________________________________________________________________________________|\n\n\n"<<RESET<<endl; 
    cout << "||  Curso     \t\t: \t\tFundamentos de Programacion\n";
    cout << "||  Docente  \t\t: "<<BOLDCYAN<<"\t\tWilson Cesar Callisaya Choquecota\n"<<RESET;
    cout << "||  Numero del Grupo \t: \t\t03\n\n";
    cout << "\t\t\t\t\t\t\tINTEGRANTES:\n\n\n";
    cout << " 1. Anghelo del Piero Calderon Morales"<<BOLDYELLOW<<"\t||2025-119049\n"<<RESET;
    cout << " 2. Josue Adrian Sosa Cruz"<<BOLDYELLOW<<  "\t\t||2025-119057\n"<<RESET;
    cout << " 3. Rene David Charana Jalire"<<BOLDYELLOW<<  "\t\t||2025-119017\n"<<RESET;
    cout << " 4. Samuel Alexander Gomez Salcedo"<<BOLDYELLOW<< "\t||2025-119052\n"<<RESET;
    cout << " 5. Volver al Menu Principal\n";
	cout << "\t\t\t\tEscoge un integrante para conocer sus contribuciones: ";
	cin >> aporte;
	switch(aporte) {
		case 1:
        	cout << " \n\t\t\t\t|| Anghelo lidero la estructura general del proyecto ||\n\n";
        	cout << "|| Creacion del menu principal\n\n";
        	cout << "|| Organizacion del proyecto en modulos .h y .cpp\n\n"<<endl;
        	 system("pause");
        	break;
    	case 2:
        	cout << " \n\t\t\t\t|| Sosa se encargo de la muestra de datos ||\n\n";
        	cout << "|| Muestra de la lista de libros.\n\n";
        	cout << "|| Aplicacion del algoritmo de muestra.\n\n";
        	cout << "|| Integracion correcta de la funcion al menu principal.\n\n"<<endl;
        	 system("pause");
        	break;
    	case 3:
        	cout << " \n\t\t\t\t|| David responsable de mejorar la presentacion de informacion al usuario ||\n\n";
        	cout << "|| Optimizacion de informacion del grupo y docente.\n\n";
        	cout << "|| Mejoramiento de interfaz al usuario.\n\n"<<endl;
        	 system("pause");
        	break;
		case 4:
        	cout << " \n\t\t\t\t|| Samuel fue responsable de ||\n\n";
        	cout << "|| Eliminacion de libros.\n\n";
        	cout << "|| Incorporacion de libros al programa.\n\n"<<endl;
        	 system("pause");
        	break;
        case 5:
        	cout<<"Restrocediendo..."<<endl;
        	break;
    	default:
        	cout << " Error, no es una opcion valida.\n"<<endl;
        	 system("pause");
        	break;
	}
	} while(aporte!=5);
}
