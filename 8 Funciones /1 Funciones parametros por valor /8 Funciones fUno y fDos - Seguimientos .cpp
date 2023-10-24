// Funciones fUno  y fDos  -  Seguimientos 
          
#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <iomanip>
using namespace std; 

// definición de fDos

int fDos(int par2)
{
    int resu;
    resu = par2*2;
    return resu;
}

// definición de fUno

int fUno(int par1)
{
    int doble;
    doble = fDos(par1)+10;
    
    return doble;
}


int main ()
{
    int a=6;
    int b=7;
    int resu;

   resu= fUno(a) + fDos(b);

    cout << "Resu vale: " << resu;
    
    getch();
    return 0;
}


