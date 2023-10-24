// Programa que dado un numero de mes informa la cantidad de dias  
 

#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <iomanip>
using namespace std;
  

int main(){
    // Definición de vector de 12 posiciones enteras
    // Contiene cantidad de días de cada mes para anio no bisiesto
    
    int vecDiasMes[]={31,28,31,30,31,30,31,31,30,31,30,31};
    
    int nroMes;
    
    do {
	cout << "De que numero de mes quiere saber la CANTIDAD de Dias ? ";
	cin >> nroMes;
    }
    while ((nroMes<1) || (nroMes>12));
    
    cout << endl << "El mes ";
    
   	switch( nroMes ){
		case 1:   cout << "Enero" ;  break;
		case 2:   cout << "Febrero" ;  break;
		case 3:   cout << "Marzo" ;  break;
		case 4:   cout << "Abril" ;  break;
		case 5:   cout << "Mayo" ;  break;
		case 6:   cout << "Junio" ;  break;
		case 7:   cout << "Julio" ;  break;
		case 8:   cout << "Agosto" ;  break;
		case 9:   cout << "Septiembre" ;  break;
		case 10:   cout << "Octubre" ;  break;
		case 11:   cout << "Noviembre" ;  break;
		case 12:   cout << "Diciembre" ;  break;
    	}
	cout << " tiene " << vecDiasMes[nroMes-1] << " dias. " << endl;
	
    getch();
	return 0;
}










