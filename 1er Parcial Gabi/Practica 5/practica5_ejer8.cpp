#include<iostream>
#include<conio.h>
#include<stdio.h>
#include<iomanip>
#define N 6
using namespace std;

int main(){
	int  i, j,sumaPrimerMitad=0,sumaSegundaMitad=0;
	
	int mat[N][N];
	
	for(i=0;i<N;i++){
		for(j=0;j<N;j++){
			cout<<"ingrese el valor de la posicion ["<<i<<"]["<<j<<"] ";
			cin>>mat[i][j];
		}
		
	}

	for(i=0;i<N;i++){
		for(j=0;j<3;j++){
			sumaPrimerMitad+=mat[i][j];
		}
		
	}
	cout<<"la suma de la primer mitad es de :"<<sumaPrimerMitad<<endl<<endl;
	
	for(i=0;i<N;i++){
		for(j=3;j<N;j++){
			sumaSegundaMitad+=mat[i][j];
		}
		
	}
	cout<<"la suma de la segunda mitad es de :"<<sumaSegundaMitad;
}