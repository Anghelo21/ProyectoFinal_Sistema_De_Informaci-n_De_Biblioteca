#include "funciones.h"
#include <iostream>
#include <string>

using namespace std;

Libro biblioteca[max_libros] = {
    {1,"Don Quijote", "Cervantes", "Porrua", 1300, 1605, 0, false},
    {2,"Cien anios de soledad", "G. Garcia Marquez", "Alfaguara", 550, 1967, 0, false},
    {3,"El Principito", "Saint-Exupery", "Gran Travesia", 130, 1943, 0, false}
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
		cout<<"Ingrese el editorial del libro: ";
		getline(cin, li.editorial);
		cout<<"Ingrese la cantidad de paginas del libro: ";
		cin>>li.NumPaginas;
		cout<<"Anio de publicacion: ";
		cin>>li.anio;
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
		cout<<"Ingrese el indice del producto a actualizar"<<endl;
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
				cin.ignore();
				cout<<"Anio de publicacion: ";
				cin>>biblioteca[i].anio;
				cin.ignore();
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
		cout<<BOLDYELLOW<<"\t\t\t   ___     ___     ___    _____    ___     ___    _  _          "<<endl;           
		cout<<"\t\t\t  / __|   | __|   / __|  |_   _|  |_ _|   / _ \\  | \\| |         "<<endl;           
		cout<<"\t\t\t | (_ |   | _|    \\__ \\    | |     | |   | (_) | | .` |         "<<endl;           
		cout<<"\t\t\t  \\___|   |___|   |___/    |_|    |___|   \\___/  |_|\\_|         "<<endl;           
	    cout<<"      __   ____ \t  ___     ___      _       ___     ___     ___     ___     ___  "<<endl;  
		cout<<"     |**|_| || |_\t |   \\   | __|    | |     |_ _|   | _ )   | _ \\   / _ \\   / __| "<<endl;  
		cout<<"     |--| |=||=|\\\\\t | |) |  | _|     | |__    | |    | _ \\   |   /  | (_) |  \\__ \\ "<<endl;  
		cout<<"     |  | | || | \\\\\t |___/   |___|    |____|  |___|   |___/   |_|_\\   \\___/   |___/ "<<endl;  
	 	cout<<" ____|__|_|_||_|__\\\\___________________________________________________________________________________________________"<<endl;
		cout<<"|______________________________________________________________________________________________________________________|"<<RESET<<endl;
		
cout<<BOLDBLUE<<"   1. Agregar libros    "<<RESET<<BOLDYELLOW<<"\t\t||"<<RESET<<BOLDWHITE<<"   2. Eliminar libros  "<<RESET<<BOLDYELLOW<<"\t\t||"<<RESET<<BOLDGREEN<<"  3. Mostrar lista general"<<RESET<<endl;
		cout<<BOLDBLUE<<"           __           "<<RESET<<BOLDYELLOW<<"\t\t||\t"<<RESET<<BOLDWHITE<<"          ___  ___      "<<RESET<<BOLDYELLOW<<"\t||\t"<<RESET<<BOLDGREEN<<"      ________        "<<RESET<<endl;
		cout<<BOLDBLUE<<"          |  |          "<<RESET<<BOLDYELLOW<<"\t\t||\t"<<RESET<<BOLDWHITE<<"          \\  \\/  /     "<<RESET<<BOLDYELLOW<<"\t\t||\t"<<RESET<<BOLDGREEN<<"    /_______/|       "<<RESET<<endl;
		cout<<BOLDBLUE<<"      ____|  |____      "<<RESET<<BOLDYELLOW<<"\t\t||\t"<<RESET<<BOLDWHITE<<"           \\    /      "<<RESET<<BOLDYELLOW<<"\t\t||\t"<<RESET<<BOLDGREEN<<"   | _____ |||       "<<RESET<<endl;
		cout<<BOLDBLUE<<"     |____    ____|     "<<RESET<<BOLDYELLOW<<"\t\t||\t"<<RESET<<BOLDWHITE<<"           /    \\      "<<RESET<<BOLDYELLOW<<"\t\t||\t"<<RESET<<BOLDGREEN<<"   ||_____||||       "<<RESET<<endl;
		cout<<BOLDBLUE<<"          |  |          "<<RESET<<BOLDYELLOW<<"\t\t||\t"<<RESET<<BOLDWHITE<<"          /  /\\  \\     "<<RESET<<BOLDYELLOW<<"\t\t||\t"<<RESET<<BOLDGREEN<<"   |       |||       "<<RESET<<endl;
		cout<<BOLDBLUE<<"          |__|          "<<RESET<<BOLDYELLOW<<"\t\t||\t"<<RESET<<BOLDWHITE<<"         /__/  \\__\\    "<<RESET<<BOLDYELLOW<<"\t\t||\t"<<RESET<<BOLDGREEN<<"   |_______|||       "<<RESET<<endl;
		cout<<BOLDYELLOW<<" _______________________________________||______________________________________||____________________________________"<<endl;
		cout<<"|_____________________________________________________________________________________________________________________|"<<RESET<<endl;
		cout<<BOLDCYAN<<"   4. Buscar libro           "<<RESET<<BOLDYELLOW<<"\t\t||"<<RESET<<BOLDMAGENTA<<"         5. Actualizar libro    "<<RESET<<BOLDYELLOW<<"\t||"<<RESET<<BOLDRED<<"   6. Retroceder       "<<endl;
		cout<<BOLDCYAN<<"             _______         "<<RESET<<BOLDYELLOW<<"\t\t||\t"<<RESET<<BOLDMAGENTA<<"          ______      "<<RESET<<BOLDYELLOW<<"\t\t||\t\t"<<RESET<<BOLDRED<<" ______"<<RESET<<endl;
		cout<<BOLDCYAN<<"            //     \\\\      "<<RESET<<BOLDYELLOW<<"\t\t||\t"<<RESET<<BOLDMAGENTA<<"      /\\       \\\\  "<<RESET<<BOLDYELLOW<<"\t\t||\t\t"<<RESET<<BOLDRED<<"| EXIT |"<<RESET<<endl;
		cout<<BOLDCYAN<<"           ||       ||       "<<RESET<<BOLDYELLOW<<"\t\t||\t"<<RESET<<BOLDMAGENTA<<"     /  \\       \\\\ "<<RESET<<BOLDYELLOW<<"\t\t||\t\t"<<RESET<<BOLDRED<<"|     o|"<<RESET<<endl;
		cout<<BOLDCYAN<<"            \\\\_____//      "<<RESET<<BOLDYELLOW<<"\t\t||\t"<<RESET<<BOLDMAGENTA<<"      ||         ||   "<<RESET<<BOLDYELLOW<<"\t\t||\t\t"<<RESET<<BOLDRED<<"|      |"<<RESET<<endl;
		cout<<BOLDCYAN<<"            /  /             "<<RESET<<BOLDYELLOW<<"\t\t||\t"<<RESET<<BOLDMAGENTA<<"      \\\\         // "<<RESET<<BOLDYELLOW<<"\t\t||\t\t"<<RESET<<BOLDRED<<"|______|"<<RESET<<endl;
		cout<<BOLDCYAN<<"           /__/              "<<RESET<<BOLDYELLOW<<"\t\t||\t"<<RESET<<BOLDMAGENTA<<"       \\\\_______//  "<<RESET<<BOLDYELLOW<<"\t\t||\t\t"<<RESET<<endl;
		cout<<BOLDYELLOW<<" _______________________________________||______________________________________||_____________________________________"<<endl;
		cout<<"|______________________________________________________________________________________________________________________|"<<RESET<<endl;     
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
