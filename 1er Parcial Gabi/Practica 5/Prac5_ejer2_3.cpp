#include<stdio.h>
#include<conio.h>
#include<iostream>
#include<iomanip>
#define N 10
using namespace std;

/*
Realizar un programa que genere en una matriz de 10 x 10, de forma automática los números pares. Luego mostrar la matriz resultante.
Realizar un programa que genere en una matriz de 10 x 10, de forma automática los números múltiplos de 3. Luego mostrar la matriz resultante.

*/

int main(){//matriz de pares
	int mat[N][N],mat2[N][N];
	int i, j,par=2,mult=3;
	
	for(i=0;i<N;i++){
		for(j=0;j<N;j++){
			mat[i][j]=par;
			
			par+=2;
		}
	}
	
	
	cout<<"°°°°°°MATRIZ DE PARES°°°°°°"<<endl;
	cout<<setw(3)<<" ";///muestro la matriz
	for(j=0;j<N;j++){
		cout<<setw(4)<<j;
	}
	cout<<endl;
	
	cout<<setw(3)<<"----";
	
	for(j=0;j<N;j++){
		cout<<setw(3)<<"----";
	}
	cout<<endl;
	
	for(i=0;i<N;i++){	
		cout<<i<<"|";
		for(j=0;j<N;j++){
			cout<<setw(4)<<mat[i][j];
		}
		cout<<endl;
	} /// fin de mostrar la patriz
	
	for(i=0;i<N;i++){
		for(j=0;j<N;j++){
			mat2[i][j]=mult;
			
			mult+=3;
		}
	}
	
	cout<<"°°°MATRIZ MULT DE 3°°°"<<endl;
	cout<<setw(3)<<" ";///muestro la matriz multiplo de 3
	for(j=0;j<N;j++){
		cout<<setw(4)<<j;
	}
	cout<<endl;
	
	cout<<setw(4)<<"----";
	
	for(j=0;j<N;j++){
		cout<<setw(4)<<"----";
	}
	cout<<endl;
	
	for(i=0;i<N;i++){	
		cout<<i<<"|";
		for(j=0;j<N;j++){
			cout<<setw(4)<<mat2[i][j];
		}
		cout<<endl;
	} /// fin de mostrar la patriz
	
	
}