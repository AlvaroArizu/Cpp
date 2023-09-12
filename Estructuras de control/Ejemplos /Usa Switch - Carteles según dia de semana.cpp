// Programa que segun el numero del dia de semana, informa un Cartel
// Usa sentencia Switch

#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <iomanip>
using namespace std;

int main(){
	
	int dia;
	cout << "Ingrese el numero de dia ( 1 a 7 ): " << endl;
	cin >> dia;
	
	switch( dia ){
		
		case 1:   cout << "Lunes, comienza la semana" << endl;  break;
		
		case 2: case 3: case 4:   cout << "Dia --> Entre semana" << endl; break;
		
		case 5:   cout << "--> Por fin es viernes!" << endl; 	break;
		
        default:   cout << "--> A disfrutar el fin de semana!" << endl; break;
	}
	
	getch();
	return 0;
}
