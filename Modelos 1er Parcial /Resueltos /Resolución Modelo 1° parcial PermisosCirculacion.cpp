#include<iostream>
#include<conio.h>
#include<stdio.h>


#define CANTMOTIVOS 3
#define CANTDISTRITOS 5


using namespace std;

int main (void)
{
    
 
    int iMot, iDistr, auxMot, hayDatos, dni, nroDistrito, transp, estado, cantDistritosSinPermisos, contPermisosXDistrito, posDistritoMin, posMotivoMin;
	
	int vecCodMotivos[CANTMOTIVOS];
    int matCantPermisosxMotivoxDistrito[CANTMOTIVOS][CANTDISTRITOS], matCantPermisosOtoxMotivoxDistrito[CANTMOTIVOS][CANTDISTRITOS];
   
    for (iMot=0;iMot<CANTMOTIVOS;iMot++){
        for (iDistr=0;iDistr<CANTDISTRITOS;iDistr++){
        	matCantPermisosxMotivoxDistrito[iMot][iDistr]=0;
            matCantPermisosOtoxMotivoxDistrito[iMot][iDistr]=0;
		}
        	
    }   
    
    cout<<"***** Ingreso de Motivos*****"<<endl;
    for (iMot=0;iMot<CANTMOTIVOS;iMot++){
        cout<<"Ingrese codigo de Motivo (entre 2000 y 10000): ";
        cin>>auxMot;
        while (auxMot<2000 || auxMot>10000){
             cout<<"Codigo invalido. Ingrese codigo de Motivo (entre 2000 y 10000): ";
             cin>>auxMot; 
        }
        vecCodMotivos[iMot]=auxMot;
    }
   
    cout<<"*****************************"<<endl  ;
    cout<<"***** Ingreso de PERMISOS *****"<<endl<<endl;
    
  	cout<<"Hay datos para cargar (1: SI / 2: NO):  ";
    cin>>hayDatos;
    while (hayDatos!=1 && hayDatos!=2){
    	cout<<"Opcion invalida. Hay datos para cargar (1: SI / 2: NO):  ";
    	cin>>hayDatos; 
    }
        
    while (hayDatos == 1){    
	
		cout<<"Ingrese DNI: ";
    	cin>>dni;

	
		do{
			cout<<"Ingrese codigo de Motivo (entre 2000 y 10000): ";
	    	cin>>auxMot;
	    	while (auxMot<2000 || auxMot>10000){
	         cout<<"Codigo invalido. Ingrese codigo de Motivo (entre 2000 y 10000); ";
	         cin>>auxMot; 
	    	}
	   		iMot=0;
	        while ((iMot<CANTMOTIVOS) && (vecCodMotivos[iMot] != auxMot)){
				iMot++; 
			}
	                 
	       	if (iMot==CANTMOTIVOS){
	       		cout<<"El codigo de distrito no existe. ";
			}
	         	
		}while (iMot==CANTMOTIVOS);
       
       	cout<<"Ingrese numero de Distrito (entre 1 y 22): ";
	    cin>>nroDistrito;
        while (nroDistrito<1 || nroDistrito>22)
        {
            cout<<"Distrito incorrecto. Ingrese numero de Distrito (entre 1 y 22): ";
            cin>>nroDistrito;
        }      
        
        cout<<"Ingrese transporte (10: Transporte Publico, 20:  Vehiculo, 30: Bicicleta): ";
	    cin>>transp;
        while ((transp!=10) && (transp!=20) && (transp!=30))
        {
            cout<<"Transporte incorrecto. Ingrese transporte (10: Transporte Publico, 20:  Vehiculo, 30: Bicicleta): ";
            cin>>transp;
        }      
        
       	cout<<"Ingrese estado (1: Pendiente - 2 Otorgado):  ";
    	cin>>estado;
    	while (estado!=1 && estado!=2){
            cout<<"Estado invalido. Ingrese estado (1: Pendiente - 2 Otorgado):  ";
            cin>>estado; 
        }
      
      	matCantPermisosxMotivoxDistrito[iMot][nroDistrito-1]=matCantPermisosxMotivoxDistrito[iMot][nroDistrito-1]+1;
      	
      	if (estado==2)  {
      		matCantPermisosOtoxMotivoxDistrito[iMot][nroDistrito-1]=matCantPermisosOtoxMotivoxDistrito[iMot][nroDistrito-1]+1; 	
		}
	   
      
       	cout<<"*****************************************************************"<<endl;   
      
      
	  	cout<<"Hay datos para cargar (1: SI / 2: NO):  ";
	    cin>>hayDatos;
	    while (hayDatos!=1 && hayDatos!=2){
	        cout<<"Opcion invalida. Hay datos para cargar (1: SI / 2: NO):  ";
	        cin>>hayDatos; 
		}
      
	  
   }

	cout<<"***************************SALIDAS DE DATOS**********************"<<endl;   
	cout<<"*****************************************************************"<<endl<<endl;   
   	//PUNTO 1
	for (iDistr=0;iDistr<CANTDISTRITOS;iDistr++){
		for (iMot=0;iMot<CANTMOTIVOS;iMot++){
			cout<<"Distrito: "<<iDistr+1<<" Motivo: "<<vecCodMotivos[iMot]<<" Cantidad Permisos: "<<matCantPermisosxMotivoxDistrito[iMot][iDistr]<<endl;
       	}
	}
	
	cout<<"*****************************************************************"<<endl;   	
	//PUNTO 2
	for (iMot=0;iMot<CANTMOTIVOS;iMot++){
		for (iDistr=0;iDistr<CANTDISTRITOS;iDistr++){
			cout<<"Motivo: "<<vecCodMotivos[iMot]<<" Distrito: "<<iDistr+1<<"Cantidad Permisos Estado Otorgado: "<<matCantPermisosOtoxMotivoxDistrito[iMot][iDistr]<<endl;
       	}
   }	
	 
	cout<<"*****************************************************************"<<endl;   	  
	//PUNTO 3 
	cout<<"Cantidad de Distritos de los cuales no se han solicitado permisos por Motivo "<<endl;
	for (iMot=0;iMot<CANTMOTIVOS;iMot++){
		cantDistritosSinPermisos=0;
		for (iDistr=0;iDistr<CANTDISTRITOS;iDistr++){
			if(matCantPermisosxMotivoxDistrito[iMot][iDistr]==0){
				cantDistritosSinPermisos++;
			}
			cout<<"Motivo "<<vecCodMotivos[iMot]<< " cantidad Distritos: "<<cantDistritosSinPermisos <<endl;
       	}
   	}	    
	
	cout<<"*****************************************************************"<<endl;   	  
	//PUNTO 4
	cout<<"Cantidad de de permisos solicitados por cada Distrito "<<endl;
	for (iDistr=0;iDistr<CANTDISTRITOS;iDistr++){
		contPermisosXDistrito=0;
		for (iMot=0;iMot<CANTMOTIVOS;iMot++){
			contPermisosXDistrito=contPermisosXDistrito+matCantPermisosxMotivoxDistrito[iMot][iDistr];
       	}
       	cout<<"Distrito: "<<iDistr+1<<" Permisos solicitados: "<<contPermisosXDistrito<<endl;
	}
	
	cout<<"*****************************************************************"<<endl;   	  
	//PUNTO 5
	for (iMot=0;iMot<CANTMOTIVOS;iMot++){
		for (iDistr=0;iDistr<CANTDISTRITOS;iDistr++){
			if(iMot==0 && iDistr==0){
				posMotivoMin=0;
				posDistritoMin=0;
			}
			else
				if(matCantPermisosxMotivoxDistrito[iMot][iDistr]<matCantPermisosxMotivoxDistrito[posMotivoMin][posDistritoMin]){
					posMotivoMin=iMot;
					posDistritoMin=iDistr;
				}
		}
    }
    cout<<"El Motivo: "<<vecCodMotivos[posMotivoMin] <<" Distrito: "<< posDistritoMin+1<<" solicito la menor cantidad de permisos: "<<matCantPermisosxMotivoxDistrito[posMotivoMin][posDistritoMin]<<endl;
    
      
    getch();
    return(0);
}
