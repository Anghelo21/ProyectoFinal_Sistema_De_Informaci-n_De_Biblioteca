#include <iostream>
#include "funciones.h"
#include <string>
// Colores 
#define RESET       "\033[0m"
#define BLACK       "\033[30m"      
#define RED         "\033[31m"      
#define GREEN       "\033[32m"     
#define YELLOW      "\033[33m"     
#define BLUE        "\033[34m"      
#define MAGENTA     "\033[35m"     
#define CYAN        "\033[36m"     
#define WHITE       "\033[37m"      

// Colores Brillantes
#define BOLDBLACK   "\033[1m\033[30m"      
#define BOLDRED     "\033[1m\033[31m"      
#define BOLDGREEN   "\033[1m\033[32m"      
#define BOLDYELLOW  "\033[1m\033[33m"      
#define BOLDBLUE    "\033[1m\033[34m"     
#define BOLDMAGENTA "\033[1m\033[35m"      
#define BOLDCYAN    "\033[1m\033[36m"      
#define BOLDWHITE   "\033[1m\033[37m"      

// Colores para el fondo de las letras 
#define BG_BLACK    "\033[40m"
#define BG_RED      "\033[41m"
#define BG_GREEN    "\033[42m"
#define BG_YELLOW   "\033[43m"
#define BG_BLUE     "\033[44m"
#define BG_MAGENTA  "\033[45m"
#define BG_CYAN     "\033[46m"
#define BG_WHITE    "\033[47m"
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
				break;
			case 2:
				break;
			case 3:
				break;
			case 4:
				break;
			case 5:
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
