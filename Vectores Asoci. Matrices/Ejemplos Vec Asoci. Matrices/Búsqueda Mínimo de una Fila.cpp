// Matrices: Búsqueda del MÍNIMO  valor de una determinada FILA

#include <stdio.h>
#include <iostream>
#include <iomanip>
#include <conio.h>

using namespace std;

int main (void)
{
	int n, m, i, j, nroFila, minPos;

	cout<<"Ingrese la cantidad de filas de la matriz: ";
	cin>>n;
	cout << endl;
	cout<<"Ingrese la cantidad de columnas de la matriz: ";
	cin>>m;
	
		
	int mat[n][m];

    // Carga de la matriz con valores que se leen
	for (i= 0; i<n;i++)
	  for (j=0; j<m;j++)
	  {
	      cout<<endl<<"Ingrese valor de fila "<<i<<"  columna "<<j<<" : ";
		   cin>>mat[i][j];
      }
	
	
	// Impresión matricial
	for (i= 0; i<n;i++)
	{
	  	
	  for (j=0; j<m;j++)
	       cout<<setw(5)<<mat[i][j];
	  cout<<endl;	
    }
    
	cout<<endl<<"ingrese el NRO de FILA para Buscar el MINIMO valor (Fila entre 0 y "<< (n-1) << ") : ";
	cin >> nroFila;
	
    minPos = 0;
	
	for (i=1;i<m ;i++)
	   if( mat[nroFila][i] < mat[nroFila][minPos] )
	          minPos = i;
	
	cout<<endl << "El MENOR elemento de la fila:  " << nroFila << "  es: " << mat[nroFila][minPos]<<endl;
	
	 	
	getch();
	return 0;
}
