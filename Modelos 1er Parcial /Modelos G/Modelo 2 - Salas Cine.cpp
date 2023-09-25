#include <iostream>
#include<stdio.h>
#include<iomanip>
#include<conio.h>


#define PELICULAS 4
#define SALAS 5
#define TIPOSALAS 4
#define DIAS 7
#define TIPOSPELICULAS 5


using namespace std;

int main (void){
	
	int i,f,s,c, dia,numero, nroSala,sala, tipoPeli, entradasVendidas, maxDuracion;
	
	int vecsalas[SALAS], tipoSala[SALAS], codPelicula[PELICULAS], duracionPelicula[PELICULAS], tipoPelicula[PELICULAS],salaPelicula[PELICULAS],cantPeliculasXTipo[TIPOSPELICULAS], recaudacionPorSala[SALAS], recaudacionPonDia[DIAS];
	
	int precio[TIPOSALAS];
	int ventas[DIAS][SALAS];
	
	// inicializacion
	
	precios[0]= 2300;
	precios[1]=2700;
	precios[2]=3000;
	precios[3]=3500;
	
	for(f=0;f<DIAS;f++){
		for(c=0;c<SALAS;c++){
			ventas[f][c]=0;
		}
	}
	
	
	for(i=0;i<SALAS;i++){
		vecsalas[i] =0;
		recaudacionPorSala[i]=0;
		tipoSala[i]=0;
		recaudacionPorSala[i]=0;
	}
	
	for(i=0;i<PELICULAS;i++){
		codPelicula[i] =0;
		duracionPelicula[i]=0;
		tipoPelicula[i]=0;
	}
	
	for(i=0;i<TIPOSPELICULAS;i++){
		cantPeliculasXTipo[i] =0;
	}
	
	for (i=0;i<DIAS;i++){
		recaudacionPonDia[i]=0;
	}
	
	// INGRESO DE DATOS
	
	// DE CADA SALA:
	for (i=0; i< SALAS; i++){
		cout << "Ingrese el numero de sala (de 10 a 19): ";
		cin>> nroSala;
	
		while(nroSala <10 || nroSala > 19){
			cout << "ERROR!. Ingrese el numero de sala (de 10 a 19): ";
			cin>> nroSala;
		}
		vecsalas[i]= nroSala;
		
		cout << "Ingrese el tipo de sala (1: 4D, 2: D-BOX, 3: XD, 4: CONFORT): ";
		cin>> sala;
		while (sala <0 || sala >4 ){
			cout << "ERROR!.Ingrese un tipo de sala VALIDO (1: 4D, 2: D-BOX, 3: XD, 4: CONFORT): ";
			cin>> sala;
		}
		
		tipoSala[i]=sala;
	}
	cout << endl;
	
	for(i=0; i<SALAS; i++){
		cout<< "La Sala " << vecsalas[i] << " es del tipo " << tipoSala[i];
		cout<< endl;
	}
	cout<< endl;
	
	// DE CADA PELICULA
	for(i=0; i< PELICULAS; i++){
		cout<< "Ingrese el CODIGO de la pelicula: ";
		cin>> codPelicula[i];
		
		cout <<"Ingrese la DURACION en minutos de la pelicula: ";
		cin>> duracionPelicula[i];
		
		cout<<"Ingrese el TIPO de la pelicula (1:infantil, 2:comedia, 3: drama, 4: ficción 5: Otra): ";
		cin>> tipoPeli;
		
		while (tipoPeli <1 || tipoPeli > 7){
		
			cout<<"ERROR!. Ingrese el TIPO de la pelicula (1:infantil, 2:comedia, 3: drama, 4: ficción 5: Otra): ";
			cin>> tipoPeli;
			
		}
		tipoPelicula[i] = tipoPeli;
		
		cantPeliculasXTipo[tipoPeli -1]++;
		
		cout << "Ingrese el NUMERO de Sala: ";
		
		do{
			cin>> nroSala ;
			s=0;
			
			while(nroSala <10 || nroSala > 19){
			cout << "ERROR!. Ingrese el numero de sala (de 10 a 19): ";
			cin>> nroSala;
			}
			
			while(s<SALAS && nroSala != vecsalas[s]){
				s++;
			}
			if(s==SALAS){
				cout<<"ERROR!. Ingrese un numero de sala valido: ";
			}
		}while(s==SALAS);
		
		cout<< endl;
		salaPelicula[s]= nroSala;
	}
	
	for(i=0;i<PELICULAS;i++){
		cout<<setw(4)<< tipoPelicula[i];
		
	}
	
	// INGRESO DE VENTAS
	
	cout << endl;
	
	cout<< "Ingrese numero de dia (1 a 7 - 0 para finalizar): ";
	cin>> dia;
	
	while (dia<0 || dia>7){
		cout<<"ERROR!. Ingrese un numero de dia VALIDO (1 a 7 - 0 para finalizar): ";
		cin >> dia;
	}
	
	while (dia !=0){
		cout << "Ingrese numero de sala: ";
		
		do{
			cin>> nroSala ;
			i=0;
			
			while(nroSala <10 || nroSala > 19){
			cout << "ERROR!. Ingrese el numero de sala (de 10 a 19): ";
			cin>> nroSala;
			}
			
			while(i<SALAS && nroSala != vecsalas[i]){
				i++;
			}
			if(i==SALAS){
				cout<<"ERROR!. Ingrese un numero de sala valido: ";
			}
		}while(i==SALAS);
		cout<< endl;
	
		cout<< "Ingrese la cantidad de entradas vendidas: ";
		cin >>entradasVendidas;
		
		ventas[dia-1][i] = entradasVendidas;
		
		recaudacionPorSala[i] += ()
		
		cout<< "Ingrese numero de dia (1 a 7 - 0 para finalizar): ";
		cin>> dia;
	}
	cout << endl;
	
	
	//1)	Cuántas películas de cada tipo se proyectaron en la semana
	cout<< "* 1)"<<endl;
	cout<<"Cantidad de peliculas proyectadas de cada tipo"<<endl;;
	
	for(i=0;i<TIPOSPELICULAS;i++){
		cout << "Tipo " <<i +1<< " : " << cantPeliculasXTipo[i]<< " peliculas."<<endl; 
	}
	
	//2)	Datos de la película de mayor duración
	
	cout<<endl<<"Datos de la película de mayor duración. "<<endl;
	
	for(i=0; i<PELICULAS; i++){
		if (i==0){
			maxDuracion =0;
		}
		else{
			if (duracionPelicula [i] > duracionPelicula[maxDuracion]){
				maxDuracion = i;
			}
		} 
	}
	
	cout<< "La pelicula de mayor duracion es: Codigo " <<codPelicula[maxDuracion] <<" tipo " << tipoPelicula[maxDuracion] << " sala "<< salaPelicula[maxDuracion]<<" con " << duracionPelicula[maxDuracion]<< " minutos.";
	
	cout <<endl;
	
	
	// 3)	Cantidad de entradas vendidas por cada sala, en cada día de la semana
	// ventas[DIAS][SALAS]
	
	
	// imprimo 
	for(f=0;f<DIAS;f++){
		for(c=0;c<SALAS;c++){
			cout<<"Sala " <<vecSalas[c] << " dia "<< f +1 << " - Cant de ventas: "<<ventas[f][c];
		}
		cout<<endl;
	}
	cout<<endl;
	
	
	getch();
	return 0;
}
