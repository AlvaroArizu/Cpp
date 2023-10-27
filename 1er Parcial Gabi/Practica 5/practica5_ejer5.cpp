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
	
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if((incremento>=0)&&(incremento<=99)){
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

	cout<<setw(3)<<" ";
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