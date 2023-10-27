/*10 alumnos, anotados en 6 materias, se sabe de los alumnos matricula(de 5000a 10000), dni(validar)
puntacion en cada materia, sabiento que la nota va de 1 a 10, se aprueba con 6, informar de cada alumno en cuantas materias aprobo,
en cuantas desaprobo, el alumno con mayor promedio entre todas las materias y el alumno con el menor promedio entre todas las materias*/

#include<iostream>
#include<stdio.h>
#include<iomanip>
#include<conio.h>

using namespace std;

int main(void){
	
	int i, j, f=10, c=6,max,min;
	
	int matAxM[f][c],vecMatricula[f],contApro[f],contDesap[f];
	double vecDni[f];
	
	for(i=0;i<f;i++){
		contApro[i]=0;	
		contDesap[i]=0;
	}
	
	//primer ingreso de datos
	
	for(i=0;i<f;i++){
	
		cout<<"Ingrese la matricula de l alumno "<<i+1<<endl;
		cin>>vecMatricula[i];
		
		cout<<endl;
		
		while((vecMatricula[i]<5000)||(vecMatricula[i]>10000)){
		
			cout<<"Ingreso la matricula erronea por favor vuelva a ingresarla";
			cin>>vecMatricula[i];	
		}
		
		cout<<"ingrese numero de dni";
		cin>>vecDni[i];
		
		cout<<endl;
		
		while((vecDni[i]<10000000)||(vecDni[i]>100000000)){
		
			cout<<"Ingreso el dni erroneo por favor vuelva a ingresarlo";
			cin>>vecDni[i];	
		}
		
	}

	//ingreso de datos 2
	
	for(i=0;i<f;i++){
		for(j=0;j<c;j++){
			
			cout<<"Ingrese la nota del alumno "<<vecMatricula[i]<<" de la materia "<<j+1<<": ";
			cin>>matAxM[i][j];
			
			cout<<endl;
			
			while((matAxM[i][j]<=1)||(matAxM[i][j]>=10)){
				cout<<"nota fuera de rango, por favor ingrese nuevamente";
				cin>>matAxM[i][j];
				
				cout<<endl;
			}	
			
			if(matAxM[i][j]>=6){
				contApro[i]++;//cuento las materias aprobadas x alunno
			}
			else{
				contDesap[i]++;//cuento las materias desaprobadas x alumno
			}	
		}
		
		cout<<"el alumno "<<vecMatricula[i]<<" aprobo "<< contApro[i]<<" materias y desaprobo "<< contDesap[i]<<" materias"<<endl;
	}
	
	
	for(i=0;i<f;i++){
		contApro[i]=0;//reciclo el vector para no definir uno nuevo
	
		for(j=0;j<c;j++){
			
			
			contApro[i]+=matAxM[i][j];
			
			
		}
	}

	max=0;
	min=0;
	for(i=1;i<f;i++){
		
		if(contApro[i]>contApro[max]){
			max=i;
		}
		
		if(contApro[i]<contApro[min]){
		 	min=i;	
		}
	}


	cout<<"el alumno con el mayor promedio es "<< vecMatricula[max]<<" con un promedio de "<<contApro[max]/c<<endl;;
	
	cout<<"el alumno con el menor promedio es "<< vecMatricula[min]<<" con un promedio de "<<contApro[min]/c<<endl;

}
