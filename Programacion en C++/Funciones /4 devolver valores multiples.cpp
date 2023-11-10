//Devolver valores multiples
#include<iostream>
#include<conio.h>

using namespace std;

//Prototipo de funciones
void calcular(int, int, int&, int&);

int main(){
    int num1, num2, suma, producto;
    suma=0;
    producto=0;

    //Ingreso de datos
    cout<<"Digite el primer numero: "; cin>>num1;
    cout<<endl;
    cout<<"Digite el segundo numero: "; cin>>num2;

    //Llamamos la funcion y le pasamos los parametros
    calcular(num1, num2, suma, producto);
    cout<<endl;
    //Imprimir resultados
    cout<<"La suma es: " <<suma<<endl;
    cout<<"El producto es: "<<producto<<endl;

    getch();
    return 0;
}

//Funciones 
void calcular(int num1, int num2, int& suma, int& producto){
    //Sumar numeros
    suma = num1 + num2;
    producto=num1 * num2;
    //Imprimir resultados
    cout<<"La suma es: " <<suma<< endl;
    cout<<"El producto es: " <<producto<< endl;
};