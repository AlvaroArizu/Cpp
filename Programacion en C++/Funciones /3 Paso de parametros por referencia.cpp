/*Paso de parametros por referencia*/

#include<iostream>
#include<conio.h>

using namespace std;

//Prototipo de la funcion 
void valNuevo(int&, int&);

int main(){
    int num1, num2;

    cout<<"Ingrese un numero: ";
    cin>>num1;
    cout<<endl;
    cout<<"Ingrese otro numero: ";
    cin>>num2;

    //Llamamos a la funcion y le mandamos los num1 y num2
    valNuevo(num1, num2);

    //Cambiamos el valor del nro
    cout<<"El nuevo valor de x es: ";
    cin>>num1;
    cout<<endl;
    cout<<"El nuevo valor de y es: ";
    cin>>num2;


    getch();
    return 0;
}

//Funciones 
void valNuevo(int& xnum, int& ynum){
    //Imprimir los valores
    cout << "Valor de X es: " << xnum << endl;
    cout << "Valor de Y es: " << ynum << endl;

    xnum=89;
    ynum=76;
}