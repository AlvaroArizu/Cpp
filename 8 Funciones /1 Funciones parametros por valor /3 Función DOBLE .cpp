// Funci�n DOBLE para calcular el PER�METRO de un rect�ngulo
          
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


int main(){
    
    float largo;
    float ancho;
    float perimetro;
    
    cout << "Calculo del perimetro de un rectangulo: " << endl;
    
    cout<< endl << "Ingrese el largo: ";
    cin>>largo;
    
    cout<< endl << "Ingrese el ancho: ";
    cin>>ancho;
     
    perimetro = doble(largo) + doble(ancho);   // invoca 2 veces a la funci�n DOBLE
    
    cout<<endl <<"El perimetro es: " << perimetro;

    getch();
    return(0);
 }

