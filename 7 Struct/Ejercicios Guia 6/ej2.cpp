//Defina los tipos, las variables y a carga desde teclado para guardar los datos de los N clientes de un banco. 
//De cada cliente se conoce: nº de cuenta: (8 dígitos), nombre, dirección, fecha de apertura de la cuenta y saldo actual.
//Luego informar:
//1) Los datos de cada cliente.
//2) La cantidad de cuentas con saldo positivo, con saldo negativo y con saldo nulo.

#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <iomanip>

using namespace std;

struct Fecha{
	int dia;
	int mes;
	int anio;
};

struct Clientes{
	long cuenta;
	char nombre[30];
	char direccion[30];
	Fecha fechaApe;
	int saldo;
};

int main(){
	int nroCliente;
	int nulo, pos, neg;
	
	cout<<"Ingrese la cantidad de clientes a guardar: ";
	cin>>nroCliente;
	
	Clientes vecNroCliente[nroCliente];
	
	for(int i=0; i<nroCliente;i++){
		cout<<"Ingrese el nro de cuenta"<<i+1<<" (8 DIGITOS): ";
		cin>>vecNroCliente[i].cuenta;
		
		//Validacion del nro de cuenta 
		while(vecNroCliente[i].cuenta<10000000 || vecNroCliente[i].cuenta>99999999){
			cout<<"ERROR! Numero de cuenta invalido."<<endl;
			cout<<"Ingrese el nro de cuenta "<<i+1<<" (8 DIGITOS): ";
			cin>>vecNroCliente[i].cuenta;
		}
		
		cout<<"Ingrese el nombre: ";
		cin>>vecNroCliente[i].nombre;
		
		cout<<"Ingrese la direccion: ";
		cin>>vecNroCliente[i].direccion;	
		
		cout<<"Ingrese la fecha de apertura de la cuenta: "<<endl;
		cout<<"Dia: ";
		cin>>vecNroCliente[i].fechaApe.dia; 
		cout<<"Mes: ";
		cin>>vecNroCliente[i].fechaApe.mes; 
		cout<<"Anio: ";
		cin>>vecNroCliente[i].fechaApe.anio; 
		
		cout<<"Ingrese el saldo de la cuenta" <<i+1<<" :";
		cin>>vecNroCliente[i].saldo;
	}
	
	for(int i=0; i<nroCliente;i++){
		//Informamos los datos del cleinte
		cout<<"Nro de cuenta "<<i+1<<" :"<<vecNroCliente[i].cuenta<<endl;
		cout<<"Nombre: "<<vecNroCliente[i].nombre<<endl;
		cout<<"Direccion: "<<vecNroCliente[i].direccion<<endl;
		cout<<"Fecha de apertura: "<<vecNroCliente[i].fechaApe.dia<<" /"<<vecNroCliente[i].fechaApe.mes<<" /"<<vecNroCliente[i].fechaApe.anio<<endl;
		cout<<"El saldo de la cuenta "<<i+1<<" :"<<vecNroCliente[i].saldo<<endl;
		cout<<endl;
	}
	    //Se inicializan a fueraaaaaaaa
		nulo= 0;
		pos=0;
		neg=0;
	for(int i =0;i<nroCliente;i++) {
		
		if(vecNroCliente[i].saldo==0){
			nulo++;
		}
		else
			if(vecNroCliente[i].saldo<0){
				pos++;
			}
			else
				neg++;
	}
	cout<<"Clientes Saldo Nulo: "<<nulo<<endl;
	cout<<"Clientes saldo Positico: "<<pos<<endl;
	cout<<"Clientes saldo Negativo: "<<neg<<endl;
	
		
	getch();
	return 0;
}
























