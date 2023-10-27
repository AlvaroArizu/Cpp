#include<iostream>
#include<conio.h>

using namespace std;

struct Promedio{
    float nota1;
    float nota2;
    float nota3;
}alumno1;
struct Alumno{
    char nombre[50];
    char sexo;
    int edad;
    struct Promedio promediopromedio;
};

int main(){
    float promedio_alumno;

    cout<<"Nombre del alumno: ";
    cin>>alumno1.promediopromedio.nota1;
    cout<<"Sexo del alumno: ";
    cin>>alumno1.sexo;
    cout<<"Edad del alumno: ";
    cin>>alumno1.edad<<endl;

    cout<<"Notas del alumno: "<<endl;
    for(int i=0;i<=2;i++){
        cout<<"Ingrese la nota #"<<i+1<<": ";
        cin>>alumno1.promediopromedio.nota1;
    }

    //Calcular el promedio
    promedio_alumno = (alumno1.promediopromedio.nota1 + alumno1.promediopromedio.nota2 + alumno1.promediopromedio.nota3)/3;

    cout<<"Promedio de las notas: "<<promedio_alumno<<endl;

    //Imprimir datos del alumno
    cout<<"---Datos del alumno----"<<endl;
    cout<<"Nombre: "<<alumno1.nombre<<endl;
    cout<<"Sexo: "<<alumno1.sexo<<endl;
    cout<<"Edad: "<<alumno1.edad<<endl;
    cout<<"Nota 1:"<<alumno1.promedio.nota1<<endl;
    cout<<"Nota 2:"<<alumno1.promedio.nota2<<endl;
    cout<<"Nota 3:"<<alumno1.promedio.nota3<<endl;cout<<"Promedio: "<<promedio_alumno<<endl;

    getch();
    return 0;
}