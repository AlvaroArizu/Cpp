#include<iostream>
#include<conio.h>
#include<stdio.h>
#include<iomanip>
#define DIM 50 //estimo 50 productos

using namespace std;


struct Datos{
	
	int codigo;
	int precioCompra;
	int precioVenta;
	int stockInicial;
	int stockMinimo;
	int stockActual;
	int acumProdVendidos;
};

void cargaDatos (Datos[],int,int&);
void validacionCodigo(Datos[],int,int&,int&);
void imprimir(Datos[],int);
int busqueda(Datos[],int,int);
int ganancias(Datos[],int );
int pedir(Datos[],int);
int maximo(Datos[],int);
int minimo(Datos[],int);
void maxMin(Datos[],int,int&,int&);
void sobreStock(Datos[],int,Datos[],int&);

int main(void){
	
	int resp, i, aux, a, dim, dimStock;
	Datos productos[DIM], stock[DIM];
	int ganan, cantMinimo, max=0, min=0;
	
	
	
	for(i=0;i<DIM;i++){//inicializo en 0 el vector
		
		stock[i].codigo=0;
		stock[i].precioCompra=0;
		stock[i].precioVenta=0;
		stock[i].stockActual=0;
		stock[i].stockInicial=0;
		stock[i].stockMinimo=0;
		stock[i].acumProdVendidos=0;
	}
	
	
	cout<<"tiene productos para ingresar: (Si=1/No=0) "<<endl;
	cin>>resp;
	
	while((resp!=1)&&(resp!=0)){
		cout<<"*****ERROR*****"<<endl;
		cout<<"vuelva a ingresar su respuesta (Si=1/No=0)"<<endl;
		cin>>resp;	
	}
	
	
	cargaDatos (productos,resp,dim);
	
	cout<<"Ingreso de ventas(codigo de profucto 0, corta el ingreso)"<<endl;
	
	cout<<"ingrese el codigo del producto vendido: ";
	cin>>resp;
	
	validacionCodigo(productos,dim,resp,aux);
	
			

	while(resp!=0){
		
		cout<<"Ingrese la cantidad vendidas"<<endl;
		cin>>a;
		
		productos[aux].acumProdVendidos+=a;
		productos[aux].stockActual-=a;
	
		cout<<"ingrese el codigo del producto vendido: ";
		cin>>resp;
	
		validacionCodigo(productos,dim,resp,aux);
	
	}
	
	//punto 1
	imprimir(productos, dim);
	
	//punto 2 
	
	ganan=ganancias(productos, dim);
	cout<<"El margen de ganacia total sobre el stock actual es: $"<<ganan<<endl;
	
	
	//punto 3
	
	cantMinimo=pedir(productos,dim);
	
	cout<<"la cantidad de productos que alcanzan el Stock minimo es de "<<cantMinimo<<" productos"<<endl;
	
	
	//punto 4
	
	maxMin(productos,dim,max,min);
	cout<<"El menor precio de venta es "<<min<<", del procuto "<<productos[min].codigo<<endl;
	cout<<"El mayor precio de venta es "<<max<<", del procuto "<<productos[max].codigo<<endl;
	
	//punto 5
	
	sobreStock(productos,dim,stock,dimStock);
	imprimir(stock,dimStock);
	
	
	 
	
	
	
	getch();
	return 1;
}

void cargaDatos (Datos productos[],int resp,int &dim){
	int i=0,auxCodigo;
	
	
	while(resp==1){
		
		cout<<"Ingrese los datos solicitados "<<endl;
		
		cout<<"CODIGO DE PRODUCTO: ";
		cin>>auxCodigo;
		
		while(auxCodigo==0){
			
			cout<<"El codigo del producto no puede ser 0"<<endl;
			cout<<"vuelva a ingresar el codigo del producto"<<endl;
			cin>>auxCodigo;
		}
		productos[i].codigo=auxCodigo;
		
		cout<<endl<<"PRECIO DE COMPRA: ";
		cin>>productos[i].precioCompra;
		cout<<endl;
		
		cout<<"PRECIO DE VENTA: ";
		cin>>productos[i].precioVenta;
		cout<<endl;
		
		cout<<"STOCK INICIAL: ";
		cin>>productos[i].stockInicial;
		cout<<endl;
		
		productos[i].stockActual=productos[i].stockInicial;
		
		cout<<"STOCK MINIMO: ";
		cin>>productos[i].stockMinimo;
		cout<<endl;
		
		productos[i].acumProdVendidos=0;
		
		cout<<"tiene productos para ingresar: (Si=1/No=0) "<<endl;
		cin>>resp;
		
		while((resp!=1)&&(resp!=0)){
			cout<<"*****ERROR*****"<<endl;
			cout<<"vuelva a ingresar su respuesta (Si=1/No=0)"<<endl;
			cin>>resp;	
		}
		
		i++;	
	}
	
	dim=i;
}

