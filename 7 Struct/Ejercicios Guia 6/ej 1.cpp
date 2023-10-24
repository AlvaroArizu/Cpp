//Hacer un programa que dados dos registros conteniendo día, mes y año, devuelva la cantidad de días 
//transcurridos entre ambas fechas. Considerar que la segunda fecha es posterior a la primera.

#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <iomanip>

#define REG 2
using namespace std;

struct Fecha{
	int dia;
	int mes;
	int anio;
};


int main(){
	
	Fecha vecFecha[REG];
	
	//Ingreso de datos
	for (int i=0; i<REG; i++){
		cout<<"Ingrese la fecha del registro: "<<i+1<<endl;
		cout<<"Dia: ";
		cin>>vecFecha[i].dia;
		
		cout<<"Mes: ";
		cin>>vecFecha[i].mes;
		
		cout<<"Año: ";
		cin>>vecFecha[i].anio;
	}
	
	//Mostramos los datos  
	for(int i=0;i<REG;i++){
		cout<<"Registro "<<i+1<<" :";
		cout<<vecFecha[i].dia<<"/"<<vecFecha[i].mes<<"/"<<vecFecha[i].anio<<endl;
	} 	
	
	
	
	
	
	getch();
	return 0;
}