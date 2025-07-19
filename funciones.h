#ifndef FUNCIONES_H
#define FUNCIONES_H
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
#include <string>
using namespace std;

const int max_libros = 100; 
const int max_usuarios = 100; // Límite de usuarios registrados
const int max_prestamos = 100;


struct Libro {
    int indic;
    string titulo;
    string autor;
    string editorial;
    int NumPaginas;
    int anio;
    int copias;
    int contPrestamos;
};
struct Prestamo {
    int idUsuario;
    int idLibro;
};


struct Usuario {
    int id; // Identificador del usuario
    string nombre; // Para el nombre del usuario
    int edad; // Para la edad del usuario
    string dni; // Para el DNI del usuario
};

extern Libro biblioteca[max_libros];
extern int cantLibros;

extern Usuario personas[max_usuarios];
extern int cantUsuarios;

extern Prestamo prestamos[max_prestamos];
extern int cantPrestamos;

void gestionLibros();
void gestionUsuarios();
void gestionPrestamos();
void reporteGeneral();
void infoGrupo();

#endif
