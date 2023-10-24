// Función INTERCAMBIA - usando PARÁMETROS x referencia
          
#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <iomanip>
using namespace std; 


void intercambia (int &a, int &b) 
{ 
int aux; 
aux= a; 
 a = b; 
 b = aux; 
} 


main() 
{ 
 int x = 10; 
 int y = 20; 
 
 cout << " Pasaje de parametros por REFERENCIA." << endl << endl;
 
 cout << "Antes de llamar a la funcion:    x= " << x  << "  y= " << y << endl ;
 
 intercambia (x,y) ;
  
 cout << "Despues de llamar a la funcion:  x= " << x  << "  y= " << y ;
 
  cout << endl << endl;
}

//  La Función SI logra intercambiar los valores de x e y.  Por qué?????
