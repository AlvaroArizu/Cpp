// Programa método de ordenamiento por INSERCIÓN.

#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <iomanip>
#include <windows.h>
using namespace std;


int main(){
   
   int i,aux,k,j, cantCambios;
   cantCambios=0;
   
   int vec[]={7,9,3,2,4,5};  // defino el vector por extensión

   /*
    int vec[]={2,3,4,5,7,9};  // definición del vector por extensión - de 6 elementos   PARA PROBAR qué pasa si el vector de entrada YA ESTÁ ORDENADO
   */	

   cout<<"Vector original: "<<endl;
   
   for (int i=0; i<=5; i++){
	  cout<< " "<<vec[i];
	  
   }
   
  cout<<endl;
  
   //Ordenamiento por inserción

   cout<<"Ordenamiento por insercion:"<<endl;
  
	for(i=1; i<6; i++){
		
		aux=vec[i];
		k=i-1;
		
		while(k>=0 && aux<vec[k]){
			vec[k+1]=vec[k];  // CORRIMIENTO HACIA LA POSICIÓN A LA DERECHA
			k--;
			cantCambios++;	// para contar los corrimientos
		}
	
		vec[k+1]=aux;
	
		for (j=0; j<6; j++){
   			cout<< " "<<vec[j];
		}
		cout<<endl;
	}

	cout<<endl;
  	cout<<"Vector ordenado: "<<endl;
   
   //Color
	HANDLE h = GetStdHandle( STD_OUTPUT_HANDLE );
	SetConsoleTextAttribute(h, 13);
   
   
   	for (i=0; i<6; i++){
   		 cout<< " "<<vec[i];
	}
   
   cout << endl << endl << endl << " Se hicieron: " << cantCambios << " corrimientos. ";
	
    getch();
	return 0;
}
