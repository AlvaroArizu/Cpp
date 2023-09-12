// Programa genera un vector y realiza VARIAS operaciones con él.


#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <iomanip>
using namespace std;

   
int main(){
   
    int largo,i, sum, sumpi, sumci, sumpp, valor, contvalor;
    float prom;
        
   	// declaración del vector de Longitud 10 
   	largo= 10;
   	
   	/*
	int vec[largo];
   
   // 1) Ingresar 25 datos enteros y guardarlos en el vector.
 
   for( int i = 0; i < largo; i++)  {
	cout << " Ingrese contenido posicion: " << i << "  " ;
	cin >> vec[i];
    }
    */
    
    int vec[]={10,8,7,0,-2,-2,3,4,-1,1};  // defino el vector por extensión
    
    
    // 2) Sumar los contenidos de todas posiciones del vector.

	sum=0;
	for( i = 0; i < largo; i++)  {
	sum+= vec[i];
    }
	cout << " Punto 2: La suma de todos los elementos es: " << sum;
	 
	// 3) Calcular el promedio de los elementos del vector (resultado con decimales).
	
	prom= (float)sum/10;
	cout << endl << " Punto 3:  El promedio de todos los elementos del vector es: " << prom; 

	// 4) Sumatoria de elementos que estén en posiciones impares.
	sumpi=0;
	
	for( i = 1; i < largo; i+=2)  {
		sumpi+= vec[i];
    }
	cout << endl << " Punto 4:  La sumatoria de los elementos de posiciones impares es: " << sumpi;
	
	// 5) Sumatoria de elementos de contenidos impares
	sumci=0;	
	for( i = 0; i < largo; i++)  {
		if (vec[i]%2 != 0) {
			sumci+= vec[i];
		}
    }
    cout << endl << " Punto 5:  La sumatoria de los contenidos impares es: " << sumci;

	// 6) Sumar los elementos de contenidos positivos que estén en posiciones pares.
	sumpp=0;
	for( i = 0; i < largo; i+=2)  {
		if (vec[i] > 0) {
			sumpp+= vec[i];
		}
    }
	cout << endl << " Punto 6:  La sumatoria de los elementos positivos de posiciones pares es: " << sumpp;
		

	// 7) Informar los elementos del vector, recorriéndolo a partir de su última posición.
	cout << endl << " Punto 7: impresion del vector de la ultima posicion a la primera: " << endl ;
	for( i = largo-1; i >= 0; i--)  {
		cout << vec[i] << "  "; 
		}

	// 8) Informar la cantidad de veces que aparece un determinado Valor, en el vector. El Valor se lo debe solicitar al operador.
	cout << endl << " Ingrese el VALOR a buscar:  ";
	cin >> valor;   // buscar el -2 que esta repetido
	
	contvalor=0;
	
	for( i = 0; i < largo; i++)  {
		if (vec[i] == valor) {
			contvalor++;
		}
    }
	cout << " Punto 8:  El valor buscado esta: " << contvalor << " vez/veces en el vector. ";

	// Impresión del vector generado
    
	cout << endl << endl << " Impresion del vector: " << endl;
    for( int i = 0; i < largo; i++)  {
	cout << "Posicion: " << i << " ---> " << vec[i] << endl ;
    }
	
    getch();
	return 0;
}










