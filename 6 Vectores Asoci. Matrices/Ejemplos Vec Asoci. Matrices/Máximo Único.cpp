// Matrices. Búsqueda del MÁXIMO ÚNICO

#include <stdio.h>
#include <iostream>
#include <iomanip>
#include <conio.h>

using namespace std;

int main (void)
{
	/* 
	En este ejemplo definimos la matriz por extensión
	Sino fuera así debería ingresarse los valores n y m
	
	int n, m;

	cout<<"Ingrese la dimension filas de la matriz: "<<endl;
	cin>>n;
	cout<<"Ingrese la dimension columnas de la matriz: "<<endl;
	cin>>m;
	*/
	
	int n, m, i,j, maxF, maxC;
	
    int mat[][5]={{4,2,1,2,3},{3,3,6,7,9},{7,8,5,8,8}};
    n= 3;
    m= 5;
   
   // Impresión de la Matriz
   
	cout << " Matriz: " << endl << endl;
	for (i= 0; i<n;i++)
	{
	  for (j=0; j<m; j++)
	       cout<<setw(5)<<mat[i][j];
	  cout<<endl;	
    }
    
    // Búsqueda del máximo ÚNICO de la matriz
    
	 
	for (i= 0; i<n;i++)
	  for (j=0; j<m;j++)
	  {
	  	if ((i==0)&& (j==0))
	  	        {
	  	          maxF=0;
	              maxC=0;
	  	        }
	  	    else if (mat[i][j] > mat[maxF][maxC])
	  	         {
	  	         	maxF = i;
	  	         	maxC = j;
	  	         }
      }
    
	cout << endl << endl ;  
  	cout<<"El mayor elemento de la matriz es: " << mat[maxF][maxC] << endl;
	cout<<"Se encuentra en la fila: "<<maxF<<"  columna:  "<<maxC<<endl;    
      
 
    getch();
    return 0;
  }
