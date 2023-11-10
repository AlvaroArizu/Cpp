#include<iostream>
#include<conio.h>

using namespace std;

//Prototipo de la funcion
void intercambiar(int&, int&)

int main(){
    int num1=10, num2=20

    cout<<"El valor original del 1er nro es: ";
    cin>>num1;
    cout<<endl;
    cout<<"El valor original del 2do nro es: ";
    cin>>num2;
    cout<<endl;
    //Llamada a la función para intercambiar los valores
    intercambiar(num1, num2);
    //Imprimimos el nuevo valor
    cout<<"Nuevo valor del 1er nro: "<<num1<<endl;
    cout<<"Nuevo valor del 2do nro: "<<num2<<endl;


    getch();
    return 0;
}

void intercambiar(int& num1, int& num2){
    //Intercambiamos los valores sin usar una variable auxiliar
    int aux;
    aux = num1;
    num1 = num2;
    num2 = aux;
};