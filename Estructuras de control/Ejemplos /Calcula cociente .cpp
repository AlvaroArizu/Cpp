// Programa calcula  e informa el cociente

#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <iomanip>
using namespace std;


int main () {
	 int ddo, dsor, coc;
	 cout << "Ingrese dividendo:  " ;
	 cin >> ddo;
	 cout << "Ingrese divisor:  ";
	 cin >> dsor; 
	 	 
	 if ( dsor != 0 )
            {  
		coc = ddo / dsor;
		cout << endl << " El cociente es:  " << coc;
	     }
	   else  {
	cout << endl << " ERROR:  el divisor es cero "; }
	
getch();
return(0);
    }
