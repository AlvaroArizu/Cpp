# include<iostream>
# include<stdio.h>
# include<conio.h>
# include<iomanip>

#define vendedores 5
#define autos 4

using namespace std;

int main (void){

	int i,f,c, nroVenta, legajo, modelo, montoTotal;
		
	int legajos[vendedores], cuit[vendedores], precios[autos], regVendedor[vendedores], regModelo[autos];
	
	int ventas[vendedores][autos];
	
	for (f=0; f<vendedores;f++){
		for(c =0; c< autos;c++){
			ventas[f][c]=0;
		}
	}
	
	for (i=0; i<vendedores; i++){
		regVendedor[i]=0;
	}
	
	for (i=0; i<autos; i++){
		regModelo[i]=0;
	}
	
	
	legajos [0]= 1001;
	legajos [1]= 1002;
	legajos [2]= 1003;
	legajos [3]= 1004;
	legajos [4]= 1005;
	
	
	for (i=0; i<autos;i++){
		cout << "Ingrese el precio del modelo ["<< i <<"] : ";
		cin >> precios[i];
	}
	cout <<endl;
	
	cout << "Ingrese numero de venta (0 para FIN) : ";
	cin>> nroVenta;
	
	while (nroVenta != 0){
		cout << "Ingrese el legajo del vendedor: ";
		
		do { 
			cin >> legajo;
			f=0;
			
			while (f < vendedores && legajo != legajos[f]){
				f++;
			}
			
			if (f == vendedores){
				cout<< "ERROR!. Ingrese un numero de legajo valido: ";
			}
		} while (f == vendedores);
		cout<<endl;
		
		cout << "Ingrese el codigo del modelo: ";
		cin>> modelo;
		cout<<endl;
		
		ventas[f][modelo] ++;
		regVendedor[f]++;
		regModelo[modelo]++;
		
		
		
		cout << "Ingrese numero de venta (0 para FIN) : ";
		cin>> nroVenta;
	}
	
	// 1) Por cada vendedor, la cantidad de autos vendidos en el mes, de cada modelo.
	
    cout << "Ventas por vendedor y modelo:" << endl;
    for (f = 0; f < vendedores; f++) {
    	
        cout << "Vendedor " << legajos[f] << ":" << endl;
        
        for (c = 0; c < autos; c++) {
            cout << "Modelo " << c << ": " << ventas[f][c] << " autos" << endl;
        }
    }
    cout << endl;
    
    // 1.a) Totales de autos vendidos de cada modelo.
    
    cout << "Totales de autos vendidos por modelo:" << endl;
    for (i = 0; i < autos; i++) {
        cout << "Modelo " << i << ": " << regModelo[i] << " autos" << endl;
    }
     cout << endl;
     
    //2)	Monto total vendido por la agencia durante el mes.
    montoTotal =0;
    for (i=0; i<autos; i++){
    	int monto =0;
    	monto = regModelo[i] * precios[i];
    	montoTotal += monto;
	}
	
	cout << endl;
	cout<< "Monto total vendido por la agencia durante el mes: "<< montoTotal;
	cout<<endl;
	
	//3) Modelo con mayor cantidad de ventas
	int maxVentasModelo = 0;
	for(i=0; i< autos; i++){
		if (regModelo[i] > regModelo[maxVentasModelo]){
			maxVentasModelo = i;
		}
	}
	
	cout << endl;
	cout << "Modelo con mayor cantidad de ventas : "<< maxVentasModelo<< " con "<< regModelo[maxVentasModelo]<< " unidades vendidas. ";
	cout << endl;
	
	//4)	Mostrar, para el modelo más vendido, cuántos autos vendió cada vendedor.
	cout << "Ventas por vendedor y modelo mas vendido: " << endl;
    for (f = 0; f < vendedores; f++) {
    	
        cout << "Vendedor " << legajos[f] << ":" << endl;
        
        cout << "Modelo " << maxVentasModelo << ": " << ventas[f][maxVentasModelo]<< " autos" << endl; 
    }
    cout << endl;
	
	//5) Vendedor con mayor cantidad de ventas
	int maxVentasVendedor =0;
	for(i=0;i<vendedores;i++){
		if(regVendedor[i] > regVendedor[maxVentasVendedor]){
			maxVentasVendedor = i;
		}
	}
	cout << "vendedor con mayor cantidad de ventas : "<<maxVentasVendedor<<" legajo " <<legajo[maxVentasVendedor]" con " << regVendedor[maxVentasVendedor]<< " unidades vendidas. ";
	cout<< endl;
	
	getch();
	return 0;
}
