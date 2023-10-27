#include<iostream>
#include<iomanip>
#include<conio.h>
#include<stdio.h>
#define F 25
#define C 10
using namespace std;

int main (void){
	//declaracion de variables
	int i,j,nroVenta,nroLegajo,codModelo,max;
	
	
	
	
	//declaracion de arreglos
	
	int matContVxA[F][C],preciosAutos[C],numLegajos[F],totalAutosVendidos[C],totalVentasVendedor[F];
	double cuitVendedores[F];
	
	for(i=0;i<F;i++){
		for(j=0;j<C;j++){
			matContVxA[i][j]=0;
		}
	}
	
	//entrada de datos 1
	for(i=0;i<F;i++){
		
		do{
			
			cout<<"Ingrese el numero de legajo del vendedor "<<i<<": "<<endl;
			cin>>numLegajos[i];
			
		}while((numLegajos[i]<1000)&&(numLegajos[i>2000]));
		
		cout<<endl; 
		
		cout<<"ingrese el cuit del vendedor "<<numLegajos[i]<<":(11 digitos) "<<endl;
		cin>>cuitVendedores[i];
			
		while((cuitVendedores[i]<10000000000)||(cuitVendedores[i]>100000000000))
		{	
			cout<<"Ingreso un valor de cuit  erróneo. Intente nuevamente ingresar el cuit para  "<<numLegajos[i]<<":(11 digitos) "<<endl;
			cin>>cuitVendedores[i];	
		}
	
	
		cout<<endl;
	}
	
	cout<<endl;
	
	for(j=0;j<C;j++){
		
		cout<<"ingrese el precio del auto "<<j<<": "<<endl;
		cin>>preciosAutos[j];
	}
	
	cout<<endl<<"ingrese numero de venta ";
	cin>>nroVenta;
	
	while(nroVenta!=0){
		
		do{
			
			do{
			
				cout<<"Ingrese el numero de legajo del vendedor "<<i<<": "<<endl;
				cin>>nroLegajo;
			
			}while((numLegajos[i]<1000)&&(numLegajos[i>2000]));
		
			cout<<endl;
			
			i=0;
			while((i<F)&&(numLegajos[i]==nroLegajo)){
				i++;
			}
			
			if(i==F){
				cout<<"numero de legajo incorrecto"<<endl;
			}
			
		}while(i==F);	
			
		do{
			cout<<"ingrese el codigo del modelo del auto"<<endl;
			cin>>codModelo;	
		
			while((j<C)&&(codModelo==j)){
				j++;
			}
			
			if(j==C){
				
				cout<<"el codigo del modelo del auto es incorrecto"<<endl;
				
			}
		}while(j==C);
		matContVxA[i][j]++;
		
	}
	
	//punto 1
	
	for(i=0;i<F;i++){
		totalVentasVendedor[i]=0;
		for(j=0;j<C;j++){
			
			totalVentasVendedor[i]+=matContVxA[i][j];
			
		}
		
		cout<<"la cantidad de autos vendidos del vendedor "<<numLegajos[i]<<" es de:"<<totalVentasVendedor[i]<<" autos"<<endl;
	}
	
	//punto 2
	
	for(j=0;j<C;j++){
		
		totalAutosVendidos[j]=0;
		
		for(i=0;i<F;i++){
			
			totalAutosVendidos[j]+=matContVxA[i][j];
			
		}
		
		cout<<"la cantidad de autos vendidos del modelo "<<j<<" es de:"<<totalAutosVendidos[j]<<" autos"<<endl;
	}
	
	//punto 3
	
	codModelo=0;
	
	for(j=0;j<C;j++){
		
		
		for(i=0;i<F;i++){
			
			codModelo+=matContVxA[i][j]*preciosAutos[j];
			
		}	
	}
	
	cout<<"el monto total de la agencia vendida durante el mes es de: $"<<codModelo;
	
	//punto 4
	
	max=0;
	for(j=1;j<C;j++){
		
		if(totalAutosVendidos[j]>totalAutosVendidos[max]){
			max=j;
		}
		
	}
	
	cout<<"El modelo de autos mas vendidos es "<<max<<" con un total de "<<totalAutosVendidos[max]<<" autos"<<endl;
	
	//punto 5
	
	for(i=0;i<F;i++){
		cout<<"para el modelo mas vendido "<<max<<" el vendedor "<<numLegajos[i]<<" vendio "<< matContVxA[i][max]<<" autos"<<endl;
	}
	
	//punto 6
	
	max=0;
	for(i=1;i<F;i++){
		
		if(totalVentasVendedor[j]>totalVentasVendedor[max]){
			max=i;
		}
		
	}
	
	cout<<"El vendedor con mas ventas es "<<numLegajos[max]<<" con un total de "<<totalVentasVendedor[max]<<" ventas"<<endl;
	
	
	
	
}//cierra el main
	
	
		
	
	
	
	
	
	
	
