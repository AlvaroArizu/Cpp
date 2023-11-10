# Que es una funciones?
Una funciones realiza un tarea concreta y puede ser diseñada y depurada de manera independiente al resto del codigo

## Sintaxis 
```cpp
tipo nombre(tipo var1, tipo var2,...,tipo varn){
    conjunto de instrucciones
};
```

### Ejemplos
```cpp
int numMax(int x, int y)
```
```cpp
double intercambio(double x, double y)
```
```cpp
void desplegar(float x, flot x)
```
### Ejeplo encontrar el mayor de 2 numeros
```cpp
#include<iostream>
#include<conio.h>

using namespace std;

//Prototipo de funcion
//int encontrarax(int x, int y);

int main(){
    int n1, n2;
    int mayor;

    cout<<"Digite 2 numeros: ";
    cin>>n1>>n2;

    //Llamamos a la funcion
    mayor=encontrarMax(n1, n2);

    cout<<"El mayor de los 2 numeros es: ";
    cout<<mayor;

    getch();
    retunr 0;
}

//Definicion de funcion
int encontrarMax(int x, int y){
    int numMax;

    if(x>y){
        numMax = x;
    }
    else{
        numMax = y;
    }

    return numMax;
};
```