#include<iostream>
#include<conio.h>

#define CANTRAZAS 4
using namespace std;

int main(void){
	
	int cantVacas, i, j,respDatos,idProduccion,indentVaca,cantLeche,totalLeche,maxLeche,minLeche,acumuladorLehcexRaza,contVacasPromedioSuperado;                          /*entrada de datos 1*/
	cout<<"ingrese la cantidad de vacas "<<endl; /*entrada de datos 1*/
	cin>> cantVacas;
	                                        
	                                        /*entrada de datos 2*/
	/*defino vectores*/
	int vIdentificacion[cantVacas],vRaza[cantVacas],vLitrosMensuales[cantVacas],vCantLitros[cantVacas],vSuperiorLitros[cantVacas];
	int acumuladorLechexRaza[cantVacas],vecContRegistros[cantVacas];
	int vRazas[CANTRAZAS],vLitrosxRaza[CANTRAZAS];
	
	/*inicializo vectores y variables*/
	vRazas[0]= 10;
	vRazas[1]= 20;
	vRazas[2]= 30;
	vRazas[3]= 40;
	
	totalLeche=0;
	acumuladorLehcexRaza=0;
	
	for(i=0;i<CANTRAZAS;i++){
		vLitrosxRaza[i]=0;
	}
	
	for(i=0;i<cantVacas;i++){
		acumuladorLechexRaza[i]=0;
		vecContRegistros[i]=0;
		
	}
	
	for(i=0;i<cantVacas;i++){
		
		cout<<"ingrese el numero de identificacion de la vaca "<<endl;
		cin>>vIdentificacion[i];
		
		
		
		do{/*valido la raza*/
			
			cout<<endl<<"ingrese la raza de la vaca "<<endl;
			cin>>vRaza[i];
			j=0;
			while (j<CANTRAZAS && vRaza[i]!=vRazas[j]){   		
				j++;
			}
			if(j==CANTRAZAS){
				cout<< "      ***ERROR***"<<endl;
			}	
		}while(j==CANTRAZAS);
		
		cout<<"ingrese cantidad de litros de leche obtenidos"<<endl;
		cin>>vLitrosMensuales[i];
		
		while (vLitrosMensuales[i]<= 0){   /*valido que los litros sean mayor a 0*/
			cout<< "      ***ERROR***"<<endl;
			cout<<"ingrese cantidad de litros de leche obtenidos en el mes"<<endl;
			cin>>vLitrosMensuales[i];
		}
	}
	
		                                      /*entrada de datos 3*/
		
		cout<<"Hay datos para cargar(si:1 o no:0) "<<endl;
		cin>>respDatos;
		
		while (respDatos!=1 && respDatos!=0){/*valido la respuesta*/
			
			cout<<"Hay datos para cargar(si:1 o no:0) "<<endl;
			cin>>respDatos;
		}
		
		while(respDatos==1){
			cout<<"ingrese id de produccion "<<endl;
			cin>> idProduccion;
			
			do{/*valido identificacion*/
				
				cout<<endl<<"ingrese la identificacion de la vaca "<<endl;
				cin>>indentVaca;
				i=0;
				
				while (i<cantVacas && vIdentificacion[i]!=indentVaca){   	
					i++;
				}
				
				if(i==cantVacas){
					cout<< "      ***ERROR***"<<endl;
				}	
			}while(i==cantVacas);
			
			cout<<"ingrese la cantidad de leche obtenida"<<endl;
			cin>>cantLeche;
			
				while (cantLeche<= 0){   /*valido que los litros sean mayor a 0*/
				cout<< "      ***ERROR***"<<endl;
				cout<<"ingrese cantidad de litros de leche obtenidos"<<endl;
				cin>>cantLeche;
				}
			
			vecContRegistros[i]++; /*cuento la cantidad de registro x vaca*/
			vCantLitros[i]+=cantLeche;/*sumo la cantidad de leche por cada vaca*/
			
			cout<<"Hay datos para cargar(si:1 o no:0) "<<endl;
			cin>>respDatos;
			
			while (respDatos!=1 && respDatos!=0){/*valido la respuesta*/
				
				cout<<"Hay datos para cargar(si:1 o no:0) "<<endl;
				cin>>respDatos;
			}	
		}
	
	/*punto 1*/
	cout<<endl;	
	cout<<"la cantidad de vacas es: "<<cantVacas<<endl;
	cout<<endl;
	
	/*punto 2*/
    for(i=0;i<cantVacas;i++){
    	
    	cout<<"la cantidad de leche de la vaca "<<vIdentificacion[i]<<" es: "<<vCantLitros[i]<<" Lts"<<endl;
    	
    }
     	cout<<endl;
     	
    /*punto 3*/

	for(i=0;i<cantVacas;i++){
		totalLeche+=vCantLitros[i];
	}	
	
	cout<<	"El total de leche que dieron entre todas las vacas es: "<< totalLeche<<" Lts"<<endl;
	
	cout<<endl;
	
	/*punto 4*/
	
	maxLeche = 0;
	
	for(i=0;i<cantVacas;i++){
		
		if(vCantLitros[i]>vCantLitros[maxLeche]){
			maxLeche= i;
		}	
	}
	
	cout<<"la vaca que dio mas litros de leche es: "<< vIdentificacion[maxLeche]<< " y dio "<<vCantLitros[maxLeche];
	
	cout<<endl;

	/*punto 5*/
	
	minLeche = 0;
	
	for(i=0;i<cantVacas;i++){
	
		if(vCantLitros[i]<vCantLitros[minLeche]){
			minLeche= i;
		}	
	}
	
	cout<<"la vaca que dio menos litros de leche es: "<< vIdentificacion[minLeche]<< " y dio "<<vCantLitros[minLeche];
	
	cout<<endl;
	
	/*punto 6*/
	
	for(i = 0; i < CANTRAZAS; i++){
	
		for(j = 0; j < cantVacas; j++){
			
			if(vRaza[j] == vRazas[i]){
				vLitrosxRaza[i] += acumuladorLechexRaza[j];
			}
			
		}
		cout << "la raza " << vRazas[i] << " dio " << vLitrosxRaza[i] << " lts";
	
	}	
	
	cout << endl;
	
	/*punto 7*/
	
	
	for(i = 0; i < cantVacas ; i++){
		
		cout << " La vaca " << i << "tuvo " << vecContRegistros[i] << " registros";
		cout << endl;
	}
	
	cout << endl;
	
	/*punto 8*/
	
	for(i = 0; i< cantVacas ; i++){
		if(vCantLitros[i] > vLitrosMensuales[i]){
			contVacasPromedioSuperado++;
		}
	}
	
	cout << "Hubo " << contVacasPromedioSuperado << " vacas que superaron su produccion promedio de leche";
	
	cout << endl;
	
	getch();
	return 0;
	
	
}