#include "funciones.h"
#include <iostream>
#include <string>

using namespace std;

int main(){
	int opcion;
	do{
		cout<<BOLDWHITE<<"                                         _____________________________________                         "<<endl;
		cout<<"                                ________|    __  __    ___    _  _    _   _   |________                            "<<endl;
		cout<<"      __     __   ____   ___    \\       |   |  \\/  |  | __|  | \\| |  | | | |  |       /     ____    ____     _  __  "<<endl;
		cout<<"     |  |__ |**|_| || |_|   |    \\      |   | |\\/| |  | _|   | .` |  | |_| |  |      /    _|**|+|__|+|+||___| ||  | "<<endl;
		cout<<"     |==|^^||--| |=||=| |=*=|    /      |___|_|__|_|__|___|__|_|\\_|___\\___/___|      \\   | |==|-|  |=|=|| | | ||==|   "<<endl;
		cout<<"     |  |  ||  | | || | |   |   /__________)                               (__________\\  |-|  | |==| | ||-|-| ||__|   "<<endl;
		cout<<" ____|__|__||__|_|_||_|_|___|____________________________________________________________|_|__|_|__|_|_||_|_|_||__|____"<<endl;
		cout<<"|______________________________________________________________________________________________________________________|"<<endl;
		cout<<"                                        ||                                      ||"<<RESET<<endl;
		cout<<BOLDYELLOW<<"   1. Gestion de libros  "<<RESET<<BOLDWHITE<<"\t\t||"<<RESET<<BOLDBLUE<<"   2. Gestion de usuarios"<<RESET<<BOLDWHITE<<"\t\t||"<<RESET<<BOLDGREEN<<"   3. Gestion de prestamos"<<RESET<<endl;
		cout<<BOLDYELLOW<<"                ________     "<<RESET<<BOLDWHITE<<"\t\t||\t"<<RESET<<BOLDBLUE<<"     ____      ____     "<<RESET<<BOLDWHITE<<"\t||\t"<<RESET<<BOLDGREEN<<"       __  ______    "<<RESET<<endl;
		cout<<BOLDYELLOW<<"           ____/       //____"<<RESET<<BOLDWHITE<<"\t\t||\t"<<RESET<<BOLDBLUE<<"    /    \\____/    \\  "<<RESET<<BOLDWHITE<<"\t\t||\t"<<RESET<<BOLDGREEN<<" _____/ __) _____\\  "<<RESET<<endl;
		cout<<BOLDYELLOW<<"          /   /       //   //"<<RESET<<BOLDWHITE<<"\t\t||\t"<<RESET<<BOLDBLUE<<"   |     /    \\     |  "<<RESET<<BOLDWHITE<<"\t\t||\t"<<RESET<<BOLDGREEN<<"       (____)        "<<RESET<<endl;
		cout<<BOLDYELLOW<<"         /   /______ //   // "<<RESET<<BOLDWHITE<<"\t\t||\t"<<RESET<<BOLDBLUE<<"    \\___|      |___/   "<<RESET<<BOLDWHITE<<"\t\t||\t"<<RESET<<BOLDGREEN<<" ____  (____)        "<<RESET<<endl;
		cout<<BOLDYELLOW<<"        /___(_______(/__ //  "<<RESET<<BOLDWHITE<<"\t\t||\t"<<RESET<<BOLDBLUE<<"   /____ \\____/ ____\\ "<<RESET<<BOLDWHITE<<"\t\t||\t"<<RESET<<BOLDGREEN<<"     \\_(____)       "<<RESET<<endl;
		cout<<BOLDYELLOW<<"       (_______/(_______(/   "<<RESET<<BOLDWHITE<<"\t\t||\t"<<RESET<<BOLDBLUE<<"        /______\\       "<<RESET<<BOLDWHITE<<"\t\t||\t"<<RESET<<BOLDGREEN<<"                     "<<RESET<<endl;
		cout<<BOLDWHITE<<" _______________________________________||______________________________________||____________________________________"<<endl;
		cout<<"|_____________________________________________________________________________________________________________________|"<<endl;
		cout<<"                                        ||                                      ||"<<RESET<<endl;
		cout<<BOLDCYAN<<"   4. Reporte General        "<<RESET<<BOLDWHITE<<"\t\t||"<<RESET<<BOLDMAGENTA<<"   5. Informacion de los creadores"<<RESET<<BOLDWHITE<<"\t||"<<RESET<<BOLDRED<<"   6. Salir del programa"<<endl;
		cout<<BOLDCYAN<<"             _________       "<<RESET<<BOLDWHITE<<"\t\t||\t"<<RESET<<BOLDMAGENTA<<"        __________    "<<RESET<<BOLDWHITE<<"\t\t||\t\t"<<RESET<<BOLDRED<<" ______"<<RESET<<endl;
		cout<<BOLDCYAN<<"            |.-------.|      "<<RESET<<BOLDWHITE<<"\t\t||\t"<<RESET<<BOLDMAGENTA<<"      _|          |   "<<RESET<<BOLDWHITE<<"\t\t||\t\t"<<RESET<<BOLDRED<<"| EXIT |"<<RESET<<endl;
		cout<<BOLDCYAN<<"            ||       ||      "<<RESET<<BOLDWHITE<<"\t\t||\t"<<RESET<<BOLDMAGENTA<<"     | |   INFO   |   "<<RESET<<BOLDWHITE<<"\t\t||\t\t"<<RESET<<BOLDRED<<"|     o|"<<RESET<<endl;
		cout<<BOLDCYAN<<"            ||       ||      "<<RESET<<BOLDWHITE<<"\t\t||\t"<<RESET<<BOLDMAGENTA<<"     | |______   _|   "<<RESET<<BOLDWHITE<<"\t\t||\t\t"<<RESET<<BOLDRED<<"|      |"<<RESET<<endl;
		cout<<BOLDCYAN<<"            |'-------'|      "<<RESET<<BOLDWHITE<<"\t\t||\t"<<RESET<<BOLDMAGENTA<<"     |__  ____\\|     "<<RESET<<BOLDWHITE<<"\t\t||\t\t"<<RESET<<BOLDRED<<"|______|"<<RESET<<endl;
		cout<<BOLDCYAN<<"               )___(         "<<RESET<<BOLDWHITE<<"\t\t||\t"<<RESET<<BOLDMAGENTA<<"        |/            "<<RESET<<BOLDWHITE<<"\t\t||\t\t"<<RESET<<endl;
		cout<<BOLDWHITE<<" _______________________________________||______________________________________||_____________________________________"<<endl;
		cout<<"|______________________________________________________________________________________________________________________|"<<RESET<<endl;     
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
				gestionPrestamos();
				break;
			case 4:
				reporteGeneral();
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
