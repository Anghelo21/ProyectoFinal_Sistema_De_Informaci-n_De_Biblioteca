#include <iostream>
#include "funciones.h"
#include <string>

using namespace std;

int main(){
	int opcion;
	do{
		cout<<"                                           ________________________________                                            "<<endl;
		cout<<"                                  ________|             __                 |________                                   "<<endl;
		cout<<"      __     __   ____   ___      \\       |   |\\  /|   |__   |\\ |   |  |   |       /        ____    ____     _  __  "<<endl;
		cout<<"     |  |__ |**|_| || |_|   |      \\      |   | \\/ |   |__   | \\|   |__|   |      /       _|**|+|__|+|+||___| ||  | "<<endl;
		cout<<"     |==|^^||--| |=||=| |=*=|      /      |________________________________|      \\      | |==|-|  |=|=|| | | ||==|   "<<endl;
		cout<<"     |  |  ||  | | || | |   |     /__________)                          (__________\\     |-|  | |==| | ||-|-| ||__|   "<<endl;
		cout<<" ____|__|__||__|_|_||_|_|___|____________________________________________________________|_|__|_|__|_|_||_|_|_||__|____"<<endl;
		cout<<"|______________________________________________________________________________________________________________________|"<<endl;
		cout<<"                                        ||                                      ||"<<endl;
		cout<<"   1. Gestion de libros  \t\t||   2. Gestion de usuarios\t\t||   3. Gestion de prestamos"<<endl;
		cout<<"                ________     \t\t||\t     ____      ____     \t||\t       __  ______    "<<endl;
		cout<<"           ____/       //____\t\t||\t    /    \\____/    \\  \t\t||\t _____/ __) _____\\  "<<endl;
		cout<<"          /   /       //   //\t\t||\t   |     /    \\     |  \t\t||\t       (____)        "<<endl;
		cout<<"         /   /______ //   // \t\t||\t    \\___|      |___/   \t\t||\t ____  (____)        "<<endl;
		cout<<"        /___(_______(/__ //  \t\t||\t   /____ \\____/ ____\\ \t\t||\t     \\_(____)       "<<endl;
		cout<<"       (_______/(_______(/   \t\t||\t        /______\\       \t\t||\t                     "<<endl;
		cout<<" _______________________________________||______________________________________||____________________________________"<<endl;
		cout<<"|_____________________________________________________________________________________________________________________|"<<endl;
		cout<<"                                        ||                                      ||"<<endl;
		cout<<"   4. Administracion del sistema\t||   5. Informacion de los creadores\t||   6. Salir del programa"<<endl;
		cout<<"             _________       \t\t||\t        __________    \t\t||\t\t ______"<<endl;
		cout<<"            |.-------.|      \t\t||\t      _|          |   \t\t||\t\t| EXIT |"<<endl;
		cout<<"            ||       ||      \t\t||\t     | |   INFO   |   \t\t||\t\t|     o|"<<endl;
		cout<<"            ||       ||      \t\t||\t     | |______   _|   \t\t||\t\t|      |"<<endl;
		cout<<"            |'-------'|      \t\t||\t     |__  ____\\|     \t\t||\t\t|______|"<<endl;
		cout<<"               )___(         \t\t||\t        |/            \t\t||\t\t"<<endl;
		cout<<" _______________________________________||______________________________________||_____________________________________"<<endl;
		cout<<"|______________________________________________________________________________________________________________________|"<<endl;     
    	cout<<"\t\t\t\t\t\tSeleccione una opcion: ";
    	
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
				usuarioPrestamos();
				break;
			case 4:
				//ADMINISTRACION();
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
