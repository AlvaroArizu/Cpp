// Programa con  FOR sin datos - Ver qué hace... 

#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <iomanip>
using namespace std;

int main ()         
{
    int i= 1;
    
    for( ; ; )    {
              cout << "Hola  "<< i++ << endl;
	}

    
    getch();    

    return(0);
}
