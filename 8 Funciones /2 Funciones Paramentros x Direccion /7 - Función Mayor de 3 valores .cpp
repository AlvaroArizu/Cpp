// Función que calcula el MAYOR de 3 valores
          
#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <iomanip>
#include <stdlib.h>   // para usar función system - color
using namespace std; 


int mayor ( int n1, int n2, int n3) {
	int max;
	if ((n1 > n2) && (n2 > n3))  { max = n1; }
		else 
			if ((n2 > n1) && (n2 > n3))  { max = n2; }
		else
			{ max = n1; } 
	
	return (max);
}


main() 
{ 
 int x = 10; 
 int y = 20;
 int w = 15;
 
 system("color 12");  //  1: negro para fondo  -  2: verde para texto
       
 cout << "Los valores son: " << x << " - " << y << " - " << w << endl << endl;
 
 cout << "El mayor de ellos es: " << mayor(x,y,w);    // OJO: puede llamarse en un cout pues devuelve un valor a traves del nombre de la función
 
 cout << endl << endl << endl;
  
}



