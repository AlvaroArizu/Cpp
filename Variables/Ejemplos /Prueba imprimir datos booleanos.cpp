// Programa que muestra imprimir valores booleanos

#include <iostream>
#include <iomanip>
#include <conio.h>
using namespace std;

int main()
{

bool b1, b2;    //  // variables booleanaa b1 y b2 
b1 = true ;   
b2 = false;

cout << "Usando solo cout, valor de variable b1 (verdadera) booleana :"<< b1 << endl ;      // imprime 1
cout << "Usando solo cout, valor de variable b2 (falso) booleana:"<< b2 << endl<<endl ;     // imprime 0

// los valores booleanos NO son imprimibles.

// Boolalpha; escribe los booleanos como ’TRUE’ o ’FALSE’

cout << "Usando BOOLALPHA, Valor booleano de b1: " << boolalpha << b1 << endl ;   // imprime true
cout << "Usando BOOLALPHA, Valor booleano de b2: " << boolalpha << b2 << endl ;   // imprime false

getch();
return(0);

}
