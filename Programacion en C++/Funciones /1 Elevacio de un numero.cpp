/*
Escriba una funcion futpot() que eleve un numero entero que se le transmita a una potecnia entero positiva y despliegue el resultado.
El numero entero positivo debera ser el segudno valor transmitido a la funcion.
*/

#include<iostream>
#include<conio.h>

using namespace std;

//Prototipo de funciones
//void pedirDatos();
//void funtpot(int x, int y);

int num1, num2;
int main(){
    pedirDatos();
    funtpot(num1, num2);

    getch();
    return 0;
}

//Funciones 
void pedirDatos(){
    cout<<"Ingrese un numero: ";
    cin>>num1;
    cout<<endl;
    cout<<"Ingrese otro numero: ";
    cin>>num2;
};
void funtpot(int x, int y){
    long resultado =1;
    for (int i; i<=y;i++){
        resultado *=x;
    }
    cout<<"El resultado es: "<<resultado<<endl;
};