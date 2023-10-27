#include<iostream>
#include<iomanip>
#include<conio.h>
#include<stdio.h>
using namespace std;

int main(void){
	
	//declaracion de variables
	
	int i, j, sala=10, tSala=4, dias=7, tPelicula=5, resp, codPelicula,respPeli, respSala, c, dim, acum, maxDuracion, maxPelicula, max;
	
	//declaracion de arreglos
	
	int tiposDsala[sala], precioSala[tSala]{2300,2700,3000,3500},matContSxP[sala][tPelicula], matAcumEntradas[sala][dias];
	
	//inicio en 0 contadores/acumuladores y arreglos contadores/acumuladores
	
	for(i=0;i<sala;i++){
		for(j=0;j<tPelicula;j++){
			matContSxP[i][j]=0;
		}
	}
	
	for(i=0;i<sala;i++){
		for(j=0;j<dias;j++){
			
			matAcumEntradas[i][j]=0;	
			
		}
	}
	
	//ingreso de datos 1
	
	for(i=0;i<sala;i++){
	
		
		
		cout<<"ingrese que tipo de sala es la sala "<<i+10<<": ";
		
		do{
		
			cin>>respSala;
			
			
			j=0;
			
			while((i<tSala)||(respSala!=i+1)){
				j++;
			}
			
			if(j==tSala){
				
				cout<<"tipo de sala no encontrada, por favor vuelva a ingresarla"<<endl;
			}
		}while(j==tSala);
		
		cout<<endl;
		
		tiposDsala[i]=precioSala[respSala-1];
	}
	
	
	//ingreso de datos 2
	
	cout<<endl<<endl;

	do{
		
		cout<<"hay datos de pelicula para ingresar?(1:SI/0:NO) ";
		cin>>resp;
	}while((resp!=0)||(resp!=1));
	
	cout<<endl;
 
	
	c=0;
 	dim=1;
 	
	while(resp==1){
		
		dim++;
		
		int codPelicula[dim];
		int duracionPelicula[dim];
		
		cout<<"ingrese el codigo de la pelicula :";
		cin>>codPelicula[c];
		
		cout<<endl;
		
		cout<<"ingrese la duracion de la pelicula";
		cin>>duracionPelicula[c];
		
		c++;
		
		cout<<endl;
		
		max=0;// preparo el punto 2
	
		for(i=1;i<dim;i++){
		
			if(duracionPelicula[i]>duracionPelicula[max]){
				maxDuracion=duracionPelicula[i];
				maxPelicula=codPelicula[i];
			}
		}
		
		do{
			cout<<"ingrese que tipo de pelicula es: ";
			cin>>respPeli;
		}while((respPeli<1)||(respPeli>5));
		
		cout<<endl;
		
		cout<<"ingrese que sala es :";
		
		do{
			
			cin>>respSala;
			
			i=0;
			
			while((i<sala)||(respSala!=i+10)){
				i++;
			}
			
			if(i==sala){
				cout<<"sala no encontrada, por favor vuelva a ingresarla";
			}
			
		}while(i==sala);
		
		matContSxP[i][respPeli]++;
		
		cout<<endl;
		
		do{
		
		cout<<"hay mas datos de pelicula para ingresar?(1:SI/0:NO) ";
		cin>>resp;
		}while((resp!=0)||(resp!=1));
		
	}
	
	cout<<endl;
	
	//ingreso de datos 3
	
	for(i=0;i<sala;i++){
		for(j=0;j<dias;j++){
			
			cout<<"ingrese la cantidad de entradas vendidas del dia "<<j+1<<" y sala "<<i+10;
			cin>>matAcumEntradas[i][j];
			
			cout<<endl;
			
		}
	}
	
	//fin de ingreso de datos
	
	cout<<endl;
	
	///punto 1
	
	acum=0;
	
	for(j=0;j<tPelicula;j++){
		for(i=0;i<sala;i++){
			acum++;
		}
		
		if(j==0){
			
			cout<<"de las peliculas infantiles se reproducio en la semana "<<acum<<" veces"<<endl;
		}
		else{
			if(j==1){
				
				cout<<"de las peliculas de comedia se reproducio en la semana "<<acum<<" veces"<<endl;
			}
			else{
				if(j==2){
					
					cout<<"de las peliculas de drama se reproducio en la semana "<<acum<<" veces"<<endl;
				}
				else{
					if(j==3){
						
						cout<<"de las peliculas de ficcion se reproducio en la semana "<<acum<<" veces"<<endl;
					}
					else{
						
						cout<<"de otro tipo de  pelicula dram reproducio en la semana "<<acum<<" veces"<<endl;
					}
				}
			}
		}
	}
	
	//punto 2
	
	cout<<endl;
	
	
	
	cout<<"la pelicula con mas duracion es "<<maxPelicula<<" con una duracion de "<<maxDuracion<<" minutos"<<endl;
	
	cout<<endl;
	//punto 3
	
	
	cout<<setw(7)<<"dia";
	
	for (j=0;j<dias;j++){	
		cout<<setw(7)<<j+1;
	}
	cout<<endl;
	
	cout<<setw(7)<<"--------";
	for (j=0;j<dias;j++){	
		cout<<setw(7)<<"-------";
	}
	cout<<endl;
	
	
	for (i=0;i<sala;i++){
		cout<<setw(6)<<i<<"|";
		for (j=0;j<dias;j++){
			cout<<setw(7)<<matAcumEntradas[i][j];
		}
		cout<<endl;
	}
	
	cout<<endl;
	//punto 4
	
	for (i=0;i<sala;i++){
		acum=0;
		
		for (j=0;j<dias;j++){
			acum+=matAcumEntradas[i][j]*tiposDsala[i];
		}
		
		cout<<"la sala "<<i+10<<" recaudo en la semana $"<<acum;
		
		cout<<endl;
	}
	
	cout<<endl;
	//punto 5
	
	for (j=0;j<dias;j++){
		acum=0;
		for (i=0;i<sala;i++){
		
			acum+=matAcumEntradas[i][j]*tiposDsala[i];	
		}
		
		cout<<"En el dia "<<j+1<<" se recaudo $"<<acum;
		
		cout<<endl;
	}
	
	cout<<endl;
	//punto 6
	
	
	for(j=0;j<dias;j++){
		
		max=0;//reciclo variable para un maximo
		
		for(i=1;i<sala;i++){

	
			if(matAcumEntradas[i][j]>matAcumEntradas[max][j]){
				max=i;
			}		
		}
		
		cout<<"En el dia "<<j+1<<" la sala que venido mas entradas es la sala "<<max+10<<" con un total de "<<matAcumEntradas[max][j]<<" entradas";
	}
	
	cout<<endl;
	//punto 7
	
	
	
	respSala=0;//reciclo variable para un maximo
	max=0;//reciclo variable para un maximo
	
	for (i=1;i<sala;i++){
		
		for (j=1;j<dias;j++){
			if(matAcumEntradas[i][j]>matAcumEntradas[respSala][max]){
				max=j;
				respSala=i;
				
			}
		}
		cout<<endl;
	}
	
	
	cout<<"la mayor recaudacion fue el dia "<<max+1<<" en la sala "<<respSala+10<<" con un total de $"<<matAcumEntradas[respSala][max]*tiposDsala[max]<<endl;
	
	
	
	
	
}//cierra el main