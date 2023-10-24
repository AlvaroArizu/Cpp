// Programa que arma una Estructura Vector de Registros (STRUCT)  
// conteniendo los datos de los alumnos de las carreras de Informática
// ( Ingeniería, código 20 - Licenciatura, código 30 - Tecnicatura, código 40 ) 
// Informa cantidad de alumnos inscriptos en cada carrera
// Informa Porcentaje de alumnos en Ingenieria y en Licenciatura
// Informa los nombres y los promedios de los alumnos que no superan una determinada edad
 
#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <iomanip>
using namespace std; 

#define INGENIERIA 20
#define LICENCIATURA 30
#define TECNICATURA 40

// Definición del Registro de nombre Alumno
struct Alumno{
	long matricula;
	char nombre[10];
	int edad;
	int codigoCarrera;
	float promedio;
};

int main(){
	int cantidadAlumnos;
	cout << "Que cantidad de alumnos va a ingresar? ";
	cin >> cantidadAlumnos;

	// Definición del VECTOR cuyos elementos son de tipo STRUCT Alumno
    Alumno alumnos[cantidadAlumnos];
    
    // Ingreso de datos para armar la Estructura
	for(int i = 0; i < cantidadAlumnos; i++)
    {
		cout << "---> Ingreso de datos para el Alumno " << i+1 << endl;
		cout << "Matricula: ";
		cin >> alumnos[i].matricula;
		cout << "Nombre: ";
		cin >> alumnos[i].nombre;
		cout << "Edad: ";
		cin >> alumnos[i].edad;
		// Validación del ingreso del código de carrera
        do
        {
			cout << "Codigo de carrera (20 (Ing.), 30 (Lic.) o 40 (Tec.) ): ";
			cin >> alumnos[i].codigoCarrera;
		} while(alumnos[i].codigoCarrera != INGENIERIA && alumnos[i].codigoCarrera != LICENCIATURA && alumnos[i].codigoCarrera != TECNICATURA);
		// Validación del ingreso del promedio
        do
        {
			cout << "Promedio: ";
			cin >> alumnos[i].promedio;
		} while(alumnos[i].promedio < 0.0 || alumnos[i].promedio > 10.0);
	}

	// Cálculo de cantidad de alumnos por carrera
	int cantIng, cantLic, cantTec;
	cantIng = cantLic = cantTec = 0;
	for(int a = 0; a < cantidadAlumnos; a++)
    {
		if(alumnos[a].codigoCarrera == INGENIERIA){
			cantIng++;  }
        else if(alumnos[a].codigoCarrera == LICENCIATURA){
			    cantLic++;  }
              else{
		         cantTec++;
          	     }
	}
	
	// Informar cantidad de alumnos por carrera
	cout << endl;
	cout << "Cantidad alumnos inscriptos en INGENIERIA: "  << cantIng << endl;
    cout << "Cantidad alumnos inscriptos en LICENCIATURA: "<< cantLic << endl;
    cout << "Cantidad alumnos inscriptos en TECNICATURA: " << cantTec << endl;
    
	// Informar Porcentaje de alumnos en ingenieria y en licenciatura
	cout << endl;
	cout << "Porcentaje de alumnos inscriptos en INGENIERIA: " << ((float)cantIng / (float)cantidadAlumnos) * 100 << " %" << endl;
    cout << "Porcentaje de alumnos inscriptos en LICENCIATURA: " << ((float)cantLic/(float)cantidadAlumnos)*100 << " %" << endl;

	// Informar los nombres y los promedios de los alumnos que no superan una determinada edad 
	int edad;
	cout << endl << "Ingrese una EDAD para informar datos de los alumnos que no la superan: ";
	cin >> edad;
	
	// recorrer la estructura buscando las edades que no superan la ingresada
	for(int e = 0; e < cantidadAlumnos; e++){
		if(alumnos[e].edad <= edad){
			cout << "Nombre: " << alumnos[e].nombre << " Promedio: " << alumnos[e].promedio << " Edad: " << alumnos[e].edad << endl;
		}
	}
	
    getch();
	return 0;
}










