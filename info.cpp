#include <iostream>
using namespace std;

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
    cout << " 3. Rene David Chara�a Jalire\n";
    cout << " 4. Samuel Alexander Gomez Salcedo\n";
    cout << " 5. Volver al men� anterior\n";
    int aporte;
cout << "Escoge un integrante para conocer sus contribuciones: ";
cin >> aporte;


switch(aporte) {
	case 1:
        cout << " \nAnghelo lidero la estructura general del proyecto:\n";
        cout << "- Creacion del men� principal\n";
        cout << "- Organizacion del proyecto en modulos .h y .cpp\n"<<endl;
        break;

    case 2:
        cout << " \nSosa se encargo de la organizaci�n de datos:\n";
        cout << "- Ordenamiento de libros alfabeticamente por t�tulo.\n";
        cout << "- Aplicacion del algoritmo burbuja.\n";
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
    case 5:
        cout << " Retornando al menu anterior...\n"<<endl;
        break;
    default:
        cout << " Error, no es una opcion valida.\n"<<endl;
}

}

