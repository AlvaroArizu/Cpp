// Función Ejercicio de Ingenio

//  Da los resultados esperados????   
          
#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <iomanip>
using namespace std; 


int fUno (int &y) 
{ 
	y = y*2;
	return y;
}

 int fDos (int x ) 
{ 
	x = x*x;
	return x;
}


int main ()  {
    int nro, x1;
    
    cout << "Ingrese un numero del 1 al 10 --->  ";
    cin >> nro;
           
    x1 = fUno(nro);     // llamada a la función fUno
           
    cout << endl << "El doble del numero ingresado es: " << x1 << endl << endl;
           
    x1 = fDos(nro);     // Llamada a la función  fDos
           
    cout << "El cuadrado del numero ingresado  es: " << x1 << endl;
    
    getch();
    return 0;
}

