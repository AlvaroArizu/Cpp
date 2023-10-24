#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <iomanip>
#include <stdlib.h>

using namespace std;

// FUNCIÓN  Intercambio - Pasaje de parámetros POR REFERENCIA

void intercambio (int &a, int &b)
{
	int aux;
	cout<<endl<<endl<<"EN LA FUNCION  *********** antes del intercambio ************** "<<endl;
	cout<<"la posicion de memoria de la variable a es: "<< &a <<endl;
	cout<<"el contenido de la variable a es: "<< a <<endl;
	cout<<"la posicion de memoria de la variable b es: "<< &b <<endl;
	cout<<"el contenido de la variable b es: "<< b <<endl;
	

	aux = a;
	a = b;
	b = aux;
	
	
	cout<<endl<<endl<<"EN LA FUNCION  *********** despues del intercambio ************** "<<endl;
	cout<<"la posicion de memoria de la variable a es: "<< &a <<endl;
	cout<<"el contenido de la variable a es: "<< a <<endl;
	cout<<"la posicion de memoria de la variable b es: "<< &b <<endl;
	cout<<"el contenido de la variable b es: "<< b <<endl;
}


int main ()
{
  int x=10, y =20;
  
   cout<<endl<<endl<<"EN EL MAIN  *********** antes del intercambio ************** "<<endl;
	
  cout<<"la posicion de memoria de la variable x es: "<< &x <<endl;
  cout<<"la posicion de memoria de la variable y es: "<< &y <<endl;  
  
  cout <<"Contenido de las variables:    X = "<< x <<"   Y = "<< y <<endl<<endl;
  
  intercambio(x,y);
  
  cout<<endl<<endl<<"EN EL MAIN   *********** despues del intercambio ************** "<<endl;
	
  cout<<"la posicion de memoria de la variable x es: "<< &x <<endl;
  cout<<"la posicion de memoria de la variable y es: "<< &y <<endl;  
  
  cout <<"Contenido de las variables:    X = "<< x <<"   Y = "<<y;
  
  getch();
  return(0);	
	
}
