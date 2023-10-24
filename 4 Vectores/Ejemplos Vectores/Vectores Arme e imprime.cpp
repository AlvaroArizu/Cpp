// Programa genera un vector con datos que ingresa e imprime el vector


#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <iomanip>
using namespace std;

   
int main(){
   
    int largo,i;
        
   	cout << "Ingrese longitud del vector  ";
	cin >> largo;
	// declaración del vector de Longitud segun dato ingresado
	int vec[largo];
    
   for( int i = 0; i < largo; i++)  {
	cout << " Ingrese contenido posicion: " << i << "  " ;
	cin >> vec[i];
    }
    
	cout << endl << " Impresion del vector: " << endl;
    for( int i = 0; i < largo; i++)  {
	cout << "Posicion: " << i << " ---> " << vec[i] << endl ;
    }
	
    getch();
	return 0;
}