void validacionCodigo(Datos productos[],int dim,int &resp,int &aux){
	int i;
	do{
	
		i=0;	
		while((i<dim)&&(productos[i].codigo!=resp)&&(resp!=0)){

			i++;
		}
	
		if(i==dim){
			cout<<"El codigo no se encuentra, por favor vuelva a ingresarlo"<<endl;
			cin>>resp;
		}
		
	}while(i==dim);
		
	aux=i;	
	
	
}

void separador(){
	cout<<endl<<"*****************************************************************************************"<<endl;
}

void imprimir(Datos vec[],int n){
	
	int i;
	for(i=0;i<n;i++){
		separador();
		cout<<"codigo Producto "<<vec[i].codigo<<endl;
		cout<<"Precio de Compra "<<vec[i].precioCompra<<endl;
		cout<<"Precio de Venta "<<vec[i].precioVenta<<endl;
		cout<<"Stock Inicial "<<vec[i].stockInicial<<endl;
		cout<<"Stock actual "<<vec[i].stockActual<<endl;
		cout<<"Stock Minimo "<<vec[i].stockMinimo<<endl;
		cout<<"Productos Vendidos"<<vec[i].acumProdVendidos;
	}
}

int busqueda(Datos vec[],int dim,int n){
	int i,m;
	i=0;
	while((i<dim)&&(vec[i].codigo!=n)&&(n!=0)){

		i++;
	}
	
	if(i==dim){
		m=-1;
	}
	else{
		m=i;
	}
	
	return m;
};

int ganancias(Datos vec[],int n ){
	
	int i, acum=0, totalVenta;
	
	for(i=0;i<n;i++){
		totalVenta=((vec[i].precioVenta-vec[i].precioCompra)*vec[i].stockActual);
		cout<<totalVenta;
		acum+=totalVenta;
	}
	
	return acum;
};

int pedir(Datos vec[],int n){
	
	int i, cont;
	
	for(i=0;i<n;i++){
		if(vec[i].stockActual<=vec[i].stockMinimo){
			cont++;
		}
		
	}
	
	return cont;
	
	
}

int maximo(Datos vecMax[],int n){
	int i, max;
	
	max=0;
	
	for(i=1;i<n;i++){
		
		if(vecMax[i].precioVenta>vecMax[max].precioVenta){
			max=i;
		}
	}
	
	return max;
	
}

int minimo(Datos vecMin[],int n){
	
	int i, min;
	
	min=0;
	
	for(i=1;i<n;i++){
		
		if(vecMin[i].precioVenta<vecMin[min].precioVenta){
			min=i;
		}
	}
	
	return min;
}

void maxMin(Datos vec[],int n,int &max,int &min){
	
	min=minimo(vec,n);
	max=maximo(vec,n);
	
	
}

void sobreStock(Datos vec[],int n,Datos vec2[],int &dimStock){

int i=0;

dimStock=0;
 	
	for(i=0;i<n;i++){
		
	 	if(vec[i].stockActual>1.5*vec[i].stockMinimo){
	 		vec2[dimStock].codigo=vec[i].codigo;;
			vec2[dimStock].precioCompra=vec[i].precioCompra;
			vec2[dimStock].precioVenta=vec[i].precioVenta;
			vec2[dimStock].stockInicial=vec[i].stockInicial;
			vec2[dimStock].stockMinimo=vec[i].stockMinimo;
			vec2[dimStock].stockActual=vec[i].stockActual;
			vec2[dimStock].acumProdVendidos=vec[i].acumProdVendidos;
			dimStock++;
		}
	}
	 	
}











