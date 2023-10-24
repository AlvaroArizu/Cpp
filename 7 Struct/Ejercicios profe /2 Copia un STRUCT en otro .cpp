// Copia un struct en otro

#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <iomanip>
using namespace std;

struct Ejemplo    // defino un nuevo tipo de dato 
{
    int campo1;
    float campo2;
};

int main()
{
    Ejemplo struct1,  struct2,  struct3;  // defino 3 variables de tipo de dato Ejemplo

// inicializar struct1 con valores fijos
    struct1.campo1= 50;
    struct1.campo2=  1.23;
    
    // también puede inicializarse por extensión
	// struct1 = { 50, 1.23 };
    
    cout<<"Struct 1 generado:" << endl;
    cout<<"Struct 1 - campo 1: " << struct1.campo1 <<endl;
	cout<<"Struct 1 - campo 2: " << struct1.campo2 <<endl<< endl;

// copia campo a campo
    struct2.campo1= struct1.campo1;   //  copia el valor 50
    struct2.campo2= struct1.campo2;   //  copia el valor 1.23
    
    cout<<"Struct 2 - copiado campo a campo desde Struct1:" << endl;
    cout<<"Struct 2 - campo 1: " << struct2.campo1 <<endl;
	cout<<"Struct 2 - campo 2: " << struct2.campo2 <<endl<< endl;

 // copia el struct completo   
    struct3= struct2;
    
    cout<<"Struct 3 - copiado completo desde Struct2:" << endl;
    cout<<"Struct 3 - campo 1: " << struct3.campo1<<endl;
	cout<<"Struct 3 - campo 2: " << struct3.campo2<<endl;
    
    getch();      
    return(0);
}

