#include<iostream>
#include<stdio.h>
#include<conio.h>
#include<iomanip>

using namespace std;

int main (void){

	//defino variables
	
	int i, j, vendedor, articulo,cantVendidas, c=8, f=10;
	
	//defino arreglos
	
	int matVxA[f][c],listaPrecios[c],totalVentasVendedor[f];
	
	for(i=0;i<f;i++){//puede ser una matriiz acumuladora asi que la inicio en 0
		for(j=0;j<c;j++){
			matVxA[i][j]=0;
		}
	}
	
	//ingreso de datos de la lista de precios
	
	for(j=0;j<c;j++){
		
		cout<<"ingrese el precio del articulo "<<j+1<<": ";
		cin>>listaPrecios[j];
		
	}
	
	cout<<endl;
	
	//ingreso de datos ventas
	
	cout<<"ingrese el numero del vendedor ";
	cin>>vendedor;
	
	cout<<endl;
	
	while((vendedor<=1)||(vendedor>=10)){
		
		cout<<"ingrese el codigo del articulo";
		
		do{//valido que el rango del articulo sea entre 1 y 8
			cin>>articulo;
			cout<<endl;
			
			if((articulo<1)||(articulo>8)){
				cout<<"codigo del articulo mal ingresado, por favor volver a ingresarlo";
			}
			
		}while((articulo<1)||(articulo>8));
		
		cout<<"ingrese la cantidad vendida del articulo "<<articulo<<"por el vendedor "<<vendedor;
		cin>>cantVendidas;
		
		//verifico que el vendedor no alla vendido nada aun de este articulo
		if(matVxA[vendedor][articulo]==0){
			matVxA[vendedor][articulo]=cantVendidas;	
		}
		else{//en el caso de que ya alla vendido de ese articulo, lo acumulo
			matVxA[vendedor][articulo]+=cantVendidas;	
		}
		
	}
	
	//punto |1|
	
	for(j=0;j<c;j++){//muestro la cantidad vendida de cada articula por cada vendedor
		for(i=0;i<f;i++){
			cout<<"El vendedor "<<i+1<<"vendio el articulo "<<j+1<<": "<<matVxA[i][j]<< " veces";
			cout<<endl;
		}
	}
	cout<<endl;

	//punto |2|
	
	for(i=0;i<f;i++){//opcion con vector
		
		totalVentasVendedor[i]=0;
		for(j=0;j<c;j++){
			
			totalVentasVendedor[i]+=matVxA[i][j];
		}
	}
	
	for(i=0;i<f;i++){
		cout<<"el sueldo del vendedor "<<i+1<<"es: $"<<(double)totalVentasVendedor[i]*5/100;
		cout<<endl;
	}

	//opcion 2 sin vector y para mi mas eficiente xq no genero mas variables, 
	//ni separo espacio de memoria 
	
	
	for(i=0;i<f;i++){
		
		vendedor=0;//reciclo variable para usarla como acumulador
		for(j=0;j<c;j++){
			
			vendedor+=matVxA[i][j];
		}
		cout<<"el sueldo del vendedor "<<i+1<<"es: $"<<(double)vendedor*5/100;
		cout<<endl;
	}
	










}