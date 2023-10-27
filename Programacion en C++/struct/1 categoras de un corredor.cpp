#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

struct Corredor{
    char nombre[20];
    int edad;
    char sexo[10];
    char club[20];
    char categoria[20];
}c1;

int main(){
    //Pedir los datos
    cout<<"Ingrese el nombre del corredor: ";
    cin>>(c1.nombre);
    cout<<"Ingrese la edad del corredor: ";
    cin>>c1.edad;
    cout<<"Ingrese el sexo del corredor (M/F): ";
    cin>>c1.sexo;

    //Vaciar el buffer
    fflush(stdin);

    cout<<"Ingrese el club del corredor: ";
    cin>>c1.club;
    if(c1.edad<=18){
        c1.categoria="Juvenil";
        }else if(c1.edad<=40){
            c1.categoria="Senior";
            }else{
                c1.categoria="Veterano";
                }
    //Imprimir los datos
    cout<<endl;
    cout<<"Nombre: "<<c1.nombre<<endl;
    cout<<"Edad: "<<c1.edad<<endl;
    cout<<"Sexo: "<<c1.sexo<<endl;
    cout<<"Club: "<<c1.club<<endl;
    cout<<"Categoria: "<<c1.categoria<<endl;

    getch();
    return 0;
}