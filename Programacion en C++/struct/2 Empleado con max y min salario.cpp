#include<iostream>
#include<conio.h>

using namespace std;

struct Empleado{
    char nombre[20];
    float sueldo;

}empleado[100];

int main(){
    //Declaracion de variables
    int n_empleados;
    float max, min;
    int i, j=0;

    //Obtener cantidad de empleados
    cout<<"Ingrese la cantidad de empleados: ";
    cin>>n_empleados;
    for (i = 0 ; i < n_empleados ; i++){
        cout<<"Empleado #" << i+1 << ": \n";
        cout<<"Nombre: ";
        cin>>empleado[i].nombre;
        cout<<"Sueldo: $";
        cin>>empleado[i].sueldo;
        cout<<"\n";
        }
        //Identificar el maximo y minimo
        max = min = empleado[0].sueldo;
    for(j = 0 ; j < n_empleados ; j++) {
        if(max < empleado[j].sueldo)
        max = empleado[j].sueldo;
            else if(min > empleado[j].sueldo)
            min = empleado[j].sueldo;
    }
    cout<<"El empleado que tiene mas sueldo es: "<<endl;
    cout<<"Nombre: "<<empleado[j].nombre<<endl;
    cout<<"Salario: $"<<max<<endl;
    cout<<"El empleado que tiene menos sueldo es: "<<endl;
    cout<<"Nombre: "<<empleado[j].nombre<<endl;
    cout<<"Salario: $"<<min<<endl;
            
    getch();
    return 0;
}