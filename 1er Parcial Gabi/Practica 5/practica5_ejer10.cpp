#include<iostream>
#include<conio.h>
#include<stdio.h>
#include<iomanip>

using namespace std;

int main(){
	int n, i, j, incremento;
	incremento=0;
	
	cout<<"ingrese el valor de dimencion de la matriz-> ";
	cin>>n;
	
	int mat1[n][n],mat2[n][n],mat3[n][n];
	
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			
			cout<<"ingrese el valor de la matriz 1 posicion ["<<i<<"]["<<j<<"]:";
			cin>>mat1[i][j];
		}
	}
	
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			
			cout<<"ingrese el valor de la matriz 2 posicion ["<<i<<"]["<<j<<"]:";
			cin>>mat2[i][j];
		}
	}
	
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			
			mat3[i][j]=mat1[i][j]-mat2[i][j];
		}
	}
	
	cout<<endl<<endl;
	cout<<"la matriz resultante de la resta de la matriz 1 y 2";
	cout<<endl<<endl;
	cout<<setw(3)<<" ";///imprimo la matriz resultante
	for(j=0;j<n;j++){
		cout<<setw(4)<<j;
	}
	cout<<endl;
	
	cout<<setw(3)<<"----";
	
	for(j=0;j<n;j++){
		cout<<setw(3)<<"----";
	}
	cout<<endl;
	
	for(i=0;i<n;i++){
	
		cout<<i<<"|";
		for(j=0;j<n;j++){
			cout<<setw(4)<<mat3[i][j];
		}
		cout<<endl;
	}
	
	
	
}