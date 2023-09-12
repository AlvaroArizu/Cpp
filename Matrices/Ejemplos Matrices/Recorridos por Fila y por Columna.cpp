//  Matriz recorrrido por FILAS y por COLUMNAS.

#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <iomanip>
#include <windows.h>
using namespace std;

int main (void){

	int f, c, i;
		
	int mat[][5] = { {10,20,30,40,50},{10,20,30,40,50},{10,20,30,40,50},{10,20,30,40,50},{10,20,30,40,50}};
	
	// Impresión de la matriz original
	cout << "   Matriz original: " << endl << endl ;
	
	for ( f=0; f<5; f++) {
		cout << "          ";
		for ( c=0; c<5; c++) {
			cout << mat [f] [c] << "  "; }
		cout << endl;		
	}	
	cout << endl;
	
	// RECORRIDO por FILAS

	// prepara para dar Color a la impresión
	HANDLE h = GetStdHandle( STD_OUTPUT_HANDLE );
	
	SetConsoleTextAttribute ( h, FOREGROUND_RED & FOREGROUND_BLUE | BACKGROUND_BLUE  | FOREGROUND_INTENSITY | BACKGROUND_INTENSITY );
		cout << " Recorrido por FILAS " << endl << endl ;
	SetConsoleTextAttribute(h, 15);     //  15: WHITE
	
	
	for ( f=0; f<5; f++)  {
	
	     for ( c=0; c<5; c++) {
		 
			cout << "Elemento de fila: ";
			SetConsoleTextAttribute(h, 11);      //  11: LIGHTCYAN
			cout << f ;
			SetConsoleTextAttribute(h, 15);     //  15: WHITE
			cout << "  columna: ";
			SetConsoleTextAttribute(h, 11);     //  11: LIGHTCYAN
			cout << c ;
			SetConsoleTextAttribute(h, 15);     //  15: WHITE
			cout << " --> " << mat [f] [c] << endl ;
		}
	}
	// RECORRIDO por COLUMNAS 

	// dar otro Color
	
	SetConsoleTextAttribute ( h, FOREGROUND_RED & FOREGROUND_BLUE | BACKGROUND_BLUE  | FOREGROUND_INTENSITY | BACKGROUND_INTENSITY );
	
	cout << endl << " Recorrido por COLUMNAS " << endl << endl ;
	SetConsoleTextAttribute(h, 15);     //  15: WHITE
	

	for ( c=0; c<5; c++) {
	
	     for ( f=0; f<5; f++) {
		 
			cout << "Elemento de fila: ";
			SetConsoleTextAttribute(h, 11);      //  11: LIGHTCYAN
			cout << f ;
			SetConsoleTextAttribute(h, 15);     //  15: WHITE
			cout << "  columna: ";
			SetConsoleTextAttribute(h, 11);     //  11: LIGHTCYAN
			cout << c ;
			SetConsoleTextAttribute(h, 15);     //  15: WHITE
			cout << " --> " << mat [f] [c] << endl ;
		}
	}	
	
	getch ();
	return (0);
	}	
