#include<iostream>
#include<stdio.h>
#include<conio.h>

/*
Realizar una función main, que registre los datos necesarios y que informe lo siguiente:
1)	Los datos de cada uno de los toneles.
2)	La cantidad de toneles que tienen almacenado por lo menos un 80% de su totalidad de capacidad.
3)	Los toneles de cada tipo de Varietal.
4)	Los toneles de tipo Barril
5)	La identificación del tonel que tiene la menor cantidad almacenada y la identificación del tonel que tiene la mayor cantidad almacenada. (Suponer sin repeticiones)
*/

struct Tonel{
	
	int id;
	double altura;
	double diametro;
	int tipo;
	int codTipoVarietal;
	double capacidad;
	double litros;
	double precioXLitro;
};

using namespace std;


//Función tonelPorcentaje Dado un tonel y un porcentaje, devolver un indicador si dicho tonel tiene almacenado
// al menos dicho porcentaje de su capacidad.

bool tonelPorcentaje(Tonel unTonel, double porc){
	return(unTonel.litros>=(unTonel.capacidad*porc/100));	
}


//Función tonelAprovechado: Dado un vector con los datos de los toneles y su dimensión, 
//retornar la cantidad de toneles que están ocupados al menos con un 80% de su capacidad.

int tonelAprovechado(Tonel vecToneles[], int n){
	int i, contAprovechados;
	contAprovechados=0;
	
	for(i=0;i<n;i++){
		if(tonelPorcentaje(vecToneles[i], 80)){
			contAprovechados++;
		}
	}
	
	return contAprovechados;
}

//Función mostrarConsolaToneles: Dado un vector con los datos de los toneles y su dimensión, mostrar por pantalla los datos de cada uno de ellos.
void mostrarConsolaToneles(Tonel vecToneles[], int dim){
	int i;
	cout<<"***********************************************************************"<<endl;
	cout<<"********************************TONELES********************************"<<endl;
	cout<<"***********************************************************************"<<endl<<endl;
	
	for(i=0;i<dim;i++){
		cout<<"IDENTIFICACIÓN: "<<vecToneles[i].id<<endl;
		cout<<"ALTURA: "<<vecToneles[i].altura<<endl;
		cout<<"DIAMETRO: "<<vecToneles[i].diametro<<endl;
		cout<<"TIPO: ";
		if(vecToneles[i].tipo==1)
			cout<<"1- Barril"<<endl;
		else
			cout<<"2- Tina"<<endl;
		cout<<"TIPO VARIETAL: ";
		switch(vecToneles[i].codTipoVarietal){
			case 1: cout<<" 1- Tempranillo"<<endl;break;
			case 2: cout<<" 2 - Cabernet Sauvignon"<<endl;break;
			case 3: cout<<" 3 - Merlot"<<endl;break;
			case 4: cout<<" 4 - Syrah"<<endl;break;
			case 5: cout<<" 5 - Malbec"<<endl;break;
		}
		cout<<"CAPACIDAD: "<<vecToneles[i].capacidad<<endl;
		cout<<"LITROS ALLAMCENADOS: "<<vecToneles[i].litros<<endl;
		cout<<"PRECIO POR LITRO: "<<vecToneles[i].precioXLitro<<endl;
		cout<<"***********************************************************************"<<endl;
	}
	
}

//Función tipoToneles: Dado un vector con los datos de los toneles y su dimensión, un código de tipo de tonel, 
//devuelva un vector que contenga los toneles corresponden a dicho tipo, y también devolver su dimensión.

void tipoToneles(Tonel vecToneles[], int n, int codTipoTonel, Tonel vecTonelesTipo[], int &dimVecTonelesTipo ){
	int i;
	dimVecTonelesTipo=0;
	for(i=0;i<n;i++){
		if(vecToneles[i].tipo==codTipoTonel){
			vecTonelesTipo[dimVecTonelesTipo]=vecToneles[i];
			dimVecTonelesTipo++;
		}		
	}
}


//Función tipoVarietal: Dado un vector con los datos de los toneles y su dimensión, un código de tipo de varietal, 
//devuelva un vector que contenga los toneles corresponden a dicho tipo, y también devolver su dimensión.

void tipoVarietal(Tonel vecToneles[], int n, int codTipoVarietal, Tonel vecTonelesTipoVarietal[], int &dimVecTonelesTipoVarietal ){
	int i;
	dimVecTonelesTipoVarietal=0;
	for(i=0;i<n;i++){
		if(vecToneles[i].tipo==codTipoVarietal){
			vecTonelesTipoVarietal[dimVecTonelesTipoVarietal]=vecToneles[i];
			dimVecTonelesTipoVarietal++;
		}		
	}
}


