// Programa: Clase de alumnos mujeres y varones. 

#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <iomanip>
using namespace std;

int main(){

	int cantV, cantM, totalAlu ;
	double porcM; 
	
	cout << "Ingrese la cantidad de mujeres de la clase" << endl;
	cin >> cantM;
	cout << "Ingrese la cantidad de varones de la clase" << endl;
	cin >> cantV;
	
	// 1) Informar la cantidad de varones
	cout << endl << "En la clase hay: " << cantV << " varones" << endl;
	
	totalAlu = cantM + cantV;
	// 2) Informar cantidad total de alumnos
   	cout << "En la clase hay en total: " << totalAlu << " alumnos" << endl;
   	
   	porcM = cantM * 100 / totalAlu;
   	// 3) Informar porcentaje de mujeres en la clase
   	cout << endl << "El porcentaje de mujeres es: " << porcM << " %" << endl << endl;
   	
   	// 4) Informar si hay más de 100 alumnos en la clase
    if (totalAlu > 100 )  {
                 cout << "Hay mas de 100 alumnos en la clase" << endl;  
                 }
    // 5) Informar si hay cantidad par o impar de alumnas mujeres
    if ( cantM % 2  == 0)  {
                 cout << "Hay cantidad PAR de alumnas mujeres" << endl; }
                 else     {
                 cout << "Hay cantidad IMPAR de alumnas mujeres" << endl;
                 }
    // 6) Informar si si hay más mujeres que varones, ó ...
    if ( cantM > cantV )  {
                 cout << "Hay mas mujeres que varones" << endl; }
                 else 
                      if (cantV > cantM ) {
                       cout << "Hay mas varones que mujeres" << endl; }
                       else  {
                       cout << "Hay la misma cantidad" << endl;  }
                                              
    getch();
    
    return(0);
}


 
