//  Matriz generar según Diagonal Ppal y Triangulares Inf & Sup.

#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <iomanip>
#include <windows.h>
using namespace std;

int main (void){

	int f, c, w, n ;
	int mat[8][8];
	
	n=10;
	
	// Generar la Matriz
	
	for ( f=0; f<8; f++) {
		
		for ( c=0; c<8; c++) {
		 
			if (f==c) {
			  mat[f][c]= 99; }
			  else
			  if (f < c) { mat[f][c]= 88;
			  }
			  else mat[f][c]= 77;			
		}	
	}
	
	
	cout << endl << "Matriz generada: " << endl << endl;
	
	for ( f=0; f<8; f++) {
		for ( c=0; c<8; c++) {
			cout << mat [f] [c] << "  "; 
			}		 
		cout << endl;		
	}		

	
	getch ();
	return (0);
	}	
