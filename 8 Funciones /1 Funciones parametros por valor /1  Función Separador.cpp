// Funci�n SEPARADOR que no recibe nada y no devuelve nada:
          
#include <iostream>
//#include <conio.h>
#include <stdio.h>
#include <iomanip>
using namespace std; 

// Definici�n de la Funci�n Separador 
void separador()
{
     cout<<endl<<"*****************************************"<<endl;
}

int main(){
    separador();
    cout<<"    ***  FACULTAD DE INFORMATICA  ***";
    separador();
    cout<<"        ***  PROGRAMACION II  ***";
    separador();
    cout<<"    ***  Tema del dia: FUNCIONES  ***";
    separador();

//  llamada a la Funci�n Separador, constituye por s� misma una sentencia.
    
    getch();
    return(0);
 }

