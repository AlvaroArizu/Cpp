// Programa que muestra el Ciclo DO While ( Hacer...Mientras )
// Ver si los alumnos aprobaron o no

#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <iomanip>
using namespace std;

int main(){
	int nota1, nota2, nota3, nro ;
	float promedio;
	char hayaAlumnos;
	
	nro =1;
	
	do {           /// tener en cuenta que debe haber POR LO MENOS 1 alumno
		
		cout << "Ingrese la 1er. nota del alumno " << nro << endl;
		cin >> nota1;                    
		cout << "Ingrese la 2da. nota del alumno " << nro << endl;
		cin >> nota2;  
		cout << "Ingrese la 3er. nota del alumno " << nro << endl;
		cin >> nota3;  
				
		promedio = (nota1 + nota2 + nota3) / 3;

		if ( promedio >= 4 ){
			cout << "---> Aprobado" << endl;  } 
            else  {
            	cout << "---> Desaprobado !!!" << endl;
                     }
                     
        nro++;  // cuenta cantidad de alumnos ingresados
		       
    	cout << endl <<"Hay alumno/s? (s/n) ";
		cin >> hayaAlumnos;
	
   }  while ( hayaAlumnos == 's'  ||  hayaAlumnos == 'S' ); 
   
   cout << " Se calcularon condicion de: "<< nro-1 << " alumnos." << endl ;
   
   
   getch();
   return 0;
}



