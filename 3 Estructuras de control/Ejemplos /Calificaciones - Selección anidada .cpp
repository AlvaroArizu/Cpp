// Programa Usa sentencias de Selección ANIDADAS
// Califica nota del alumno

#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <iomanip>
using namespace std;

int main () {
float nota;

cout << "Ingrese el valor de la nota" << endl;
cin >> nota;

if ( nota < 0.0 || nota > 10.0)  {
            cout << "Nota no válida" << endl;  } 
            else     if  (nota >= 9.5)   {
						cout << "Nota Excelente" << endl;  } 
						else     if (nota >= 9.0)   {
	             					cout << "Nota Sobresaliente" << endl;  } 
	             					else   if (nota >= 7.0)    {
												cout << "Nota Muy Buena" << endl;  } 
												else     if   (nota >= 4.0)    {
		             											cout << "Aprobado" << endl;  } 
		              											else   {
																	cout << "Desaprobado" << endl;  }
getch();
return 0;
}

