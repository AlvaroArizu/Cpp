// Funci�n INTERCAMBIA - usando PAR�METROS x direcci�n
          
#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <iomanip>
using namespace std; 


void intercambia (int *a, int *b)    //  par�metros de tipo de dato PUNTERO
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
 
 intercambia ( &x, &y) ;    // pasa la direcci�n de los par�metros actuales
  
 cout << "Despues de llamar a la funcion:  x= " << x  << "  y= " << y ;
 
 cout << endl << endl;
}

//  La Funci�n SI logra intercambiar los valores de x e y.  Por qu�?????
