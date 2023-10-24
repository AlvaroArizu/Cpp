// Funciones DOBLE y PERÍMETRO
          
#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <iomanip>
using namespace std; 

// Definición de la Función DOBLE 

float doble( float valor)
{
	float resu;
	resu = valor * 2; 
	return resu;

}

// Definición de la Función PERIMETRO1

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
     
    cout<<endl << "El perimetro es: " << perimetro1(largo,ancho);   // invoca a la Función PERIMETRO1

    getch();
    return(0);
 }

