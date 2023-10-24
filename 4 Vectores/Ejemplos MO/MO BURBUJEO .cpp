// Programa métodos de ordenamiento.

#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <iomanip>
#include <windows.h>
using namespace std;


int main(){
   
   int i, j, aux,ult, cantCambios;
   bool cambio;
   cantCambios=0;
   
   
   int vec[]={7,9,3,2,4,5};
   
   /*
    int vec[]={2,3,4,5,7,9};  // definición del vector por extensión - de 6 elementos   PARA PROBAR qué pasa si el vector de entrada YA ESTÁ ORDENADO
   */	
   
   ult= 5;
   cambio=true;    // marca indicación de que se intercambiaron 2 elementos del vector  - lo inicializa en TRUE para forzar que se ejecute el WHILE
   

   cout<<"Vector original: "<<endl;
   
   for (int i=0; i<=5; i++){
	  cout<< " "<<vec[i];
	  
   }
   
  cout<<endl;
  
   // Ordenamiento por burbujeo

   cout<<"Ordenamiento por burbujeo:"<<endl;
  
   while (cambio==true){
   	
   	 cambio=false;
   	
   	 for (i=0; i<ult; i++){
   	 	
   	    if (vec[i] > vec[i+1]){          // compara dos elementos adyacentes
   	    	
			aux=vec[i];
            vec[i]=vec[i+1];
            vec[i+1]=aux;
            
            cantCambios++;
            cambio=true;   // marca que hubo intercambio 
            
            for (j=0; j<=5; j++){
		       cout<<" "<<vec[j]; }
		       cout<<endl; 
		}

	 }
		
		ult-=1;  // ult--;
		
	}
   	
   	
  	cout<<"Vector ordenado: "<<endl;
   
   // seteo para dar COLOR a la impresión
	HANDLE h = GetStdHandle( STD_OUTPUT_HANDLE );
	SetConsoleTextAttribute(h, 13);
   
   
   	for (int i=0; i<=5; i++){
   		 cout<< " "<<vec[i];
	}
   
	cout << endl << endl << endl << " Se hicieron: " << cantCambios << " cambios. ";
	
    getch();
	return 0;
}
