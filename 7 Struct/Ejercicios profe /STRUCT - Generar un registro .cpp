// Programa que DEFINE una Estructura de datos (STRUCT): a la que llama Persona
// Carga los datos de una variable de TIPO Persona
// Informa los datos cargados en los CAMPOS de esa variable
 
#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <iomanip>
using namespace std;  // le estamos diciendo al compilador que usaremos el espacio de nombres std

// // Define la estructura del registro
struct Persona {
	string nombre;
	int edad;
	float altura;
	};

        
int main(void) {
	
// Declara DOS variables de tipo struct Persona
Persona persona1, persona2;	

// Carga los datos del registro
persona1.nombre = "Analia"; 
persona1.edad = 19; 
persona1.altura = 1.68; 

// imprime los datos de cada campo del registro
cout << "El nombre es: " << persona1.nombre << endl;
cout << "La edad es: " << persona1.edad << endl;
cout << "La altura es: " << persona1.altura << endl << endl;


// Carga los datos del registro
persona2.nombre = "Marcelo"; 
persona2.edad = 20; 
persona2.altura = 1.70; 

// imprime los datos de cada campo del registro
cout << "El nombre es: " << persona2.nombre << endl;
cout << "La edad es: " << persona2.edad << endl;
cout << "La altura es: " << persona2.altura << endl;

getch();
return 0; 
}










