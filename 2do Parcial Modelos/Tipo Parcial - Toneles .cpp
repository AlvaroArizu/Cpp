#include<iostream>
#include<stdio.h>
#include<conio.h>

using namespace std;


// Struct datos TONELES
struct Tonel {
	int id;
	double altura;
	double diametro;
	int tipo;
	int codVarietal;
	double capacidad; // 500
	double litros; // 300
	double precioXlitro;
	
};

//Funcion Dado un tonel y un porcentaje, devolver un indicador si dicho tonel tiene almacenado al menos dicho porcentaje de su capacidad.

/
bool tonelPorcentaje (Tonel unTonel, double porc){
	return(unTonel.litros >= (unTonel.capacidad*porc/100));
}

//Dado un vector con los datos de los toneles y su dimension, retornar la cantidad de toneles que estan ocupados al menos con un 80% de su capacidad.

int tonelAprovechado(Tonel vecToneles[], int dim){
	int i,contador=0;
	
	for(i=0;i<dim;i++){
		if(tonelPorcentaje(vecToneles[i],80)){
			contador++;
		}
	}
	return contador;
}

// Dado un vector con los datos de los toneles y su dimension, mostrar por pantalla los datos de cada uno de ellos.

void mostrarConsolaToneles(Tonel vecToneles[], int dim){
	int i;
	
	for(i=0;i<dim;i++){
		cout<<"************* Tonel "<<i+1<<" *************" <<endl;cout<<endl;
		cout<<"Identificacion :"<<vecToneles[i].id<<endl;
		cout<<"Altura: "<< vecToneles[i].altura<<endl;
		cout<<"Diametro: "<< vecToneles[i].diametro<<endl;
		cout<<"Tipo: ";
		if(vecToneles[i].tipo ==1){
			cout<<"1- Barril"<<endl;
		}
		else{
			cout <<"2- Tina"<<endl;
		}	
		cout<<"Codigo Tipo de Varietal: ";
		switch(vecToneles[i].codVarietal){
			case 1: cout<<"1- Tempranillo"<<endl;break;
			case 2: cout<<"2- Cabernet Sauvignon"<<endl;break;
			case 3: cout<<"3- Merlot"<<endl;break;
			case 4: cout<<"4- Syrah"<<endl;break;
			case 5: cout<<"5- Malbec"<<endl;break;
		}
		cout<<"Capacidad: "<<vecToneles[i].capacidad<<endl;
		cout<<"Litros Almacenados: "<<vecToneles[i].litros<<endl;
		cout<<"Precio por Litro: "<<vecToneles[i].precioXlitro<<endl;
		cout <<endl;
	}
	
	
}

//Dado un vector con los datos de los toneles y su dimensi�n, mostrar por pantalla los datos de cada uno de ellos.

void tipoToneles(Tonel vecToneles[], int dim, int codTipo, Tonel vecTonelesTipoTonel[], int &dimVecTipo){
	int i, x;
	x=0;
	for(i=0;i<dim;i++){
		if(vecToneles[i].tipo == codTipo){
			vecTonelesTipoTonel[x] =vecToneles[i];
			x++;
		}
	}
	dimVecTipo=x;
}

void tipoVarietal(Tonel vecToneles[], int dim, int codVarietal, Tonel vecTonelesTipoVarietal[], int &dimVecVarietal){
	int i,x;
	x=0;
	for(i=0;i<dim;i++){
		if(vecToneles[i].codVarietal == codVarietal){
			vecTonelesTipoVarietal[x] = vecToneles[i];
			x++;
		}
	}
	dimVecVarietal=x;
}


int menor(Tonel vecToneles[], int dim){
	int i, indiceMin;
	imin=0;
	
	for(i=1;i<dim;i++){
		if(vecToneles[i].litros < vecToneles[indiceMin].litros){
			indiceMin=i;
		}
	}
	return indiceMin;
}


int mayor(Tonel vecToneles[], int dim){
	int i, imax;
	imax=0;
	for(i=1;i<dim;i++){
		if(vecToneles[i].litros > vecToneles[imax].litros){
			imax=i;
		}
	}
	return imax;
}

void menorMayor(Tonel vecToneles[], int dim, int &idMin, int &idMax){
	idMin = vecToneles[menor(vecToneles,dim)].id; //vecToneles[indiceMin].id
	idMax = vecToneles[mayor(vecToneles,dim)].id; 
}

