//Programa para imprimir una matriz en forma matricial
# include<iostream>
# include<stdio.h>
# include<conio.h>
# include<iomanip>


#define DIMF 10
#define DIMC 10



using namespace std;

int main (void){
		
	int f,c, auxNro, matNrosPares[DIMF][DIMC];


	//GENERAR MATRIZ AUTOMÁTICA NROS SECUENCIALES
	auxNro=0;
	for (f=0;f<DIMF;f++)
	{
		for (c=0;c<DIMC;c++)
		{
			auxNro=auxNro+1;
			matNrosPares[f][c]=auxNro;
		}
	}
	
	//IMRPIMIR MATRICIALMENTE
	cout<<setw(7)<<" ";
	for (c=0;c<DIMC;c++)
	{	
		cout<<setw(7)<<c;
	}
	cout<<endl;
	
	cout<<setw(7)<<"--------";
	for (c=0;c<DIMC;c++)
	{	
		cout<<setw(7)<<"-------";
	}
	cout<<endl;
	
	
	for (f=0;f<DIMF;f++)
	{
		cout<<setw(6)<<f<<"|";
		for (c=0;c<DIMC;c++)
		{
			cout<<setw(7)<<matNrosPares[f][c];
		}
		cout<<endl;
	}
		
	
	
	
	
	getch();
	return(0);
}