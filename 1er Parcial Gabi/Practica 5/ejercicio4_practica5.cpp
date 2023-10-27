#include<stdio.h>
#include<conio.h>
#include<iostream>
#include<iomanip>
#define N 10
using namespace std;

int main(){
	int n,m,i,j,sumProd=0,sumCampo=0,iMax=0,jMax=0,iMin=0,jMin=0,produccion;
	double promProd;
	
	
	
	
	cout<<"ingrese la cantidad de razas vacunas: ";
	cin>>n;
	
	cout<<"ingrese la cantidad de campos: ";
	cin>>m;
	
	int mCampos[n][m];
	
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			
			cout<<"ingrese la produccion de leche de la vaca de raza "<<i<<" del campo "<<j<<":"<<endl;
			cin>>mCampos[i][j];	
			
		}		
	}
	produccion=mCampos[0][0];
	cout<<endl<<endl<<endl;
	///punto 1

	for(i=0;i<n;i++){
		sumProd=0;
		for(j=0;j<m;j++){
			
			sumProd+=mCampos[i][j];
			
		}	
		promProd=(double)sumProd/n;
		cout<<"el promedio de la raza "<<i<<" es de :"<<promProd<<endl<<endl;	
	}
	cout<<endl<<endl<<endl;
	///punto 2
	
	for(j=0;j<m;j++){
		sumCampo=0;
		for(i=0;i<n;i++){
			
			sumCampo+=mCampos[i][j];
		}	
		
		cout<<"la suma de produccion del campo "<<j<<" es de :"<<sumCampo<<endl<<endl;	
	}
	cout<<endl<<endl<<endl;
	
	///punto 3
	
	iMax=0;
	jMax=0;
	for(i=0;i<n;i++){///busco la maxima prodccion de leche , me guardo los indices
		for(j=0;j<m;j++){
			
			if(mCampos[i][j]>produccion){
				iMax=i;
				jMax=j;
				produccion=mCampos[i][j];					
			}
			
						
		}		
	}
	
	cout<<"la mayor procuccion de leche fue de la raza "<<iMax<<" del campo "<<jMax<<" con la produccion de "<<produccion;
	cout<<endl<<endl<<endl;
	
	produccion=mCampos[0][0];
	iMin=0;
	jMin=0;
	for(i=0;i<n;i++){///busco la minima prodccion de leche , me guardo los indices
		for(j=0;j<m;j++){
				
			if(mCampos[i][j]<produccion){
				iMin=i;
				jMin=j;
				produccion=mCampos[i][j];					
			}
		
		}		
	}
	
	cout<<"la menor procuccion de leche fue de la raza "<<iMin<<" del campo "<<jMin<<" con la produccion de "<<produccion;
	
	
	
}