# Vectores 
En C++, un vector es una estructura de datos que almacena una colección de elementos del mismo tipo en una secuencia ordenada

- En C++, los elementos de un arreglo (también llamado vector) se numeran desde el 0. El primer elemento tiene el índice 0, el segundo el índice 1 y así sucesivamente. El índice del último elemento en un arreglo de n elementos es n-1.
- En general, estas estructuras se llaman "arreglos". Los "vectores" son arreglos de una dimensión, mientras que las "matrices" son arreglos de 2 o más dimensiones.
- Para declarar un arreglo en C++, se utiliza la siguiente sintaxis:
```css
TipoDeDato nombreDelArreglo[cantidadDeElementos];
```
Donde:
- TipoDeDato es el tipo de dato de los elementos del arreglo.
- nombreDelArreglo es el nombre que se asigna al arreglo.
- cantidadDeElementos es la longitud o cantidad de elementos que tendrá el arreglo.


```cpp
int vec[10];
```
Esto crea un vector llamado vec que puede contener 10 valores enteros, numerados desde el índice 0 hasta el índice 9.

```cpp
// Programa genera un vector con datos que ingresa e imprime el vector


#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <iomanip>
using namespace std;

   
int main(){
   
    int largo,i;
        
   	cout << "Ingrese longitud del vector  ";
	cin >> largo;
	// declaraciÛn del vector de Longitud segun dato ingresado
	int vec[largo];
    
   for( int i = 0; i < largo; i++)  {
	cout << " Ingrese contenido posicion: " << i << "  " ;
	cin >> vec[i];
    }
    
	cout << endl << " Impresion del vector: " << endl;
    for( int i = 0; i < largo; i++)  {
	cout << "Posicion: " << i << " ---> " << vec[i] << endl ;
    }
	
    getch();
	return 0;
}
```