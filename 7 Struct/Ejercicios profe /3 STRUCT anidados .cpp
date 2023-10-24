// Struct ANIDADOS
 
#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <iomanip>
using namespace std; 
 
struct Fecha { 
	int dia; 
	int mes; 
	int anio; 
	};
struct DatosAlumno {
	int matricula;
	Fecha fechaNacim;
	float promedio;
}; 

int main() { 

DatosAlumno inscripto;   // defino la variable inscripto de tipo da datos struct DatosAlumno

inscripto.matricula = 1500; 

inscripto.fechaNacim.dia = 19;  // Campo día del struct 

inscripto.fechaNacim.mes = 8;

inscripto.fechaNacim.anio = 1996;
 
inscripto.promedio = 7.5; 

/*
inscripto = { 1500, 19, 8, 1996, 7.5 };  // sería lo mismo inicializado por extensión
*/

cout<<"La matricula es: "<< inscripto.matricula<<endl;

cout<<"Su fecha de nacimiento es: "<<inscripto.fechaNacim.dia<<"/"<<inscripto.fechaNacim.mes<<"/"<<inscripto.fechaNacim.anio<<endl; 

cout << "El promedio del alumno es: " << inscripto.promedio ;
getch();
return 0; 
} 

