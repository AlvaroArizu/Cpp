//  Matriz manejo de DETERMINADA fila o columna

#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <iomanip>
#include <windows.h>
using namespace std;

int main (void){

	int f, c, w, n, m ;
	int mat[4][5];
	
	n=4;
	m=5;
	
	// Generar la Matriz con lecturas
	
	for ( f=0; f<n; f++) {
		
		for ( c=0; c<m; c++) {
		 
			cout << "Ingrese importe de local: " << f << " dia: " << c << " -->  ";
			cin >> mat [f][c];
		}	
	}
	
	
	cout << endl << endl << "Matriz de importes recaudados por cada Local, cada Dia: " << endl << endl;
	
	for ( f=0; f<n; f++) {
		for ( c=0; c<m; c++) {
			cout << mat [f] [c] << "  "; 
			}		 
		cout << endl;		
	}		

	///   COMPLETAR 
	
	
	getch ();
	return (0);
	}	
