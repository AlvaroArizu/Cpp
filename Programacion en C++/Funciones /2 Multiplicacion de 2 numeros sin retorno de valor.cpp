//Multiplicacion de 2 numeros sin retorno de valor 
//Esribir ina funcion llamada mult()que acepte dos numeros en punto flotante como parametros
//multiplicar estos 2 numeros y despliegue el resultado


#include<iostream>
//#include<conio.h>

using namespace std;

//Prototipos de funciones
void pedirDatos();
void mult(float a, float b);

float num1, num2;

int main(){
    pedirDatos();
    mult(num1, num2);

    getch();
    return 0;
}

void pedirDatos(){
    
    cout<<"Ingrese un numero: ";
    cin>>num1;
    cout<<endl;
    cout<<"Ingrese otro numero: ";
    cin>>num2;
};
void mult(float a, float b){
    float result = a * b;
    cout<<"La multiplicacion es: "<<result;
};