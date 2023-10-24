// Función INTERCAMBIA - usando PARÁMETROS x dirección
          
#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <iomanip>
using namespace std; 


void intercambia (int *a, int *b)    //  parámetros de tipo de dato PUNTERO
{ 
int aux; 
aux = *a; 
 *a = *b; 
 *b = aux; 
} 


main() 
{ 
 int x = 10; 
 int y = 20; 
 
 cout << " Pasaje de parametros por DIRECCION." << endl << endl;
 
 cout << "Antes de llamar a la funcion:    x= " << x  << "  y= " << y << endl ;
 
 intercambia ( &x, &y) ;    // pasa la dirección de los parámetros actuales
  
 cout << "Despues de llamar a la funcion:  x= " << x  << "  y= " << y ;
 
 cout << endl << endl;
}

//  La Función SI logra intercambiar los valores de x e y.  Por qué?????
