#include <iostream>
#include <conio.h>

#define CANT_RAZAS 4

using namespace std;

int main(){
	
	//DEFINICION DE VARIABLES	
	int cantVacas, i, j, respuesta;	
	int auxRazaVaca;
	int idProduccion, idVaca, litrosObtenidos;
	int totalLitros, vacaMenorLitros, vacaMayorLitros, contVacasPromedioSuperado;
	bool flagRaza;
	
	
		//INGRESO DE DATOS
	
	//INGRESO CANTIDAD DE VACAS
	
	cout << "Ingrese la cantidad de vacas total: ";
	cin >> cantVacas;
	
	//DEFINICION DE VECTORES
	
	int vecIdVaca[cantVacas], vecRazaVaca[cantVacas], vecLitrosMensuales[cantVacas], vecAcumLitros[cantVacas];
	int vecRaza[CANT_RAZAS];
	int vecAcumRaza[CANT_RAZAS], vecContRegistros[cantVacas];
	
	
	//INICIALIZACION DE VARIABLES
	
	vecRaza[0] = 10;
	vecRaza[1] = 20;
	vecRaza[2] = 30;
	vecRaza[3] = 40;
	
	totalLitros = 0;
	contVacasPromedioSuperado = 0;
	
	for(i = 0; i < cantVacas ; i++){
		vecAcumLitros[i] = 0;
		vecContRegistros[i] = 0;
	}
	
	for(i = 0; i < CANT_RAZAS ; i++){
		vecAcumRaza[i] = 0;
	}
	
	//INGRESO DATOS DE VACAS
	for(i = 0; i < cantVacas ; i++){
		cout << "Ingrese el id de la vaca " << i << ": ";
		cin >> vecIdVaca[i];
		
		cout << "Ingrese la raza de la vaca " << i << " (10/20/30/40): ";
	
		do	{
			cin >> auxRazaVaca;
			j = 0;
			
			while(j < CANT_RAZAS && auxRazaVaca != vecRaza[j]){
				
				j++;
			}
			
			if(j == CANT_RAZAS){
				cout << "Raza de la vaca incorrecta! Ingrese la raza nuevamente (10/20/30/40): ";				
			}
			
		}while(j == CANT_RAZAS);
				
		vecRazaVaca[i] = auxRazaVaca;
						
		cout << "Ingrese el promedio de leche de la vaca " << i << ": ";
		cin >> vecLitrosMensuales[i];
		
		while(vecLitrosMensuales[i] < 0){
			cout << "PROMEDIO INCORRECTO! DEBE SER MAYOR A 0!" << endl << endl;
			cout << "Ingrese nuevamente el promedio de leche de la vaca " << i << ": ";
			cin >> vecLitrosMensuales[i];
			
		}
	}
	
	//INGRESO DE DATOS DE PRODUCCION
	cout << "Hay datos para cargar? (1: SI, 2: NO): ";
	cin >> respuesta;

	while(respuesta == 1 && respuesta != 2){
		
		cout << "Ingrese el id de la produccion: ";
		cin >> idProduccion;
		
		cout << "Ingrese la identificacion de la vaca";	
				
		do	{
			cin >> idVaca;
			j = 0;
			
			while(j < cantVacas && idVaca != vecIdVaca[j]){				
				j++;
			}
			
			if(j == cantVacas){
				cout << "Identificacion de la vaca incorrecta! Ingrese la identificacion nuevamente: ";	
			}
			
		}while(j == cantVacas);
		
		
		cout << "Ingrese la cantidad de litros obtenidos: ";
		
		do{			
			cin >> litrosObtenidos;
			
			if(litrosObtenidos<= 0){
				cout << "Cantidad de litros incorrecta! Debe ser mayor a 0" << endl << endl;
				cout << "Ingrese nuevamente la cantidad de litros obtenidos";
			}
			
		}while(litrosObtenidos <= 0);
		
		vecAcumLitros[j] += litrosObtenidos;
		vecContRegistros[j]++;
		
		cout << "Hay datos para cargar? (1: SI, 2: NO): ";
		cin >> respuesta;
	}
	
	//PUNTO 1
	
	cout << endl;
	
	cout << "La cantidad de vacas total es " << cantVacas;
	
	cout << endl;
	
	//PUNTO 2
	
	cout << endl;
	
	for(i = 0; i < cantVacas ; i++){
		cout << "La vaca " << i << " dio " << vecAcumLitros[i] << " litros";
		cout << endl;
	}
	
	cout << endl;
	
	//PUNTO 3
	
	cout << endl;
	
	for(i = 0; i < cantVacas; i++){
		totalLitros += vecAcumLitros[i];
	}
	
	cout << "En total las vacas dieron " << totalLitros << " litros de leche";
	
	cout << endl;
	
	//PUNTO 4
	
	cout << endl;
	
	vacaMayorLitros = 0;
	
	for(i = 1; i < cantVacas; i++){
		if(vecAcumLitros[i] > vecAcumLitros[vacaMayorLitros]){
			vacaMayorLitros = i;
		}
	}
	
	cout << "La vaca que dio mas leche es la " << vacaMayorLitros << " con un total de " << vecAcumLitros[vacaMayorLitros] << " litros";
	
	cout << endl;
	
	//PUNTO 5
	
	cout << endl;
	
	vacaMenorLitros = 0;
	
	for(i = 1; i < cantVacas; i++){
		if(vecAcumLitros[i] < vecAcumLitros[vacaMenorLitros]){
			vacaMenorLitros = i;
		}
	}
	
	cout << "La vaca que dio menos leche es la " << vacaMenorLitros << " con un total de " << vecAcumLitros[vacaMenorLitros] << " litros";
	cout << endl;
	
	
	//PUNTO 6
	cout << endl;
	
	for(i = 0; i < CANT_RAZAS; i++){
		for(j = 0; j < cantVacas; j++){
			if(vecRazaVaca[j] == vecRaza[i]){
				vecAcumRaza[i] += vecAcumLitros[j];
			}
		}
		cout << "la raza " << vecRaza[i] << " dio " << vecAcumRaza[i] << " litros";
	}
	
	cout << endl;
	
	
	//PUNTO 7
	
	for(i = 0; i < cantVacas ; i++){
		cout << endl;
		cout << " La vaca " << i << "tuvo " << vecContRegistros[i] << " registros";
		cout << endl;
	}
	
	cout << endl;
	
	//PUNTO 8
	
	for(i = 0; i< cantVacas ; i++){
		if(vecAcumLitros[i] > vecLitrosMensuales[i]){
			contVacasPromedioSuperado++;
		}
	}
	
	cout << "Hubo " << contVacasPromedioSuperado << " vacas que superaron su produccion promedio de leche";
	
	cout << endl;
	
	getch();
	return 0;
}