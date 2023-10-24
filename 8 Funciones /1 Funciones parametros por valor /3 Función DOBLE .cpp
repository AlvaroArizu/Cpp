// Función DOBLE para calcular el PERÍMETRO de un rectángulo
          
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


int main(){
    
    float largo;
    float ancho;
    float perimetro;
    
    cout << "Calculo del perimetro de un rectangulo: " << endl;
    
    cout<< endl << "Ingrese el largo: ";
    cin>>largo;
    
    cout<< endl << "Ingrese el ancho: ";
    cin>>ancho;
     
    perimetro = doble(largo) + doble(ancho);   // invoca 2 veces a la función DOBLE
    
    cout<<endl <<"El perimetro es: " << perimetro;

    getch();
    return(0);
 }

