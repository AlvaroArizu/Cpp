# Struct
Coleccion de uno a mas tipos de elemetos denominados campos, cada uo de los cuakes pueden ser un tipo diferente de dato

Ejemplo:
Se desea almacernar los datos de una collecion de CD de musica:
- Titulo
- Artista
- Nro de canciones 
- Precio
- Fecha de compra 

```cpp
struct Coleccion_CD {
    char tirulo[30];
    char artista[25];
    int nroCanciones;
    float precio;
    char fecha_compra[20];
};
```

### Estructura
```cpp
struct <nombre_estructura>{
    <tipoDeDato> <nombreDeCampo>
};
```

## Estructura basica
```cpp
#include<iostream>
#include<conio.h>

using namespace std;

struct Persona{
    char nombre[20];
    int edad;
}
persona1={"Alvaro",22},
persona2={"Alejandro",24};


int main(){
    //Imprimir los datos
    cout<<"Nombre1: "<<persona1.nombre<<endl;
    cout<<"Edad1: "<<persona1.edad<<endl;

    cout<<"Nombre2: "<<persona2.nombre<<endl;
    out<<"Edad2: "<<persona2.edad<<endl;


    getch();
    retunr 0;
}
```

### Estructura anaidadas
Una estructura anidada es un struct dentro de otro struct
```cpp
//Estructura basica
struct info_direccion{
    char direccion[30];
    char ciudad[20];
    char provincia[20];
};

//Estructura anidada
struct empleado{
    char nombre[20];
    struct info_direccion dir_empleado;
    double salario;
}
```

```cpp
#include<iostream>
#include<conio.h>

using namespace std;

//Estructura basica
struct info_direccion{
    char direccion[30];
    char ciudad[20];
    char provincia[20];
};

//Estructura anidada
struct empleado{
    char nombre[20];
    struct info_direccion dir_empleado;
    double salario;
}empleados[2];

int main(){
    //Arreglo de estructuras

    //Pedir los datos para 2 empleados
    for(int i==;i<2;i++){
        fflush(stdin); //Funcion para vaciar el beffer y permietir digitar los valrores

        cout<<"Ingresar su nombre: ";
        cin.getline(empleados[i].nombre,20,'\n');

        cout<<"Ingrese su dirrecion: ";
        cin.getline(empleados[i].dir_empleados.direccion,30,'\n');

        cout<<"Ciudad: ";
        cin.getline(empleados[i].dir_empleados.ciudad,20,'\n');

        cout<<"Provincia: ";
        cin.getline(empleados[i].dir_empleados.provincia,20,'\n');

        cout<<"Salario: ";
        cin.getline(empleado[i].salario,'/n');

        cout<<endl;
    }

    //Impriir los datos
    for(int i==;i<2;i++){
        cout<<"Nombre: "<<empleado[i].nombre<<endl;
        cout<<"Direccion: "<<empleado[i].dir_empleado.direccion<<endl;
        cout<<"Ciudad: "<<empleado[i].dir_empleado.ciudad<<endl;
        cout<<"Provincia: "<<empleado[i].dir_empleado.provincia<<endl;
        cout<<"Salario: "<<empleado[i].salario<<endl;
        cout<<endl.
    }

    getch();
    return 0;
}
```

### Ejercicio - Categorias de un corredor
Haer una estructura llamada corredor, en la cual se tendra los siguientes campos: 
- nombre, 
- edad, 
- sexo, 
- club, 

Pedir datos al usuario para un corredor, y asi una categoria de competicion:
- Juvenil <=18 anos
- Senor <=40 anos
- Veterano >40anos

Posteriormente imprimir todos los datos del corredor, incluida su categoria de competicion.
```cpp
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
```
### Ejercicio - Empleado con mayor y menor salario
Realizar un programa que lea un arreglo de estructuras los datos de N empleados de la emepresa y que imprima los datos del empleado con mayor salario
```cpp
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
```
### Ejercicio - Estructuras anidades y promedio de un alumno
Hacer una estructura llamada promedio que tendra los siguientes campos:
- nota1
- nota2
- nota3

Y otra llamada alumno que tendra los siguientes campos:
- nombre
- sexo
- edad

Hacer que la estructura promedio este anidada en la de alumnos, luego pedir todos los datos para un alumno, luego calcular su promedio, y por ultimo imprimir todos sus datos incluido sus notas y promedio final
```cpp
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
```
### Ejercicio - Estructura etaas de un ciclista
Dedina una estructura que indique el tiempo empleado por un ciclita en una etapa. La estructura debe tener 3 campos:
- horas
- minutos
- segundos
Escribir im programa que dado n estapas calcule el tiempo total empleado en correr todas las etapas
```cpp
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
```