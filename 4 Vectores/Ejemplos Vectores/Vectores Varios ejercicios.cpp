// Programa genera un vector y realiza VARIAS operaciones con �l.


#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <iomanip>
using namespace std;

   
int main(){
   
    int largo,i;
        
   	// declaraci�n del vector de Longitud 10 
   	largo= 10;
	int vec[largo];
   
   // 1) Ingresar 25 datos enteros y guardarlos en el vector.
 
   for( int i = 0; i < largo; i++)  {
	cout << " Ingrese contenido posicion: " << i << "  " ;
	cin >> vec[i];
    }
    
    // 2) Sumar los contenidos de las 25 posiciones del vector.


	// 3) Calcular el promedio de los elementos del vector (resultado con decimales).
	

	// 4) Sumatoria de elementos que est�n en posiciones impares.
	

	// 5) Sumatoria de elementos de contenidos impares
	

	// 6) Sumar los elementos de contenidos positivos que est�n en posiciones pares.
	

	// 7) Informar los elementos del vector, recorri�ndolo a partir de su �ltima posici�n.
	

	// 8) Informar la cantidad de veces que aparece un determinado Valor, en el vector. El Valor se lo debe solicitar al operador.



	// Impresi�n del vector generado
    
	cout << endl << " Impresion del vector: " << endl;
    for( int i = 0; i < largo; i++)  {
	cout << "Posicion: " << i << " ---> " << vec[i] << endl ;
    }
	
    getch();
	return 0;
}










