#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <iomanip>

#define VEN 5
#define AUT 4

using namespace std;

int main() {

    int i, f, j, nroVenta, legajo, modelo, montoTotal;

    int legajos[VEN]; 
    int cuit[VEN];
    int precios[AUT];
    int matVenta[VEN][AUT]; 
    int regVendedor[VEN];
    int regModelo[AUT];

    // Inicialización de la matriz
    for (i = 0; i < VEN; i++) {
        for (j = 0; j < AUT; j++) {
            matVenta[i][j] = 0;
        }
    }
    //Inicializacion del vector 
    for (i = 0; i < VEN; i++) {
        regVendedor[i] = 0;
    }
    //Inicializacion del vector 
    for (j = 0; j < AUT; j++) {
        regModelo[j] = 0;
    }
    
    //Inicializacion de los valores del vector 
    legajos[0] = 1001;
    legajos[1] = 1002;
    legajos[2] = 1003;
    legajos[3] = 1004;
    legajos[4] = 1005;

    for (j = 0; j < AUT; j++) {
        cout << "Ingrese el precio del modelo [" << j << "] : ";
        cin >> precios[j];
    }

    cout << endl;

    cout << "Ingrese el número de venta (0 para FIN): ";
    cin >> nroVenta;

    while (nroVenta != 0) {
        cout << "Ingrese el legajo del vendedor: ";
        
        //Validacion con do-while
        do {
            cin >> legajo;
            f = 0;
            
            //busqueda con el while 
            while (f < VEN && legajo != legajos[f]) {
                f++;
            }

            if (f == VEN) {
                cout << "ERROR! Ingrese un número de legajo válido: ";
            }

        } while (f == VEN);
        cout << endl;

        cout << "Ingrese el código del modelo: ";
        cin >> modelo;
        cout << endl;
        
        //Registra las ventas e incrementa los valores
        matVenta[f][modelo]++;
        regVendedor[f]++;
        regModelo[modelo]++;

        cout << "Ingres número de venta (0 para fin): ";
        cin >> nroVenta;
    }
    
    // 1 Por cada vendedor, la cantidad de autos vendidos en el mes de cada modelo 

    //Encabezado 
    cout << "Ventas por vendedor y modelo: " << endl;
    for (i = 0; i < VEN; i++) {
        cout << "Vendedor " << legajos[i] << " :" << endl;
        
        for (j = 0; j < AUT; j++) {
            cout << "Modelo " << j << ": " << matVenta[i][j] << " auto" << endl;
        }
    }
    cout << endl;

    // 2 Total de autos vendidos de cada modelo 
    //Encabezado
    cout << "Total de auto vendido de cada modelo: ";
    for (j = 0; j < AUT; j++) {
        cout << "Modelo " << j << ": " << regModelo[j] << " autos" << endl;
    }
    cout << endl;

    // 3 Total de autos vendidos por la agencia durante el mes 
    montoTotal = 0;
    for (j = 0; j < AUT; j++) {
        int monto = 0;
        monto = regModelo[j] * precios[j]; // Usa 'precios' en lugar de 'precio'
        montoTotal = montoTotal + monto;
    }
    cout << endl;
    cout << "Monto total vendido por la agencia durante el mes es: " << montoTotal << endl;
    cout << endl;

    // 4 Modelo con mayor cantidad de ventas
    int modVentaMax = 0;
    for (j = 0; j < AUT; j++) {
        if (regModelo[j] > regModelo[modVentaMax]) {
            modVentaMax = j;
        }
    }
    cout << "Modelo con mayor cantidad de ventas: " << modVentaMax << " con " << regModelo[modVentaMax] << " unidades vendidas" << endl;
    cout << endl;

    // 5 Mostrar para el modelo más vendido, cuántos autos vendió cada vendedor

    //Encabezado
    cout << "Ventas por vendedor y modelo más vendido: " << endl;
    for (i = 0; i < VEN; i++) {
        cout << "Vendedor " << legajos[i] << ":" << endl;
        cout << "Modelo "

//6 Vendedor con mayor cantidad de ventas 
    int maxVentasVendedor=0;
    for(i = 0; i < VEN; i++){
 	     if(regVendedor[i]>regVendedor[maxVentasVendedor]){
 		    maxVentasVendedor=i;
	 }
 }
 cout<<endl;
 cout<<"Vendedor con mayor cantidad de ventas: "<<maxVentasVendedor<<" legajo"<<legajos[maxVentasVendedor]<<" con"<<regVendedor[maxVentasVendedor]<<" unidades vendidad";
 cout<<endl;
    
    getch();
    return 0;
}
