#include <iostream>
#include "funciones.h"
#include <string>

using namespace std;

int main(){
	int opcion;
	do{
		cout<<"\t\t\t\t===================== MENU =====================\n";
		
    cout << "1. Agregar libro\t\t2. Eliminar libro\t\t3. Rentar libro\t\t4. Devolver libro" << endl;
    cout << "      ____\t\t\t\t  __    __" << endl;
    cout << "     |    |\t\t\t\t  \\ \\  / /" << endl;
    cout << "     |    |\t\t\t\t   \\ \\/ /" << endl;
    cout << " ____|    |____\t\t\t\t    \\  /" << endl;
    cout << " |             |\t\t\t    /  \\" << endl;
    cout << " |____    _____|\t\t\t   / /\\ \\" << endl;
    cout << "     |    |\t\t\t\t  / /  \\ \\" << endl;
    cout << "     |    |\t\t\t\t  --    --" << endl;
    cout << "     |____|" << endl<< endl;

    cout << "4. Mostrar lista general\t5. Informacion del grupo" << endl;
    cout << "      ________\t\t\t\t _________" << endl;
    cout << "     /_______/|\t\t\t\t/  _   _  \\" << endl;
    cout << "    /_______/||\t\t\t\t| (_) (_) |" << endl;
    cout << "   | _____ ||||\t\t\t\t \\_______/" << endl;
    cout << "   ||_____|||||\t\t\t\t (/     \\)" << endl;
    cout << "   |       ||||\t\t\t\t /       \\" << endl;
    cout << "   |       ||/\t\t\t\t(_________)" << endl;
    cout << "   '--------'" << endl << endl;

    cout << "6. Salir del programa" << endl;
    cout << "Seleccione una opcion: ";
    cin >> opcion;
		cin.ignore();
		switch(opcion){
			case 1:
				agregarLibro();
				break;
			case 2:
				eliminarLibro();
				break;
			case 3:
				alquilarLibro();
				break;
			case 4:
				
			case 5:
				mostrarLibros();
				break;
			case 6:
				infoGrupo();
				break;
			case 7: 
				cout<<"Saliendo..."<<endl; 
				break;
			default:
				cout<<"Opcion invalida"<<endl;
				break;
		}
	} while(opcion!=7);
	return 0;
}
