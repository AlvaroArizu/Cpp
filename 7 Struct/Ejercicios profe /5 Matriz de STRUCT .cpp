// Ejercicio Profesionales por Consultorio por Turno - Matriz y Struct.
// Consultorios y Turnos: numerados de 1 a 3
// Las filas de la matriz son Consultorios y las columnas son Turnos.
// Calcular e imprimir, por cada Turno, la mayor CANTIDAD de horas trabajadas en el mes.

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
  
struct DatosProfesional { 
	int matricula; 
	Fecha fechaIncor;    // fecha de incorporación del profesional a la institución
	float cantHs;      // cantidad de horas trabajadas en el mes
	};

int main ()
{
    int f, c;
    int cantCons= 3;
    int cantTurnos=3;
    float mayorCantHs;
    
// define la matriz de elementos formato struct
DatosProfesional mat[cantCons][cantTurnos];
 
 // Ingreso de datos de los Profesionales   
    for(f=0;f<cantCons;f++){
        for(c=0;c<cantTurnos;c++){
           cout<<"Ingrese la matricula del Profesional del Consultorio: "<< f+1 <<" del turno: " << c+1 <<endl;
           cin>> mat[f][c].matricula;
           cout<<"Ingrese el dia de incorporacion del profesional "<<endl;
           cin>> mat[f][c].fechaIncor.dia;
           cout<<"Ingrese el mes de incorporacion del profesional "<<endl;
           cin>> mat[f][c].fechaIncor.mes;
           cout<<"Ingrese el anio de incorporacion del profesional "<<endl;
           cin>> mat[f][c].fechaIncor.anio;
           cout<<"Ingrese cantidad de horas trabajadas por el profesional "<<endl;
           cin>> mat[f][c].cantHs;
           }
    }
 // recorre la matriz POR COLUMNA (son los Turnos) buscando la MAYOR de horas trabajadas  
     for(c=0;c<cantTurnos;c++){
     	
         mayorCantHs=mat[0][c].cantHs;   // inicializo el campo de comparación con el PRIMER  elemento de la Columna
		             
        for(f=1;f<cantCons;f++){   // compara con los elementos RESTANTES de la columna (desde fila 1)
        	
            if( mat[f][c].cantHs > mayorCantHs)
               mayorCantHs = mat[f][c].cantHs;
               }                                          
        cout<<"La mayor cantidad de horas trabajadas por Profesional/es del turno "<< c+1 <<" es: "<< mayorCantHs <<endl;                 
        }
      
      getch();
      return(0);                     	
}


