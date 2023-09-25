#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <iomanip>

#define DISTRITOS 3
#define MOTIVOS 5

using namespace std;

int main (void){
	
	int f,c,i,datos,dni,nroDistrito, transporte,estado, codMotivo, distrito,posDistrito,posMotivo;
	
	int vecCodMotivos[MOTIVOS];
	
	int permisosMotivosXDistritos[MOTIVOS][DISTRITOS], permisosOtoXMotivosXDistritos[MOTIVOS][DISTRITOS];
	
	// inicializacion de matriz y vector
	for(f=0;f<MOTIVOS;f++){
		for(c=0;c<DISTRITOS;c++){
			permisosMotivosXDistritos[f][c]=0;
			permisosOtoXMotivosXDistritos[f][c]=0;
		}
	}

	for(i=0;i<MOTIVOS;i++){
		vecCodMotivos[i]=0;
	}

	// ingreso de datos
	for(i=0;i<MOTIVOS;i++){
		cout<<"Ingrese el codigo del motivo (2.000 - 10.000): ";
		cin>>codMotivo;
		
		while (codMotivo <2000 || codMotivo >10000 ){
			cout<< "ERROR!. Ingrese un motivo valido: ";
			cin >> codMotivo;
		}
		
		vecCodMotivos[i]= codMotivo;
	}
	
	cout<<endl;
	
	cout<<"HAY DATOS PARA CARGAR (1: SI / 2: NO): ";
	cin>> datos;
	cout<<endl;
	
	while(datos!= 1 && datos!=2){
		cout<<"INGRESO UN NUMERO DISTINTO. HAY DATOS PARA CARGAR (1: SI / 2: NO): ";
		cin >>datos;
	}
	
	
	
	while(datos==1){
		cout<<"Ingrese el DNI del solicitante: ";
		cin>> dni;
		
		cout<<"Ingrese el codigo del motivo (2.000 - 10.000): ";
		
		do{
			cin>>codMotivo;
			f=0;
			
				while (codMotivo <2000 || codMotivo >10000 ){
			cout<< "ERROR!. Ingrese un motivo valido: ";
			cin >> codMotivo;
			}
			
			while(f < MOTIVOS && codMotivo != vecCodMotivos[f]){
				f++;
			}
			
			if(f==MOTIVOS){
				cout<<"El codigo del motivo no se encuentra. Ingreselo nuevamente: ";
			}
				
		} while(f== MOTIVOS);
		
		cout<<"Ingrese el numero de distrito: ";
		
		cin >>nroDistrito;
		
		while(nroDistrito <1 || nroDistrito >22){
			cout<< "ERROR!. Ingrese un numero de distrito valido: ";
			cin >>nroDistrito;
		}
		
		
		cout << "Ingrese el transporte a utilizar (10: Transporte Público, 20:  Vehículo, 30: Bicicleta): ";
		cin >> transporte;
		
		while(transporte!= 10 && transporte!=20 && transporte!=30){
			cout << "ERROR!. Ingrese un transporte a utilizar VALIDO (10: Transporte Público, 20:  Vehículo, 30: Bicicleta): ";
			cin>> transporte;
		}
		
		cout << "Ingrese el estado (1: Pendiente - 2 Otorgado): ";
		cin >> estado;
		
		while (estado!= 1 && estado!=2){
				cout << "ERROR!. Ingrese un estado VALIDO (1: Pendiente - 2 Otorgado): ";
				cin >> estado;
		}
		
		
		permisosMotivosXDistritos[f][nroDistrito -1]++;
		
		if(estado==2){
			permisosOtoXMotivosXDistritos[f][nroDistrito -1]++;
		}
		
		
		cout<<"HAY DATOS PARA CARGAR (1: SI / 2: NO): ";
		cin>> datos;
		cout<<endl;
	
		while(datos!= 1 && datos!=2){
		cout<<"INGRESO UN NUMERO DISTINTO. HAY DATOS PARA CARGAR (1: SI / 2: NO): ";
		cin >>datos;
		}
	}
	
	cout<<endl<<"**************************************************************"<<endl;
	
	cout<<endl;
	
	//1. Por cada Distrito y por cada Motivo, la cantidad de permisos solicitados
	
	cout<< "Por cada Distrito y por cada Motivo, la cantidad de permisos solicitados"<<endl;
	for(c=0;c<DISTRITOS;c++){
		for(f=0;f<MOTIVOS;f++){
			cout<<"Distrito "<< c +1<< " motivo "<< vecCodMotivos[f] << " - Cantidad de permisos solicitados: "<< permisosMotivosXDistritos[f][c]<<endl;
		}
		cout<<endl;
	}
	
	//2. Por cada Motivo y por cada Distrito, la cantidad de permisos solicitados en estado Otorgado
	cout<< "Por cada Motivo y por cada Distrito, la cantidad de permisos solicitados en estado Otorgado"<<endl;
	for(f=0;f<MOTIVOS;f++){
		for(c=0;c<DISTRITOS;c++){
			cout<<"Motivo " << vecCodMotivos[f]<<" distrito "<< c+1 <<" - Cantidad de permisos otorgaods: "<< permisosOtoXMotivosXDistritos[f][c]<<endl;
		}
		cout<<endl;
	}
	
	//3. Por cada Motivo, la cantidad de distritos de los cuales no se han solicitado permisos.
	cout<< "Cantidad de distritos sin solicitud de permisos"<<endl;
	for(f=0;f<MOTIVOS;f++){
		int contDistritosSinPermisos=0;
		for(c=0;c<DISTRITOS;c++){
			if(permisosMotivosXDistritos[f][c] ==0){
				contDistritosSinPermisos++;
			}
		}
		cout<< "Motivo "<< vecCodMotivos[f] << " - Cantidad de distritos sin solicitud de permisos: " << contDistritosSinPermisos <<endl;
	}
	cout <<endl;
	
	//4.	La cantidad de permisos solicitados por cada Distrito.
	cout<< "La cantidad de permisos solicitados por cada distrito."
	for(c=0;c<DISTRITOS;c++){
		int acumPermisosSolicitados =0;
		for(f=0;f<MOTIVOS;f++){
			acumPermisosSolicitados += permisosMotivosXDistritos[f][c];
		}
		cout<< "Distrito " << c+1 << " - Permisos solicitados: "<< acumPermisosSolicitados <<endl;
	}
	cout<<endl;
	
	//5. Cuál fue el Motivo y en qué Distrito y por el cuál se solicitó la menor cantidad de permisos 
	
	cout<< "Motivo y Distrito y por el cuál se solicitó la menor cantidad de permisos.";
	
	for(f=0;f<MOTIVOS;f++){
		for(c=0;c<DISTRITOS;c++){
			if(f==0 && c==0){
				posMotivo = 0;
				posDistrito =0;
			}
			else {
				if(permisosMotivosXDistritos[f][c] < permisosMotivosXDistritos[posMotivo][posDistrito]){
					posMotivo=f;
					posDistrito=c;
				}
			}
		}
	}
	
	cout<<"El motivo "<< vecCodMotivos[posMotivo] << " distrito " << posDistrito +1 << " solicito la menor cantidad de permisos."<<endl;
	
	
	
	
	
	
	
	
	
	
	
	
	
	// Imprimir matriz permisosMotivosXDistritos
	cout << "Matriz permisosMotivosXDistritos:" << endl;
	
	for(f=0;f<MOTIVOS; f++){
		for(c=0;c<DISTRITOS;c++){
			cout<<setw(7)<<permisosMotivosXDistritos[f][c];
		}
		cout << endl;
	}
	cout<< endl;
	// Imprimir matriz permisosOtoXMotivosXDistritos
    cout << "Matriz permisosOtoXMotivosXDistritos:" << endl;
    
	for(f=0 ;f<MOTIVOS;f++){
		for(c=0;c<DISTRITOS;c++){
			cout<<setw(7)<<permisosOtoXMotivosXDistritos[f][c];
		}
		cout<<endl;
	}
	cout<< endl;
	
	
	
	getch();
	return 0;
	
}


