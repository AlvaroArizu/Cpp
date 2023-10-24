// BÚSQUEDA del MÁXIMO unico- Matrices

#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <iomanip>
using namespace std;


int main (){

	int f, c, iv, maxf, maxc;
	int mat[][4]= {{7,6,4,8},{5,14,9,1},{2,10,11,13}};
	

	bool primeraVez;
	
	
	//impresion matricial
	cout << " Matriz de datos: " << endl;
	for(f=0;f<3;f++){
		cout << "     ";
		for(c=0;c<4;c++){
			cout<<setw(4) <<mat[f][c]<<" ";			
		}		
		cout<<endl;
	}

	cout<<endl;
	

///  Búsqueda del MÁXIMO

	primeraVez=true;   // bandera para indicar el elemento [0][0] y no compararlo consigo mismo
	
	for(f=0;f<3;f++){
		
		for(c=0;c<4;c++){
			
			if (primeraVez==true)
			{
			   maxf = 0;
			   maxc = 0;
			   primeraVez= false;   // f vale cero, c vale cero, NO compara y solo cambia de columna en la fila cero.
			
			}
			else
			{
						
				if (mat[f][c]>mat[maxf][maxc]){
					
					maxf=f;     // encontró un nuevo máximo
					maxc=c;	
				}
				
			}
		
	
		}
	
	}
	
	
	cout<<"El maximo es: "<< mat[maxf][maxc] <<endl << endl;
	
			
	getch ();
	return (0);
	}	