void cargarDatosToneles(Tonel vecToneles[], int dim){
	int i, auxTipo, auxVarietal;
	
	for(i=0;i<dim;i++){
		cout<< "Ingrese la IDENTIFICACION del Tonel "<<i+1<<": "; 
		cin>>vecToneles[i].id;
		cout<<"Ingrese la ALTURA del Tonel "<<i+1<<": "; 
		cin>>vecToneles[i].altura; 
		cout<<"Ingrese el DIAMETRO del Tonel "<<i+1<<": "; 
		cin>>vecToneles[i].diametro; 
		cout<<"Ingrese el TIPO (1: barril - 2: tina) del Tonel "<<i+1<<": "; 
		cin>>auxTipo; 
		
		while(auxTipo != 1 && auxTipo !=2){
			cout<<"ERROR! INGRESE TIPO VALIDO (1: barril - 2: tina): ";
			cin>>auxTipo;
		}
		vecToneles[i].tipo = auxTipo;
		
		cout<<"Ingrese el TIPO DE VARIETAL (1:Tempranillo - 2: Cabernet Sauvignon - 3: Merlot - 4: Syrah - 5:Malbec) del Tonel "<<i+1<<": "; 
		cin>>auxVarietal; 
		
		while(auxVarietal < 1 ||  auxVarietal > 5){
			cout<<"ERROR! INGRESE TIPO DE VARIETAL VALIDO (1:Tempranillo - 2: Cabernet Sauvignon - 3: Merlot - 4: Syrah - 5:Malbec): ";
			cin>>auxVarietal;
		}
		vecToneles[i].codVarietal = auxVarietal;;
		
		cout<<"Ingrese el CAPACIDAD del Tonel "<<i+1<<": "; 
		cin>>vecToneles[i].capacidad; 
		cout<<"Ingrese el LITROS ALMACENADOS del Tonel "<<i+1<<": "; 
		cin>>vecToneles[i].litros; 
		
		cout<<"Ingrese el PRECIO POR LITRO del Tonel "<<i+1<<": "; 
		cin>>vecToneles[i].precioXlitro; 
		
		cout<<endl;
	}
}

int main (){
	int i,n,dimVecVarietal,dimVecTipo, idMin, idMax; 
	
	cout<< "Ingrese la cantidad de toneles: "; cin>> n;
	
	Tonel vecToneles[n];
	Tonel vecTonelesTipoTonel[n];
	Tonel vecTonelesTipoVarietal[n];
	
	
	// 1) Datos de cada uno de los toneles
	cargarDatosToneles(vecToneles, n);
	mostrarConsolaToneles(vecToneles,n);
	
	// 2) La cantidad de toneles que tiene almacenado por lo menos un 80% de su totalidad de capacidad
	cout<<"La cantidad de toneles que tiene almacenado por lo menos un 80% de su totalidad de capacidad: "<<tonelAprovechado(vecToneles,n);
	
	// 3) Los toneles de cada tipo de varietal
	for(i=1; i<5; i++){
		tipoVarietal(vecToneles,n,i,vecTonelesTipoVarietal,dimVecVarietal);
		mostrarConsolaToneles(vecTonelesTipoVarietal, dimVecVarietal);
	}
	
	//4) los toneles de tipo barril
	tipoToneles(vecToneles,n,1,vecTonelesTipoTonel, dimVecTipo);
	mostrarConsolaToneles(vecTonelesTipoTonel, dimVecTipo);
	
/*	for(i=1; i<2; i++){
		tipoToneles(vecToneles,n,i,vecTonelesTipoTonel,dimVecTipo);
		mostrarConsolaToneles(vecTonelesTipoTonel, dimVecTipo);
	}
*/
	
	//5) La identificaci�n del tonel que tiene la menor cantidad almacenada y la identificaci�n del tonel que tiene la mayor cantidad almacenada. (Suponer sin repeticiones)
	menorMayor(vecToneles,n,idMin,idMax);
	cout<<"Identificacion del tonel que tiene la menor cantidad almacenada: "<<idMin<<endl;
	cout<<"Identificacion del tonel que tiene la menor cantidad almacenada: "<<idMax<<endl;
	
	
	
	getch();
	return 0;
}
