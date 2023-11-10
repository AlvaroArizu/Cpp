/*Escriba una funcion nombrada tiempo() que tenga un parametro en numero entero llamado totalSeg y 3 parametros de referencia enteros nombrados horas, min y seg. Lafuncion es convertir el nro de segudnos trnasmitdo en un numero equivalente de horas, minutos y segundos*/

#include<iostream>
#include<conio.h>

using namespace std;

//Prototipos de la funciones
void tiempo(int, int&, int&, int&);

int main(){
    int totalSeg, horas, min, seg;

    cout<<"Ingrese el nro total de segundos: ";
    cin>>totalSeg;

    //Llamar a la funcion 
    tiempo(totalSeg,horas,min,seg);

    //Imprimir valores
    cout<<"Tiempo equivalente a la cantidad de segundos digitados: "<<endl;
    cout<<"Horas: "<<horas<<endl;
    cout<<"Minutos: "<<min<<endl;
    cout<<"Segundos: "<<seg<<endl;

    getch();
    return 0,
}

//Funciones 
void tiempo(int totalSeg, int& horas, int& min, int& seg){
    horas = (totalSeg / 3600) % 24; //Horas
    min = ((totalSeg - (horas * 3600)) / 60) % 60; //Minutos
    seg = (totalSeg - (horas * 3600 + min * 60)); //Segundos
};