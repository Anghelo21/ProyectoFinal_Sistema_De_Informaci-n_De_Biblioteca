#include "funciones.h"
#include <iostream>
#include <string>
using namespace std;

Libro biblioteca[max_libros] = {
    {1,"Don Quijote", "Cervantes", "Porrua", 1300, 1605, 4, false},
    {2,"Cien anios de soledad", "G. Garcia Marquez", "Alfaguara", 550, 1967, 3, false},
    {3,"El Principito", "Saint-Exupery", "Gran Travesia", 130, 1943, 4, false}
};

int cantLibros = 3;

void agregarLibro(){
	if(cantLibros<max_libros){
		Libro li;
		li.indic = cantLibros + 1;
		cout<<"Nombre del libro: ";
		getline(cin, li.titulo);
		cout<<"Autor del libro: ";
		getline(cin, li.autor);
		cout<<"Ingrese el editorial del libro";
		getline(cin, li.editorial);
		cout<<"Ingrese la cantidad de paginas del libro";
		cin>>li.NumPaginas;
		cout<<"Anio de publicacion: ";
		cin>>li.anio;
		cout<<"Cantidad de copias del libro";
		cin>>li.cantidad;
		cin.ignore();
		biblioteca[cantLibros] = li;
		cantLibros++;
		cout<<"Libro agregado exitosamente"<<endl;
	}else{
		cout<<"Limite de libros alcanzado no se puede agregar mas libros";	
	}
	system("pause");
}

void eliminarLibro(){
	if(cantLibros==0){
		cout<<"No hay libros agregados"<<endl;
	} else{
		int indice;
    	cout<<"Ingrese el indice del libro a eliminar (1 - "<<cantLibros<<"): ";
    	cin>>indice;
    	cin.ignore();
    	if(indice<1 || indice>cantLibros){
        	cout<<"Índice no válido"<<endl;
    	} else{
    		for(int i=indice-1; i<cantLibros-1; i++){
        		biblioteca[i]=biblioteca[i+1];
    		}
    		cantLibros--;
    		for (int i = 0; i < cantLibros; i++) {
            biblioteca[i].indic = i + 1;
            }
    		cout<<"Libro eliminado"<<endl;
		}
	}
	system("pause");
}

void mostrarLibros() {
    cout << "\nLISTADO DE LIBROS:\n";
    for (int i = 0; i < cantLibros; i++) {
    	cout << "\n----------------------------------------\n";
		cout << "           INFORME DEL LIBRO #" << i + 1 << endl;
		cout << "----------------------------------------\n";
		cout << "||Codigo del libro       : " << biblioteca[i].indic << endl;
		cout << "||Titulo                 : " << biblioteca[i].titulo << endl;
		cout << "||Autor                  : " << biblioteca[i].autor << endl;
		cout << "||Editorial              : " << biblioteca[i].editorial << endl;
		cout << "||Numero de paginas      : " << biblioteca[i].NumPaginas << endl;
		cout << "||Anio de publicacion    : " << biblioteca[i].anio << endl;
		cout << "||Cantidad de copias     : " << biblioteca[i].cantidad << endl;
		cout << "||Estado actual          : " 
     		 << (biblioteca[i].dispo ? "RENTADO" : "DISPONIBLE") << endl;
		cout << "----------------------------------------\n";
    }
	system("pause");
}
void BuscarLibro(){
	if(cantLibros==0){
		cout<<"No hay libros registrados"<<endl;
	}else{
		int Buscarlibro;
		cout<<"Ingrese el indice del libro a buscar"<<endl;
		cin>>Buscarlibro;
		cin.ignore();
		bool Encontrar = false;
		for(int i=0; i<cantLibros; i++){
			if(biblioteca[i].indic == Buscarlibro){
				cout << "\n----------------------------------------\n";
				cout << "           LIBRO ENCONTRADO" << endl;
				cout << "----------------------------------------\n";
				cout << "||Codigo del libro       : " << biblioteca[i].indic << endl;
				cout << "||Titulo                 : " << biblioteca[i].titulo << endl;
				cout << "||Autor                  : " << biblioteca[i].autor << endl;
				cout << "||Editorial              : " << biblioteca[i].editorial << endl;
				cout << "||Numero de paginas      : " << biblioteca[i].NumPaginas << endl;
				cout << "||Anio de publicacion    : " << biblioteca[i].anio << endl;
				cout << "||Cantidad de copias     : " << biblioteca[i].cantidad << endl;
				cout << "||Estado actual          : " 
		     		 << (biblioteca[i].dispo ? "RENTADO" : "DISPONIBLE") << endl;
				cout << "----------------------------------------\n";
				Encontrar=true;
			}
		}
		if(Encontrar==false){
			cout<<"Producto no encontrado"<<endl;
		}
	}
	system("pause");
}
void Actualizarlibro(){
	if(cantLibros==0){
		cout<<"No hay productos registrados"<<endl;
	}else{
		int Actualizarlibro;
		cout<<"Ingrese el nombre del producto a actualizar"<<endl;
		cin>>Actualizarlibro;
		cin.ignore();
		bool Actualizar=false;
		for(int i=0; i<cantLibros; i++){
			if(biblioteca[i].indic == Actualizarlibro){
				cout<<"Nuevo nombre del libro: ";
				getline(cin, biblioteca[i].titulo);
				cout<<"Autor del libro: ";
				getline(cin, biblioteca[i].autor);
				cout<<"Ingrese el editorial del libro";
				getline(cin, biblioteca[i].editorial);
				cout<<"Ingrese la cantidad de paginas del libro";
				cin>>biblioteca[i].NumPaginas;
				cout<<"Anio de publicacion: ";
				cin>>biblioteca[i].anio;
				cout<<"Cantidad de copias del libro";
				cin>>biblioteca[i].cantidad;
				Actualizar=true;
			}
		}
		if(Actualizar==false){
			cout<<"Producto no encontrado"<<endl;
		}
	}
	system("pause");
}
void gestionLibros(){
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
				mostrarLibros();
				break;
			case 4:
				BuscarLibro();
				break;
			case 5:
				Actualizarlibro();
				break;
			case 6: 
				cout<<"Regresando..."<<endl; 
				break;
			default:
				cout<<"Opcion invalida"<<endl;
				break;
		}
	} while(opcion!=6);
}
