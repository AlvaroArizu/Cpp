// Funciones DOBLE y PER�METRO
          
#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <iomanip>
using namespace std; 

// Definici�n de la Funci�n DOBLE 

float doble( float valor)
{
	float resu;
	resu = valor * 2; 
	return resu;

}

// Definici�n de la Funci�n PERIMETRO1

float perimetro1 ( float largo, float ancho)
{
	float contorno;
	contorno = doble(largo) + doble (ancho);
	return contorno;
}

int main(){
    
    float largo;
    float ancho;
    float perimetro;
    
    cout << "Calculo del perimetro de un rectangulo: " << endl;
    
    cout<< endl << "Ingrese el largo: ";
    cin>>largo;
    
    cout<< endl << "Ingrese el ancho: ";
    cin>>ancho;
     
    cout<<endl << "El perimetro es: " << perimetro1(largo,ancho);   // invoca a la Funci�n PERIMETRO1

    getch();
    return(0);
 }
