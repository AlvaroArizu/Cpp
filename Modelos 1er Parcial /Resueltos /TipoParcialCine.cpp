#include <iostream>
#include <stdio.h>
#include <conio.h>

//#define CANTSALAS 10
#define CANTSALAS 3
#define TIPOSALAS 4
#define CANTPELI 4
#define TIPOPELI 5
#define NROSALADESDE 10
#define NROSALAHASTA 19


using namespace std;

int main(){

	
	int vecTiposSalas[CANTSALAS];
	int vecCodPeli[CANTPELI], vecDuracionPeli[CANTPELI], vecSalaProyPeli[CANTPELI], vecTipoPeli[CANTPELI];
	int vecCodTiposPeli[TIPOPELI], vecCantPersonasxTipoPeli[TIPOPELI];
	int matCantEntradasxSalaxDia[CANTSALAS][7];
	int i, auxNroSala, auxTipoPeli, pos, auxTipoSala, hayDatos, nroDia, nroSala, cantEntradas, posSala, posDia;
	
	
	for (posSala=0;posSala<CANTSALAS; posSala++){
		for (posDia=0;posDia<7;posDia++){
		
			matCantEntradasxSalaxDia[posSala][posDia]=0;
		}
	}
	
	
	//DETERMINAR PRECIO POR SALA
	double vecPrecioSalas[]={2300, 2700, 3000, 3500};
	
	//GENERAR TIPOS DE PELÍCULAS
	for (i=0;i<TIPOPELI; i++){
		vecCodTiposPeli[i]=i+1;
	}
	
	
	
	
	cout<<"**************************************************************************"<<endl;
	cout<<"********************INGRESO PRECIO POR TIPOS DE SALAS*********************"<<endl;
	cout<<"**************************************************************************"<<endl;
	//INGRESO PRECIO POR TIPOS DE SALAS
	for (i=0;i<TIPOSALAS; i++){
		cout<<"Ingrese precio de sala: ", i+1;
		cout<<vecPrecioSalas[i]<<endl;
	}


	cout<<"**************************************************************************"<<endl;
	cout<<"****************************INGRESO DATOS DE SALAS************************"<<endl;
	cout<<"**************************************************************************"<<endl;

	//INGRESO DATOS DE SALAS
	for (i=0;i<CANTSALAS; i++){
		cout<<"Ingrese numero de sala ("<< NROSALADESDE<<"-"<< NROSALAHASTA<<"): ";
		cin>>auxNroSala;
			while (auxNroSala<NROSALADESDE || auxNroSala>NROSALAHASTA){
			cout<<"El numero de sala no es valido. Ingrese nuevamente ("<< NROSALADESDE<<"-"<< NROSALAHASTA<<"): ";
			cin>>auxNroSala;
		}
		cout<<"Ingrese  Tipo de sala (1: 4D    /    2: D-BOX    /    3: XD    /    4: CONFORT ):";
		cin>>auxTipoSala;
		while (auxTipoSala<1 || auxTipoSala>4){
			cout<<"El tipo de sala no es valido. Ingrese nuevamente  (1: 4D    /    2: D-BOX    /    3: XD    /    4: CONFORT ):";
			cin>>auxTipoSala;
		}
		vecTiposSalas[auxNroSala-10]=auxTipoSala;
	}
	
	cout<<"**************************************************************************"<<endl;
	cout<<"*********************INGRESO DATOS DE PELÍCULAS***************************"<<endl;
	cout<<"**************************************************************************"<<endl;
	//INGRESO DATOS DE PELÍCULAS
	for (i=0;i<CANTPELI; i++){
		cout<<"Ingrese codigo de pelicula: ";
		cin>>vecCodPeli[i];
		cout<<"Ingrese  Duracion: ";
		cin>>vecDuracionPeli[i];
		cout<<"Ingrese tipo de pelicula (1-"<<TIPOPELI<< "): ";
		do {
			cin>>auxTipoPeli;
			pos=0;
			while (pos<TIPOPELI && auxTipoPeli!=vecCodTiposPeli[pos]){
				pos++;
			}
			if(pos==TIPOPELI){
				cout<<"El tipo de pelicula no existe. Ingrese nuevamente (1-"<<TIPOPELI<< "): ";
			}
		} while (pos==TIPOPELI);
		vecTipoPeli[pos]=auxTipoPeli;
	}
	
	cout<<"**************************************************************************"<<endl;
	cout<<"*************************INGRESO DATOS DE VENTAS**************************"<<endl;
	cout<<"**************************************************************************"<<endl;	
	//INGRESO DATOS DE VENTAS
	cout<<"Hay datos para cargar (1: SI / 0: NO ) : ";
	cin>>hayDatos;
	while (hayDatos!=0 && hayDatos!=1){
		cout<<"Opcion invalida. Hay datos para cargar (1: SI / 0: NO ) : ";
		cin>>hayDatos;
	}

	while (hayDatos!=0){
	
		cout<<"Ingrese numero de dia (1 - 7): ";
		cin>>nroDia;
		while (nroDia<1 || nroDia>7){
			cout<<"El numero no es valido. Ingrese nuevamente  (1 - 7):";
			cin>>nroDia;
		}
		
		cout<<"Ingrese numero de sala ("<< NROSALADESDE<<"-"<< NROSALAHASTA<<"): ";
		cin>>nroSala;
			while (nroSala<NROSALADESDE || nroSala>NROSALAHASTA){
			cout<<"El numero de sala no es valido. Ingrese nuevamente ("<< NROSALADESDE<<"-"<< NROSALAHASTA<<"): ";
			cin>>nroSala;
		}
	
		cout<<"Ingrese cantidad de entradas: ";
		cin>>cantEntradas;
			while (cantEntradas<0){
			cout<<"La cantidad no es valida}. Ingrese nuevamente: ";
			cin>>cantEntradas;
		}
		
		matCantEntradasxSalaxDia[nroSala-10][nroDia-1]=matCantEntradasxSalaxDia[nroSala-10][nroDia-1]+cantEntradas;
	
	
		cout<<"Hay datos para cargar (1: SI / 0: NO ) : ";
		cin>>hayDatos;
		while (hayDatos!=0 && hayDatos!=1){
			cout<<"Opcion invalida. Hay datos para cargar (1: SI / 0: NO : ";
			cin>>hayDatos;
		}

	}
	
	//FALTA TERMINAR E INFORMAR TODOS LOS PUNTOS
	
	
	for (posSala=0;posSala<CANTSALAS; posSala++){
		for (posDia=0;posDia<7; posDia++){
			cout<<"Sala: "<<posSala+19<< " Dia "<<posDia+1<< " Cant Entradas Vendidas: "<<matCantEntradasxSalaxDia[posSala][posDia]<<endl;
		}
	}
	
	
	getch();
	return (0);
	
	
	
}
