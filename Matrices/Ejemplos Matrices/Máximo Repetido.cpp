// BÚSQUEDA del MÁXIMO REPETIDO - Matrices

#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <iomanip>
using namespace std;


int main (){

	int f, c, iv, maxf, maxc;
	int mat[][4]= {{7,6,4,8},{5,8,9,6},{7,9,9,6}};
	
	int vecF[12];
	int vecC[12];
	bool primeraVez;
	
	vecF[0]=0;    // agrega en el vector de Filas, la fila del elemento [0][0]
	vecC[0]=0;    // agrega en el vector de Columnas, la columna del elemento [0][0]
	iv=0;
	maxf=0;
	maxc=0;
	
	cout << " Matriz de datos: " << endl;
	for(f=0;f<3;f++){
		cout << "     ";
		for(c=0;c<4;c++){
			cout<< mat[f][c]<<" ";			
		}		
		cout<<endl;
	}

	cout<<endl;
	

///  Búsqueda del MÁXIMO

	primeraVez=true;   // bandera para indicar el elemento [0][0] y no compararlo consigo mismo
	
	for(f=0;f<3;f++){
		
		for(c=0;c<4;c++){
			
			if (primeraVez==false){
				
				if (mat[f][c]>mat[maxf][maxc]){
					
					maxf=f;     // encontró un nuevo máximo
					maxc=c;
					iv=0;
					vecF[iv]=f;
					vecC[iv]=c;
	
				}
				else
				{	if(mat[f][c]==mat[maxf][maxc]){
					
						iv++;        // encontró una repetición del máximo de ese momento
						vecF[iv]=f;
						vecC[iv]=c;
					}

				}	
	
			}
			else{
			
			primeraVez= false;   // f vale cero, c vale cero, NO compara y solo cambia de columna en la fila cero.
			
			}
	
		}
	
	}
	
	
	cout<<"El maximo es: "<< mat[maxf][maxc] <<endl << endl;
	
	for(int i=0; i<iv+1; i++){
		
		cout<<"Posicion del maximo -->  Fila: "<<vecF[i]<<" Columna: "<<vecC[i]<<endl;
	
	}

	cout<< endl <<"Cantidad de veces que se repite: " << iv+1 << endl;
			
	getch ();
	return (0);
	}	
