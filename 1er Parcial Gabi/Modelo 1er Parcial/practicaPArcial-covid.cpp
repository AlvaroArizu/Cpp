#include<iostream>
#include<stdio.h>
#include<conio.h>
#include<iomanip>
#define MOT 30
#define DIS 22
using namespace std;

int main(){
	///declaracion de variables
	int i, j,acum, cont,dni,codMot,nroDist,transp,estado,resp,minF,minC;
	///declaracion de arreglos
	int matCantPerm[MOT][DIS],matPermOtorgados[MOT][DIS],vCodMotivo[MOT];
	
	bool badera;
	
	bandera=true;
	
	for(i=0;i<MOT;i++){///inicio los arreglos en 0 xq son contadores
		for(j=0;j<DIS;j++){
			
			matCantPerm[i][j]=0;
			matPermOtorgados[i][j]=0;
			
		}
	}
	
	for(i=0;i<MOT;i++){///ingreso de codigos de motivo
		do{
		cout<<"ingrese el codigo del motivo "<<i+1<<": "<<endl;
		cin>>vCodMotivo[i];
		}while((vCodMotivo[i]<2000)||(vCodMotivo[i]>10000));
		
	}
	cout<<endl;
	
	
	//ingreso de datos
	
	do{//valido datos
		cout<<"Hay datos para cargar?(1:si/2:no)"<<endl;
		cin>>resp;	
	}while((resp!=1)&&(resp!=2));
	
	while(resp=1){
		
		cout<<endl;
		cout<<"Ingrese el dni sin puntos"<<endl;
		cin>>dni;
		
		do{
			do{//valido que el codigo este entre 2000 y 10000
			cout<<"ingrese el codigo del motivo "<<endl;
			cin>>codMot;
			}while((codMot<2000)||(codMot>10000));
			
			i=0;
			while((i<MOT)&&(vCodMotivo[i]!=codMot)){//valido que el codigo este dentro del vector
				i++;
			}
			
		    if(i==MOT){
		    
				cout<<"+++++++++++ERROR+++++++++++++"<<endl;
			}
		
		}while(i==MOT);
		
		
			
		cout<<endl;	
		
    	do{//valido numero de districto
    		cout<<"ingrese el numero de districto(1-22)"<<endl;
    		cin>>nroDist;
		}while((nroDist<1)&&(nroDist>22));
		
		matCantPerm[i][nroDist-1]++;//voy llenando matriz de cantidad de permisos
		
		cout<<endl;
		
		do{///valido transporte
			cout<<"ingrese el medio de transporte a utilizar "<<endl;
			cin>>transp;
		}while((transp!=10)&&(transp!=20)&&(transp!=30));
		
		cout<<endl;
		
		do{//valido el estado
			
			cout<<"ingrese el estado de su permiso (1:pendiente/2:otorgado)"<<endl;
			cin>>estado;
			
		}while((estado!=1)&&(estado!=2));
	
		if(estado==2){//voy llenando la matriz de permisos otorgados
			matPermOtorgados[i][nroDist-1]++;	
		}	
		
		do{
			cout<<"Hay datos para cargar?(1:si/2:no)"<<endl;
			cin>>resp;	
			
		}while((resp!=1)&&(resp!=2));
		
		cout<<endl;	
		
		
		
	}
		
	///punto 1
	for(i=0;i<MOT;i++){
	
		for(j=0;j<DIS;j++){
			
			cout<<"en el motivo"<<vCodMotivo[i]<<" y en el districto "<<j+1<<"hay"<<matCantPerm[i][j]<<" permisos"<<endl;
			
			
		}
	}	
	
		
	//punto 2
	
	for(i=0;i<MOT;i++){
	
		for(j=0;j<DIS;j++){
			
			cout<<"en el motivo"<<vCodMotivo[i]<<" y en el districto "<<j+1<<"hay"<<matPermOtorgados[i][j]<<" permisos otorgados"<<endl;
			
			
		}
	}	

	
	//punto 3
	cout<<endl;
	for(i=0;i<MOT;i++){//recorro por fila para los permisos de motivos
		cont=0;
		for(j=0;j<DIS;j++){
			if(	matPermOtorgados[i][j]==0){
				cont++;
			}	
		}
		
		cout<<"en el motivo "<<vCodMotivo[i]<<" la cantidad de districtos de los cuales no se han solicitado permisos son: "<<cont<<endl;
	}		
	
	//punto 4
	
	for(i=0;i<MOT;i++){
		acum=0;
		for(j=0;j<DIS;j++){
			acum+=matCantPerm[i][j];
			
			
		}
		cout<<"por el motivo"<<vCodMotivo[i]<<" hay "<<acum<<" permisos"<<endl;
	}
	
	//punto 5
	
	for(i=0;i<MOT;i++){
		
		for(j=0;j<DIS;J++){
			
			if (bandera==true)
			{
			   minF = 0;
			   minC = 0;
			   bandera= false;   
			
			}
			else
			{
						
				if (mat[f][c]<mat[maxf][maxc]){
					
					minF=i;
					minC=j;	
				}
				
			}
		
	
		}
	
	}
	cout<<endl;
	cout<<"en el motivo "<<vCodMotivo[minF]<<" y en el districto "<<minc+1<<" hay menos cantidad de permisos"<<endl;
	
	
}//cierro el main