//Devuelve el índice del vector con menor cantidad almacenada
int menor(Tonel vecToneles[], int n){
	int i, iMin;
	iMin=0;
	for(i=1;i<n;i++){
		if(vecToneles[i].capacidad<vecToneles[iMin].capacidad){
			iMin=i;	
		}
	}
	return (iMin);
}


//Devuelve el índice del vector con mayor cantidad almacenada
int mayor(Tonel vecToneles[], int n){
	int i, iMax;
	iMax=0;
	for(i=1;i<n;i++){
		if(vecToneles[i].capacidad>vecToneles[iMax].capacidad){
			iMax=i;	
		}
	}
	return (iMax);
}


//Función MenorMayor: Dado un vector con los datos de los toneles y su dimensión, devolver la identificación del tonel que tiene la menor cantidad
// almacenada y la identificación del tonel que tiene la mayor cantidad almacenada (suponer único).
void menorMayor(Tonel vecToneles[], int n, int &idMin, int &idMax ){
	idMin=vecToneles[menor(vecToneles,n)].id;
	idMax=vecToneles[mayor(vecToneles,n)].id;
}


void cargaDatosToneles(Tonel vecToneles[], int n){
	
	int i, auxTipo, auxTipoVarietal;
	
	for(i=0;i<n;i++){
		cout<<"IDENTIFICACIÓN: ";
		cin>>vecToneles[i].id;
		cout<<"ALTURA: ";
		cin>>vecToneles[i].altura;
		cout<<"DIAMETRO: ";
		cin>>vecToneles[i].diametro;
		cout<<"TIPO 1- Barril / 2 - Tina: " ;
		cin>>auxTipo;		
		while(auxTipo!=1 && auxTipo!=2){
			cout<<"El tipo no es valido. Ingrese nuevamente el tipo 1- Barril / 2 - Tina: ";
			cin>>auxTipo;
		}
		vecToneles[i].tipo=auxTipo;
		
		cout<<"TIPO VARIETAL 1- Tempranillo / 2 - Cabernet Sauvignon / 3 - Merlot /  4 - Syrah / 5 - Malbec ";
		cin>>auxTipoVarietal;		
		while(auxTipoVarietal!=1 && auxTipoVarietal!=2 && auxTipoVarietal!=3 && auxTipoVarietal!=4 && auxTipoVarietal!=5) {
			cout<<"El tipo de varietal no es valido. Ingrese nuevamente el tipo  1- Tempranillo / 2 - Cabernet Sauvignon / 3 - Merlot /  4 - Syrah / 5 - Malbec: ";
			cin>>auxTipoVarietal;
		}
		vecToneles[i].codTipoVarietal=auxTipoVarietal;
		cout<<"CAPACIDAD: ";
		cin>>vecToneles[i].capacidad;
		cout<<"LITROS ALMACENADOS: ";
		cin>>vecToneles[i].litros;
		cout<<"PRECIO POR LITRO: ";
		cin>>vecToneles[i].precioXLitro;
	}
}


int main(){
	int i, n, dimVecTonelesTipoVarietal,dimVecTonelesTipo,  idMin, idMax;
	
	cout<<"Ingrese cantidad de toneles: ";
	cin>>n;
	
	Tonel vecToneles[n];
	Tonel vecTonelesTipoVarietal[n];
	Tonel vecTonelesTipo[n];
	
	//Carga de datos de toneles
	cargaDatosToneles(vecToneles,n);
	
	
	//SALIDAS
	
	//1)	Los datos de cada uno de los toneles.
	mostrarConsolaToneles(vecToneles, n);
	
	//2)	La cantidad de toneles que tienen almacenado por lo menos un 80% de su totalidad de capacidad.
	cout<<"La cantidad de toneles que tienen almacenado por lo menos un 80% de su totalidad de capacidad: "<<tonelAprovechado(vecToneles,n);
	
	//3)	Los toneles de cada tipo de Varietal
	for(i=1;i<=5;i++){
		tipoVarietal(vecToneles, n, i, vecTonelesTipoVarietal, dimVecTonelesTipoVarietal );
		mostrarConsolaToneles(vecTonelesTipoVarietal, dimVecTonelesTipoVarietal);	
	}

	//4)	Los toneles de tipo Barril
	tipoToneles(vecToneles, n,  1, vecTonelesTipo, dimVecTonelesTipo);
	mostrarConsolaToneles(vecTonelesTipo, dimVecTonelesTipo);


	//5)	La identificación del tonel que tiene la menor cantidad almacenada y
	// la identificación del tonel que tiene la mayor cantidad almacenada. (Suponer sin repeticiones)
	menorMayor(vecToneles, n, idMin, idMax );
	cout<<"La identificación del tonel que tiene la menor cantidad almacenada: "<<idMin<<endl;
	cout<<"La identificación del tonel que tiene la mayor cantidad almacenada: "<<idMax<<endl;
	
	getch();
	return (0);
}

