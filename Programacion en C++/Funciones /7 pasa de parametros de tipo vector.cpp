/*Paso de parametro de tipo vector
-Parametro de la funcion:
    void nombreFuncion(tipo nombreVec[], int tamanoVec)

-Llamar a la funcion 
    void nombreFuncion(nombreVec, tamanoVec)

*/
//Cuadros de los elementos del vectos

#include<iostream>
#include<conio.h>

#define TAM 5

using namespace std;

//Prototipos de la funciones
void cuadrado(int vec[], int)
void muestra(int vec[], int)


int main(){
    int vec[TAM]={1,2,3,4,5};
    //Mostrar vector original
    cout<<"Vector Original:\n";
    for(int=i;i<TAM;i++){
        cout<<vec[i];
    }

    //Llamar la funcion 
    cuadrado(vec,TAM);

    cout<<"Vector al cuadrado";
    muestra(vec, TAM);

    getch();
    return 0,
}

//Funcion para elevar al cuadrado
void cuadrado(int vec[], int tam){
    for(int i=0;i<tam;i++){
        vec[i]*=vec[i];

    }
};
//Funcion para mostrar los valores
void mostrarValor(int vec[], int tam){
    for(int i=0;i<tam;i++){
        cout<<"Elemento "<<i+1<<": "<<vec[i]<<endl;
    }
};
