#include "funciones.h"
#include <iostream>
#include <string>
using namespace std;

Libro biblioteca[max_libros] = {
    {"Don Quijote de la Mancha", "Miguel de Cervantes", 1605},
    {"Cien anios de soledad", "Gabriel Garcia Marquez", 1967},
    {"El Principito", "Antoine de Saint-Exupery", 1943}
};
    
int cantLibros = 3;

void agregarLibro() {
	if(cantLibros<max_libros){
		Libro li;
		cout<<"Nombre del libro: ";
		getline(cin, li.titulo);
		cout<<"Autor del libro: ";
		getline(cin, li.autor);
		cout<<"Anio de publicacion: ";
		cin>>li.anio;
		cin.ignore();
		biblioteca[cantLibros] = li;
		cantLibros++;
		cout<<"Libro agregado exitosamente"<<endl;
	}else{
		cout<<"Limite de libros alcanzado no se puede agregar mas libros";	
	}
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
    		cout<<"Libro eliminado"<<endl;
		}
	}
}

void mostrarLibros() {
    cout << "\nLISTADO DE LIBROS:\n";
    for (int i = 0; i < cantLibros; i++) {
    	cout << "\nLibro #" << i + 1 << " :\n";
    	cout << "Titulo: " << biblioteca[i].titulo << endl;
        cout << "Autor: " << biblioteca[i].autor << endl;
        cout << "Fecha de publicacion: " << biblioteca[i].anio << endl;
        cout << "-----------------------------------"<<endl;
    }
}

void infoGrupo() {
    cout << "+==============================+" << endl;
	cout << "|    INFORMACION DEL GRUPO     |" << endl;
	cout << "+==============================+\n" << endl;
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
        	break;
    	case 2:
        	cout << " \nSosa se encargo de la muestra de datos:\n";
        	cout << "- Muestra de la lista de libros.\n";
        	cout << "- Aplicacion del algoritmo de muestra.\n";
        	cout << "- Integracion correcta de la funcion al menu principal.\n"<<endl;
        	break;
    	case 3:
        	cout << " \nDavid responsable de mejorar la presentacion de informacion al usuario:\n";
        	cout << "- Optimizacion de informacion del grupo y docente.\n";
        	cout << "- Mejoramiento de interfaz al usuario.\n"<<endl;
        	break;
		case 4:
        	cout << " \nSamuel fue responsable de:\n";
        	cout << "- Eliminacion de libros.\n";
        	cout << "- Incorporacion de libros al programa.\n"<<endl;
        	break;
    	default:
        	cout << " Error, no es una opcion valida.\n"<<endl;
        	break;
	}
}
