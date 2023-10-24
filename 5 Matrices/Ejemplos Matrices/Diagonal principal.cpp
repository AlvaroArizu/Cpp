//  Matriz cambiar la DIAGONAL PRINCIPAL.

#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <iomanip>
#include <windows.h>
using namespace std;

int main (void){

	int f;
	int c;
	int w;
	
	int mat[][5] = { {10,20,30,40,50},{10,20,30,40,50},{10,20,30,40,50},{10,20,30,40,50},{10,20,30,40,50}};
	
	// dar Color a la impresión
	HANDLE h = GetStdHandle( STD_OUTPUT_HANDLE );
	
	
	// Impresión de la matriz original
	cout << "Matriz original: " << endl << endl ;
	
		for ( f=0; f<5; f++) {
		
		for ( c=0; c<5; c++) {
		 
			cout << mat [f] [c] << "  "; }
		cout << endl;		
	}	
	
	// modifica SOLO la DIAGONAL PRINCIPAL
	for (w=0; w<5; w++) {
		mat [w][w] = 99;
	}
	
	cout << endl << "Matriz modificada la diagonal principal: " << endl << endl;
	
	for ( f=0; f<5; f++) {
		
		for ( c=0; c<5; c++) {
		 
			if (f==c) {
			SetConsoleTextAttribute(h, 10);  //  10: LIGHTGREEN
			cout << mat [f] [c] << "  "; 
			SetConsoleTextAttribute(h, 15);  //  15: WHITE				
			}		 
			else {
				cout << mat [f] [c] << "  "; }
	}
		cout << endl;		
	}		

	
	getch ();
	return (0);
	}	
