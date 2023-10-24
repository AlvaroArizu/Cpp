#include<iostream>
#include<stdio.h>
#include<conio.h>
#include<iomanip>
using namespace std;

// FUNCION Factorial

  int factorial (int a) 
  {
     
    int aux;
      	 
    aux=1;
     	 
    for (int i=1 ; i<=a ; i++) {
     	 cout<<endl<<"Valor de aux: "<<aux<<" - Valor de i: " <<i<< " - Valor de a: " <<a;  
     	 	aux*=i;
     	 cout<<" - Valor de aux despues de multiplicarlo por " <<i<< " es " <<aux<<endl<<endl;
     	 }
     	
     
     return (aux);
  }



int main (){
	int nro;
	
	
	cout<<"Ingrese un numero"<<endl;
	cin>> nro;
	
	
	cout<<endl <<"El factorial del numero "<< nro << " es : " << factorial(nro);
	
	
	getch();
	return(0);
	
	
}









