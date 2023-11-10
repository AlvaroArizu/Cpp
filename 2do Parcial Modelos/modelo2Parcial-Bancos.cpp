#include<iostream>
#include<stdio.h>
#include<conio.h>
#define DIM 100 //asumo 100 clientes
using namespace std;

struct Datos{
	int nroCuenta;
	int limiteExtraccion;
	int saldoIncial;
	int saldoActual;
	int clave;
	int contExtraccion;
};

void claveDigitos(int&);
void cargaDatos(Datos[], int, int&);
void imprimir(Datos[],int);
double promedio(Datos[],int);
int validarNRoCuenta(Datos[],int,int);
bool validarDigitos(int);
bool validarClave(int,int);
void extrac (Datos[], int, int);
void depo (Datos[], int, int);
bool extraccionesLimite(Datos[],int);
void cantidadCuentas(Datos[],int, int&, int&, int&);



int main(void){//hacer variable auxiliar para validar
	
	Datos cuentas[DIM];
	int i, resp, aux, dim, indiceCuenta,n,extraccion,auxNroCuenta, auxClave;
	int deposito,contExtraccionesCuentas,contAcreedor=0,contDeudor=0,contNulo=0;
	char tpMovimiento;
	
	contExtraccionesCuentas=0;
	
	
	cout<<"Hay cuentas para cargar?(Si=1/No=0) "<<endl;
	cin>>resp;
	
	while((resp!=0)&&(resp!=1)){
		
		cout<<"Respuesta mal ingresada(Si=1/No=0), por favor vuelva a ingresarla"<<endl;
		cin>>resp;
	}
	
	cargaDatos(cuentas,resp,dim);
	
	imprimir(cuentas,dim);
	
	cout<<"INGRESO DE MOVIMIENTOS DIARIOS"<<endl;
	cout<<"Ingrese numero de cuenta: ";
	cin>>resp;
	indiceCuenta=validarNRoCuenta(cuentas,dim,resp);
	while(indiceCuenta==-1){
		
		cout<<"No se encontro el numero de cuenta por favor vuelva a ingresarlo: ";
		cin>>resp;
		
		indiceCuenta=validarNRoCuenta(cuentas,dim,resp);
	}
	
	while(resp!=0){
		
		cout<<"Ingrese la clave. ";
		cin>>auxClave;
		
		claveDigitos(auxClave);
		
		n=1;
		
		while((n>3)||(validarClave(cuentas[indiceCuenta].clave,auxClave)==false)){
				cout<<"Clave Erronea, vuelva a ingresarla,(intento  "<<n<<" de 3): "<<endl;
				cin>>auxClave;
				
				claveDigitos(auxClave);
				
				n++;
		}
	
		
		if(n<=3){
			
			cout<<"Ingrese la operacion que desea realizar: "<<endl;
			cout<<"E=Extraccion"<<endl;
			cout<<"D=Deposito"<<endl;
			cout<<"C:Consulta de Saldos"<<endl;
		
			cin>>tpMovimiento;
			
			while((tpMovimiento!='E')&&(tpMovimiento!='e')&&(tpMovimiento!='D')&&(tpMovimiento!='d')&&(tpMovimiento!='C')&&(tpMovimiento!='c')){
				
				cout<<"ingreso la respuesta erronea, por favor vuelva a ingresarla: ";
				cout<<"E=Extraccion"<<endl;
				cout<<"D=Deposito"<<endl;
				cout<<"C:Consulta de Saldos"<<endl;
				cin>>tpMovimiento;
			}
		
			if((tpMovimiento=='E')||(tpMovimiento=='e')){
				cout<<"ingrese el monto que quiere retirar: "<<endl;
				cin>>extraccion;
				
				if(extraccionesLimite(cuentas,indiceCuenta)==true){
					extrac(cuentas,indiceCuenta,extraccion);
					cout<<"Se ha extraido con exito $"<<extraccion<<endl;

				}
				else{
					cout<<"No se puede realizar la extracion, saldo insuficiente."<<endl;
				}
			}
			else{
			
				if((tpMovimiento=='D')||(tpMovimiento=='d')){
				
					cout<<"ingrese el monto que quiere depositar: "<<endl;
					cin>>deposito;
				
					depo(cuentas,indiceCuenta,deposito);
					
					cout<<"la operacion se realizo con exito el total de su cuenta es: $"<<cuentas[i].saldoActual<<endl;
				}
				else{
					cout<<"Su saldo Actual es de: $"<<cuentas[i].saldoActual<<endl;
				}	
			}
			
		}
		else{
			
			cout<<"usted ah usado los 3 intentos, no podra realizarce ninguna operacion en el dia"<<endl;
		}
		
		
	}
	
	imprimir(cuentas,dim);
	
	cout<<endl<<"El promedio de todas los saldos actuales de las cuentas es: "<<promedio(cuentas,dim)<<endl;
	
	cantidadCuentas(cuentas,dim,contAcreedor,contDeudor,contNulo);
	
	cout<<"La cantidad de cuentas acreedoras es de: "<<contAcreedor<<endl;
	cout<<"La cantidad de cuentas deudoras es de: "<<contDeudor<<endl;
	cout<<"La cantidad de cuentas nulas es de: "<<contNulo<<endl;
	
	for(i=0;i<dim;i++){
		
		if(cuentas[i].contExtraccion==3){
			contExtraccionesCuentas++;
		}
		
	}
	
	cout<<"la cantidad de cuentas con 3 extracciones es de: "<<contExtraccionesCuentas<<endl;
	
	getch ();
	return 0;	
	
}

