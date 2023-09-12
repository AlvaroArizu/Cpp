//  Matriz BUSCAR un valor determinado -  usando WHILE.

#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <iomanip>
#include <windows.h>
using namespace std;

int main (void){

    int mat[3][4]={{0,200,100,200},{3000,10001,600,900},{75,800,20000,84}};

    
    int f=0 , c=0;
        
    while ( (f<3) && (mat[f][c] <= 10000 ) ) {
 
          while ((c<4) && (mat[f][c] <= 10000 ) ) {
               c++;
               cout << f << "  " <<  c << endl;   ///  a los efectos de ver cómo se generan los indices
                              
                }  // fin del while interno
                
          		  if (mat[f][c]<=10000) {  // para que no se modifiquen los indices al encontrar uno mayor que 10.000

                     f++; 
                     c=0;
                }
    }  // fin del while externo
    
	if ((f==3)&&(c==4)){
        cout<<"No se vendio mas de $10000 en ninguna caja de ninguna sucursal"<<endl;
                 }
        else{
            cout<<"La primera sucursal encontrada: "<< f <<" en la caja: "<< c <<" cobro mas de $10000."<<endl; 
                            cout<<"Su monto fue: "<<setw(3)<<mat[f][c]<<endl;
                            }              
             
          
    getch();
    return(0);
} 


