//  Matriz recorrrido por FILAS usando WHILE.

#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <iomanip>
#include <windows.h>
using namespace std;

int main (void){

    int mat[3][4]={{17,20,10,20},{30,10,60,90},{75,80,20,84}};
    
    int f=0 , c=0;
        
    while  (f<3) {
 
          while (c<4) {
               c++;
               cout << "Elemento: " << f << "  " << c << "  "  <<  mat [f][c] << endl ;
               
                }  // fin del while interno
          
                     f++; 
                     c=0;
                     cout << endl;
                     
    }  // fin del while externo
                 
          
    getch();
    return(0);
} 


