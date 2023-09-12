// Programa métodos de ordenamiento.

#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <iomanip>
using namespace std;

   
int main(){
   
   int i, paso,posmin, aux;
   int vec[]={7,9,3,2,4,5};
   
    
	
    cout<<"Vector original: "<<endl;
   
   for ( i=0; i<=5; i++){
   	 
	  cout<< "  " << vec[i];

   }
   cout << endl;
   
   
  
   //Ordenamiento por selección
    
   for ( paso=0; paso<=5; paso++){
   	 posmin=paso;
   	 
   	  for(i=paso+1; i<6; i++){
   	  	 
			if (vec[i]<vec[posmin])
			   posmin=i;

		 }
   	    
   	 if (posmin != paso){
   	 	
		aux=vec[posmin];
		vec[posmin]=vec[paso];
   	 	vec[paso]=aux;
   	 	
   	 	for ( i=0; i<=5; i++){   	 
	 	 cout<< "  " << vec[i];
		   }
   		cout << endl;
			
		}
   	
   }

   cout<<" "<<endl;
   cout<<"Vector ordenado por Metodo de Seleccion: "<<endl;
   
   for ( i=0; i<=5; i++){
   	 
	  cout<< " " << vec[i];

   }
   
	
    getch();
	return 0;
}


