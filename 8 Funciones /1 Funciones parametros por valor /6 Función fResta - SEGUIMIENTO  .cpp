// Función fRESTA  
          
#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <iomanip>
using namespace std; 


int fResta(int uno, int dos)
{
    int aux;
    aux=uno-dos;
    
    return aux;
    
}

int main(){
    int uno, dos, resta;
    
    uno=100;
    dos=20;
    
    resta=  fResta(uno,dos);    //  1era. llamada a la función fResta
    
    cout<<"1er. llamado: La resta es: " << resta << endl;
    
    /*
    
    resta=  fResta(dos,uno);    //  2da. llamada a la función fResta
    
    cout<<"2do. llamado: La resta es: " << resta;
    */
    
    
    getch ();
    return 0;
}


