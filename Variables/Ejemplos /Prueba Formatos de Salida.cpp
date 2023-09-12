// Programa que muestra formatos de Salida

#include <iostream>
#include <iomanip>
#include <conio.h>
using namespace std;

int main()
{

// el REDONDEO es a partir de 6. Con 5 no redondea.

cout << "La constante 4.56 Impresa con setprecision(2) de: " << setprecision(2) << 4.56 << endl ;     // escribe   4.6  Redondea 
cout << "La constante 4.55 Impresa con setprecision(2) de: " << setprecision(2) << 4.55 << endl ;     // escribe   4.5  NO Redondea 

float a;

a=1.555;
cout << "La variable a (contenido 1.555) impresa con setprecision(3) da: " << setprecision(3)<< a << endl;  // imprime 1.55 NO redondea
a=1.556;
cout << "La variable a (contenido 1.556) impresa con setprecision(3) da: " << setprecision(3)<< a << endl;  // imprime 1.56
cout << endl;

cout << "La constante 4.567 Impresa con setprecision(3) de: " << setprecision(3) << 4.567 << endl ;     // escribe   4.57
cout << "La constante 4.444 Impresa con setprecision(3) de: " << setprecision(3) << 4.444 << endl ;     // escribe   4.44
cout << endl;

cout << "Uso de setw en 5 lugares: " << endl;
cout << setw(5) << 234 << setw(5) << 567 << setw(5) << 8910 <<  endl;     // con setw(5) escribe cada valor en 5 lugares
// setw se puede usar para imprimir datos encolumnados


getch();
return(0);

}
