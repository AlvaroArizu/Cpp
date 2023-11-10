#include<iostream>
#include<conio.h>
#include<stdio.h>

using namespace std;

//Struct
struct Tonel{
    int id;
    double altura;
    double diametro
    int tipo;
    int codVarietal;
    double capacidad;
    double litros,
    double precioxlitro;
}

//Funciones
/*
Dado un tonel y un porcentaje, dovolver un indicador si dicho tonel
tiene almacenado al menos diho porcentaje de su capacidad
*/
bool tonelPorecentaje(Tonel unTonel, double porc){
    return(unTonel.litros >= (unTonel.capacidad*porc/100));
}

/*
Dado un vector con los datos de los toneles y su dim, retornar la cantidad de toneles que estan ocupados al menos con un 80% de su capacidad
*/
int tonelAprovechado(Tonel vecToneles[], int dim){
    int i, cont=0;
    for(i=0;i<dim;i++){
        if(tonelPorecentaje(vecToneles[i], 80))
        cont++;
    }
    return cont;
}
/*
Dado un vector con los datos de los toneles y su dim, mostrar por pantalla los datos de cada uno
*/
void mostrarConsolaToneles(Tonel vecToneles[], int dim){
    int i;
    for(i=0;i<dim;i++){
        cout<<"ID: "<<vecToneles[i].id<<endl;
        cout<<"Altura: "<<vecToneles[i].altura<<endl;
        cout<<"Diamtro: "<<vecToneles[i].diamtro<<endl;
        cout<<"Tipo: ";
        if(vecToneles[i].tipo ==1){
            cout<<"1-Barril"<<endl;
        }
        else{
            cout<<"2-Tina"<<endl;
        }
        cout<<"Codigo tipo varietal: ";
        switch(vecToneles[i].codVarietal){
            case 1:cout<<"1-Tempranillo";break;
            case 2:cout<<"2-Cabernet Sauvignon";break;
            case 3:cout<<"3-Merlot";break;
            case 4:cout<<"4-Syrah";break;
            case 5:cout<<"5-Malbec";break;
        }   
        cout<<"Capacidad: "<<vecToneles[i].capacidad<<endl;
        cout<<"Litros: "<<vecToneles[i].litros<<endl;
        cout<<"Precio x Litro: "<<vecToneles[i].precioxlitro<<endl;
        cout<<endl;
}
/*
Dado un vector con los datos de los toneles y su dim, un codigo de tipo de varietal, DEVUELVA un vector que contenga los toneles que corresponde a dihi tipo, y devolver tmb su dimension
*/
void tipoTonel(Tonel vecToneles[], int dim, int codTipo, Tonel vecTonelesTipoTonel[], int& dimVecTipo){
    int i,x;
    x=0;
    for(i=0;i<dim;i++){
        if(vecToneles[i].tipo==codTipo) {
            vecTonelesTipoTonel[x]=vecToneles[i];
            x++;
        }
    }
    dimVecTipo=x;
}
/*
Dado un vector con los datos de los toneles y su dim, un codigo de tipo de varietal, DEVOLVER un vector que contenga los toneles correpondientes y su dim
*/

void tipoVarietal(Tonel vecToneles[], int dim, int codVarietal, Tonel vecTonelesTipoVarietal[], int& dimVecVarietal){
    int i,x;
    x=0;
    for(i=0;i<dim;i++){
        if(vecToneles[i].tipo==codVarietal) {
            vecTonelesTipoVarietal[x]=vecToneles[i];
            x++;
        }
    }
    dimVecVarietal=x;
}
/*
Dado un vector con los datos de los toneles y su dim, DEVOLVER la id del tonel con mayor y menor cantidad almacenada
*/
int menor(vecToneles[], int dim){
    int i, idMin=0:
    for(i=1;i<dim;i++){
        if(vecToneles[idMin].capacidad>vecToneles[i].capacidad){
        idMin=i;
        }
    }
    return idMin;
}
int mayor(vecToneles[], int dim){
    int i, idMax=0:
    for(i=1;i<dim;i++){
        if(vecToneles[idMax].capacidad>vecToneles[i].capacidad){
        idMax=i;
        }
    }
    return idMax;
}
void menorMayor(Tonel vecToneles[], int dim, int& idMin, int& idMax){
    idMin=vecToneles[menor(vecToneles, dim)].id
    idMax=vecToneles[mayor(vecToneles, dim)].id
}
//------CARGA DE DATOS------//
void cargarDatosToneles(Tonel vecToneles[], int dim){
    int i, auxTipo, auxVarietal;
    for(i=0;i<dim;i++){
        cout<<"Ingrese el ID del tonel "<<i+1<<": "; cin>>vecToneles[i].id
        cout<<"Ingrese la capacidad del tonel "<<i+1<<": "; cin>>vecToneles[i].
        cout<<"Ingrese el tipo de arbol (1-2): "; cin>>auxTipo
        while(auxTipo!=1 && auxTipo!=2){
            cout<<"ERROR!. Tipo invalido.";
            cout<<"Ingrese el tipo de arbol (1-2): "; cin>>auxTipo
        }
        vecToneles[i].tipo=auxTipo;
        cout<<"Ingrese el tipo Varietal: "<<endl;
        cout<<"1-Tempranillo"<<endl;
        cout<<"2-Cabernet"<<endl;
        cout<<"3-Merlot"<<endl;
        cout<<"4-Syrah"<<endl;
        cout<<"5-Malbec"<<endl;
        cin>>auxVarietal;

        while(auxVarietal<1||auxVarietal>5){
            cout<<"ERROR. Varietal invalido.";
            cout<<"Ingrese el tipo Varietal: "<<endl;
            cout<<"1-Tempranillo"<<endl;
            cout<<"2-Cabernet"<<endl;
            cout<<"3-Merlot"<<endl;
            cout<<"4-Syrah"<<endl;
            cout<<"5-Malbec"<<endl;
            cin>>auxVarietal;
        }

        cout<<"Ingrese la capacidad "<<i+1<<" :";
        cin>>vecToneles[i].capacidad;
        cout<<"Ingrese los litros "<<i+1<<" :";
        cin>>vecToneles[i].litros;
        cout<<"Ingrese el precio x litro "<<i+1<<" :";
        cin>>vecToneles[i].precioXlitro;
        cout<<endl;
    }
}

//Funcion MAIN
int main(){
    int i, n, dimVecVarietal, dimVecTipo, idMin, idMax;

    cout<<"Ingrese la cantidad de toneles: "<<endl;
    cin>>n;
    Tonel vecToneles[n];
    Tonel vecTonelesTipoTonel[n];
    Tonel vecTonelesTipoVarietal[n];

    /*
    PUNTO 1
    Los datos de cada uno de los toneles
    */
    cargarDatosTonel(vecTonles, n);
    mostrarConsolaToneles(vecToneles, n);
    /*
    PUNTO 2
    La cant de toneles que tienen almacenda por los menos un 80% de su totalidad
    */
    cout<<"La cantidad de toneles que tiene almacenada por lo menos un 80% se du capacidad"<<tonelAprovechado(vecToneles, n);
    /*
    PUNTO 3
    Los toneles de cada tipo varietal, y mostrar por consola
    */
    for(i=1;i<5;i++){
        tipoVarietal(vecToneles, n, i, vecTonelesTipoVarietal, dimVecVarietal);
        mostrarConsolaToneles(vecTonelesTipoVarietal, dimVecVarietal);
    }
    /*
    PUNTO 4
    Los toneles de tipo Barriel, y mostrar por consola
    */
    tipoTonel(vecToneles, n, 1, vecTonelesTipoTonel, dimVecTipo);
    mostrarConsolaToneles(vecTonelesTipoTonel, dimVecTipo);
    /*
    PUNTO 5
    Los id del tonel con Max y Min de cantidad alamcenada
    */
    menorMayor(vecToneles, n, idMin, idMax);
    cout<<"El minimo es: "<<idMin<<endl;
    cout<<"El maximo es: "<<idMax<<endl;

    getch();
    return 0;

}