void claveDigitos(int &auxClave){

	while((auxClave>9999)||(auxClave<1000)){
		
		cout<<"La clave debe tener 4 Digitos, ingresela nuevamente: ";
		cin>>auxClave;	
	}
	
}

void cargaDatos(Datos cuentas[], int resp, int& dim){
	
	int	i=0;
	int auxNroCuenta, auxClave;
	
	while(resp==1){
		
		cout<<"ingrese nro de Cuenta: ";
		cin>>auxNroCuenta;
		
		while(auxNroCuenta<=0){
			cout<<endl<<"El numero de cuenta tiene que ser mayor a 0, vuelva a ingresarlo ";
			cin>>auxNroCuenta;
		}
		
		cuentas[i].nroCuenta=auxNroCuenta;
		
		cout<<"Ingrese el monto limite diario para extracciiones: ",
		cin>>cuentas[i].limiteExtraccion;
		
		cout<<endl<<"Ingrese el saldo incial de la cuenta: ";
		cin>>cuentas[i].saldoIncial;
		
		cuentas[i].saldoActual=cuentas[i].saldoIncial;
		
		cout<<endl<<"Ingrese la clave de la cuenta: ";
		
		cin>>auxClave;
		
		claveDigitos(auxClave);
		
		cuentas[i].clave=auxClave;
		
		cout<<"Hay mas cuentas para cargar?(Si=1/No=0) "<<endl;
		cin>>resp;

		while((resp!=0)&&(resp!=1)){
		
			cout<<"Respuesta mal ingresada(Si=1/No=0), por favor vuelva a ingresarla"<<endl;
			cin>>resp;
		}
		
		cuentas[].contExtraccion=0;
		i++;
	}
	
	dim=i;	
}

void imprimir(Datos vec[],int n){
	int i;
	for(i=0;i<n;i++){
		cout<<endl<<"*****************************************************"<<endl;
		cout<<vec[i].nroCuenta<<endl;
		cout<<vec[i].limiteExtraccion<<endl;
		cout<<vec[i].saldoIncial<<endl;
		cout<<vec[i].saldoActual<<endl;
		cout<<vec[i].clave<<endl;
	}
}

double promedio(Datos vec[], int n){
	int i, acum=0;
	double promedio;
	
	for(i=0;i<n;i++){
		acum+=vec[i].saldoActual;
	}
	promedio=acum/n;
	
	return promedio;

}

int validarNRoCuenta(Datos vec[],int n,int resp){
	int i,m;
	i=0;
	while((i<n)&&(vec[i].nroCuenta!=resp)&&(resp!=0)){

		i++;
	}
	
	if(i==n){
		m=-1;
	}
	else{
		m=i;
	}
	
	return m;
	
}

bool validarDigitos(int n){
	/*
	if((n<1000)||(n>9999)){
		return false;
	}
	else{
		return true;
	}
	*/
	return !((n<1000)||(n>9999));
}

bool validarClave(int n,int m){
	
	bool flag;
	
	if(n==m){
		flag=true;
	}
	else{
		flag=false;
	}
	
	return flag;
};

void extrac(Datos vec[], int i, int e){
	if((vec[i].limiteExtraccion<e)){
		cout<<"la operacion no se pudo realizar, por que su monto de extraccion diario se ah terminado"<<endl;
	}
	else{
		vec[i].limiteExtraccion-=e;
		vec[i].saldoActual-=e;
		cout<<"La operacion se realizo con exito, su monto actual es: $"<<vec[i].saldoActual<<endl;//en el main
	}
	
	
}

void depo(Datos vec[],int i,int d){
	vec[i].saldoActual+=d;
}

bool extraccionesLimite(Datos vec[],int i){
	bool flag;
	
	if(vec[i].contExtraccion<3){
		vec[i].contExtraccion++;
		flag=true;
	}
	if(vec[i].contExtraccion==3){
		flag=false;
	}
	
	return flag;
}

void cantidadCuentas(Datos vec[],int n,int &contAcreedor, int &contDeudor, int &contNulo){
	int i;
		
	for(i=0;i<n;i++){
		if(vec[i].saldoActual>=1){
			contAcreedor++;
		}
		else{
			if(vec[i].saldoActual<=-1){
				contDeudor++;
			}
			else{
				contNulo++;
			}
		}
	}
	
	
	
}

