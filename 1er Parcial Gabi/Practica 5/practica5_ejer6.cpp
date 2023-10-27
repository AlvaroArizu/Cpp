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
	
	int mat[n][n];
	
	for(i=0;i<n;i++){///lleno la matriz secuencialmente entre 0 y 10
		for(j=0;j<n;j++){
			if((incremento>=0)&&(incremento<=10)){
				mat[i][j]=incremento;
				incremento++;
			}
			else{	
				incremento=0;
				mat[i][j]=incremento;
				incremento++;
			}
			
		}
	}
	
	incremento=0;///lleno la diagonal principal con 1 y 0
	for(i=0;i<n;i++){	
		if((i%2)==0){
			mat[i][i]=0;
		}
		else{
			mat[i][i]=1;
		}
				                     
	}

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
			cout<<setw(4)<<mat[i][j];
		}
		cout<<endl;
	}
}