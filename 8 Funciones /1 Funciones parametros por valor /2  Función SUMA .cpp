// Función SEPARADOR que no recibe nada y no devuelve nada:
          
#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <iomanip>
using namespace std; 

// Definición de la Función SUMA 
int  suma (int a, int b)
{
	int c;
	c = a + b; 
	return c;

}


int main(){
    
    int uno, dos, tres, cuatro, sum1, sum2;
    
    cout <<  "ingrese los dos PRIMEROS numeros a sumar: " << endl;
    cin >> uno;
    cin >> dos;
    
    sum1 = suma(uno,dos);   // 1era. LLAMADA o INVOCACIÓN a la Función SUMA
    
    cout << "La suma de los dos PRIMEROS numeros es:  " << sum1 << endl << endl;
    
    cout << endl << "ingrese los dos SEGUNDOS numeros a sumar: " << endl;
    cin >> tres;
    cin >> cuatro;
    
    sum2 = suma(tres,cuatro);   // 2da. LLAMADA o INVOCACIÓN a la Función SUMA
    
    cout << "La suma de los dos SEGUNDOS numeros es:  " << sum2;
    
    getch();
    return(0);
 }

