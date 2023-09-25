Una organización de Rally en la Argentina, desea organizar los resultados del año 2020. 
Para ello cuenta con datos de: 
10 (diez) camionetas 4x4 (con números identificatorios de entre 500 y 1200) y 
5 (cinco) etapas (codificados del 0 al 4).
*/

#include <stdio.h>
#include <iostream>
#include <conio.h>
#include <iomanip>

using namespace std;

int main()
{
	//zona de declaracion de variables
	int n = 5, m = 10, i, idCam, j, cont, acum;
	int vecCam[m], tiemIdeal[n], rally[m][n], contEtFin[m];
	char indicador;
	
	//inicialización de la matriz rally
	for (i=0; i<m;i++)
	{
	    contEtFin[i]=0; 
		for (j=0; j<n;j++)
		   rally[i][j]=0;
	}
	//carga datos inicial de datos identificacion de las camionetas
	for (i=0 ; i<m; i++)
	{
	    cout<< endl  <<"Ingrese identificacion de la camioneta (500 a 1200):  " ;
		cin>> vecCam[i];
		while (vecCam[i] <500) || (vecCam[i]>1200)
		{
			cout<< endl  <<"Error en el ID de la camioneta. Ingrese nuevamente identificacion de la camioneta (500 a 1200):  " ;
		    cin>> vecCam[i];
		}
		 
	}

	//carga datos inicial de datos tiempos iniciales en cada etapa
	for (j=0 ; j<n; j++)
	{
		cout<< endl  <<"Ingrese el tiempo ideal de la etapa (en minutos) "<<j<<": ";
		cin>> tiemIdeal[j];
	}
	
	//carga de datos del rally
	
	cout<< endl  <<"Ingrese identificacion de la camioneta (500 a 1200):  " ;
	cin>> idCam;
	
	while (idCam != 0 )
	{
		i=0;
		while (i<m) && (idCam != vecCam[i])
		{
			i++;
		}
		if (i<m )
		    {//desarrollo todo el ingreso de datos del rally
		      cout<<endl<<"Ingrese la etapa de rally (0 a 4): ";    	
		      cin>>	j;
		      cout<<endl<<"Ingrese el tiempo (en  minutos): ";    	
		      cin>>	rally[i][j];
		      
			}
		
		cout<< endl  <<"Ingrese identificacion de la camioneta (500 a 1200):  " ;
		cin>> idCam;
	}
	
	//punto 1
	cout<<endl<<"IdCam - etap0 - etap1 - etap2 - etap3 - etap4";
	cout<<endl<<"---------------------------------------------";
	for (i=0; i<m;i++)
	  	{
		 	cout<<endl<<setw(5)<<vecCam[i]<<" - ";
		 	for (j=0; j<n;j++)
	        	cout<<setw(5)<<rally[i][j]<<" - ";
		}
		
		
	//punto 2
	cout<<endl<<"IdCam - etap0 - etap1 - etap2 - etap3 - etap4";
	cout<<endl<<"---------------------------------------------";
	for (i=0; i<m;i++)
	  	{
		 	cout<<endl<<setw(5)<<vecCam[i]<<" - ";
		 	for (j=0; j<n;j++)
		 		{
				    if (rally[i][j] < tiemIdeal[j] )
				         indicador = '-';
				        else
				        	if  (rally[i][j] > tiemIdeal[j] )
				    				indicador = '+';
				    			else
				    				indicador = '=';
				    				
				   	cout<<setw(5)<< indicador <<" - ";
				   	
				}
		}
		
	
	//punto 3.1
	cout<<endl<<"La cantidad de etapas finalizadas por camioneta: "
	for (i=0; i<m;i++)
	  	{
		   for (j=0; j<n;j++)
	    		if rally[i][j] >0 
			 		contEtFin[i]++;
			cout<<endl<<vecCam[i]<<" - finalizo "<<contEtFin[i]<<" etapas";	
		}
		
	
	//punto 4
	for (j=0; j<n;j++)
	{
	    cont=0;
	    acum = 0;
		for (i=0; i<m;i++)
	  		{
		   		if rally[i][j] >0 
			 		{
						cont++;
			 			acum+=rally[i][j];
			 		}
			}
		cout<<endl<<" El promedio de los tiempor realizados por las camionetas que finalizaron la etapa  "<<j<<" es: "<<(acum / cont) <<" minutos ";	
	
	}
		
	//punto	5
	for (j=0; j<n;j++)
	{
	    acum = 0;
		for (i=1; i<m;i++)
			if rally[i][j] > rally[acum][j]
			    acum = i;
		cout<<endl<<" La camioneta que hizo el mayor tiempo en la etapa  "<<j<<" es: "<< vecCam[acum] <<"  ";	
	}
		
}//cierra el main
