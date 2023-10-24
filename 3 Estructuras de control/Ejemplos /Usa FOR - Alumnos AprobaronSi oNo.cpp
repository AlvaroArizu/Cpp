// Programa que muestra el Ciclo DO While ( Hacer...Mientras )
// Ver si los alumnos aprobaron o no

#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <iomanip>
using namespace std;

int main(){
	int nota1, nota2, nota3, nro, cantAlu ;
	float promedio;
	
	cout<<" Ingrese cantidad de Alumnos a calcularle la condicion: ";
	cin >> cantAlu;
	
		
	for ( nro=1 ; nro <= cantAlu; nro++)  {           /// tener en cuenta que debe haber POR LO MENOS 1 alumno
		
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
        cout << endl;             
      	
   }  // fin del FOR
   
   cout << " Se calcularon condicion de: "<< nro-1 << " alumnos." << endl ;
   
   
   getch();
   return 0;
}



