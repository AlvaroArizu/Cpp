#include<iostream>
#include<conio.h>
#include<stdio.h>
#include<iomanip>
#define FILA 5
#define COLM 3
using namespace std;

int main(){
	int mat[FILA][COLM];
	int i, j,aux,sumadorFila,sumadorColm;
	
	sumadorFila=0;
	sumadorColm=0;
	
	for(i=0;i<FILA;i++){//punto 1
		for(j=0;j<COLM;j++){
			
			cout<<"ingrese el valor de la fila "<<i<<" columna "<<j<<": ";
			cin>>mat[i][j];
			cout<<endl;
		}
		
	}

	for(j=0;j<COLM;j++){//punto 2
		mat[3][j]=0;
	}
	
	cout<<setw(3)<<" ";
	for(j=0;j<COLM;j++){
		cout<<setw(4)<<j;
	}
	cout<<endl;
	
	cout<<setw(3)<<"----";
	
	for(j=0;j<COLM;j++){
		cout<<setw(3)<<"----";
	}
	cout<<endl;
	
	for(i=0;i<FILA;i++){
	
		cout<<i<<"|";
		for(j=0;j<COLM;j++){
			cout<<setw(4)<<mat[i][j];
		}
		cout<<endl;
	}
	
	for(i=0;i<FILA;i++){//punto 3
		for(j=0;j<COLM;j++){
			if(j==1){
				
				aux=mat[i][j];
				mat[i][j]=mat[i][j+1];
				mat[i][j+1]=aux;
			}
			
		}
	}
	cout<<endl;	//punto 4
	cout<<setw(3)<<" ";
	for(j=0;j<COLM;j++){
		cout<<setw(4)<<j;
	}
	cout<<endl;
	
	cout<<setw(3)<<"----";
	
	for(j=0;j<COLM;j++){
		cout<<setw(3)<<"----";
	}
	cout<<endl;
	
	for(i=0;i<FILA;i++){
	
			cout<<i<<"|";
		for(j=0;j<COLM;j++){
			cout<<setw(5)<<mat[i][j];
		}
		cout<<endl;
	}
	cout<<endl;
	cout<<"|||||SUMAS DE FILAS|||||"<<endl;
	for(i=0;i<FILA;i++){//punto 5
		sumadorFila=0;
		for(j=0;j<COLM;j++){
			sumadorFila+=mat[i][j];
		}
			cout<<endl;
			cout<<"la suma de la fila "<<i<<" es de :"<<sumadorFila;
			cout<<endl;
	}
	cout<<endl;
	cout<<"|||||SUMAS DE COLUMNAS|||||"<<endl;
	for(j=0;j<COLM;j++){//punto 6
		sumadorColm=0;
		for(i=0;i<FILA;i++){
			sumadorColm+=mat[i][j];
		}
			cout<<endl;
			cout<<"la suma de la comumna "<<j<<" es de :"<<sumadorColm;
			cout<<endl;
	}
	
	cout<<endl<<endl;
	for(j=0;j<COLM;j++){//punto7
		cout<<"fila 3, columna "<<j<<": "<<mat[3][j];
		cout<<endl<<endl;
	}
	
	getch();
	
}