// Función fSumIncrementa
// Suma los valores que recibe e incrementa  a cada uno en 1...  ( lo hace???)  
          
#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <iomanip>
using namespace std; 


int fSumIncrementa (int x, int y)
{
    int aux;
    aux=x+y;
    
    cout<<"Mensajes desde la funcion:" << endl << endl;
    cout << "x recibido     vale: "<< x <<"  y recibido     vale: "<< y << endl ;
    
    x=x+1;  // incrementa el 1er parámetro
    y=y+1;  // incrementa el 2do parámetro
    
    cout << "x incrementado vale: "<< x <<"  y incrementado vale: "<< y;
    cout<<endl<< endl;
    return aux;
}

int main(){
    int uno=1;
    int dos=2;
    int resu;
    
    resu = fSumIncrementa (uno, dos);    // lamada a la función
    
    cout<< endl << endl;
    cout<<"Mensaje desde el main: " << endl << endl;
	  
	cout<<"La suma es: "<< resu << endl << endl;         
	
    
    cout<<"Uno vale: "<< uno << endl;
    cout<<"Dos vale: "<< dos << endl;
    
    cout << "... se incrementaron??????   ...   que paso...   ??? ";
    
    getch ();
    return 0;
}



