// Funci�n SEPARADOR que no recibe nada y no devuelve nada:
          
#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <iomanip>
using namespace std; 


int bisiesto(int);   // declaraci�n o PROTOTIPO de la funci�n

int main()
{
int anio;
cout<< "Ingrese numero de anio: ";
cin >> anio;

if (bisiesto (anio))   //llamada a la funci�n
    	cout << "Bisiesto." << endl; 
		else
		cout << "No es bisiesto. " << endl;
		

getch();
return(0);
}


int bisiesto (int a)    //definici�n de la funci�n
{
if ( a%4==0  &&  a%100!=0  ||  a%400==0)
		return 1;
	else
		return 0;
}

