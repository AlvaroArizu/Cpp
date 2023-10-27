#include<iostream>
#include<conio.h>

using namespace std;

struct Etapas{
    int hora,minuto,segundo;
}et[100];

int main(){
    int n_etapas;
    //contadores
    int horasT, minutosT, segundosT;

    //Inicializar los contadores
    horasT = 0;
    minutosT = 0;
    segundosT = );

    cout<<"Ingrese el nro de etapas: "<<endl;
    cin>>n_etapas;

    for(int i+0;i<n_etapas;i++){
        cout<<"Ingrese los valores de la etapa #"<<i+1<<": "<<endl;

        //Pedir los datos al usuario
        cout<<"Hora: ";
        cin>>et[i].hora;
        cout<<"Minuto: ";
        cin>>et[i].minuto;
        cout<<"Segundo: ";
        cin>>et[i].segundo;

        //Sumar a los contadores
        horasT += et[i].hora;
        minutosT += et[i].minuto;
        segundosT += et[i].segundo;

        if(minutosT>=60){
            horasT++;
        }
        if(segundosT>=60){
            minutosT++;
        }
    }
    //Imprimir datos
   cout<<"Horas: "<<horasT<<endl;
   cout<<"Minutos: "<<minutosT%60<<endl;
   cout<<"Segundos: "<<segundosT%60<<endl;
   //cout<<"Minutos: "<<minutosT<<endl;
   //cout<<"Segundos: "<<segundosT<<endl;
   
    getch();
    return 0;
}