/*
Realizar un algoritmo que dado el nombre (Elegir la condición de fin de ingreso de datos adecuado) y las cuatro notas de cada uno de los alumnos del curso  informe:

1) Por cada alumno: su mejor nota y su peor nota.
2) Cantidad de alumnos que tuvieron todas sus notas 4 o más.

Se pide utilizar una FUNCIÓN que: dados cuatro números enteros y un indicador entero (0 / 1) devuelva el valor del máximo si el indicador es 0, o el valor del mínimo de esos números si el indicador es 1.
*/
#include <iostream>
#include <string>
using namespace std;

// Función para calcular el máximo o mínimo de cuatro números
int maxMinDeCuatro(int nota1, int nota2, int nota3, int nota4, int indicador) {
    int resultado;

    if (indicador == 0) {  // Calcular el máximo
        resultado = max(max(max(nota1, nota2), nota3), nota4);
    } else if (indicador == 1) {  // Calcular el mínimo
        resultado = min(min(min(nota1, nota2), nota3), nota4);
    }

    return resultado;
}

int main() {
    string nombre;
    int nota1, nota2, nota3, nota4;
    int contadorAlumnos = 0;
    int contadorAlumnos4OMas = 0;

    cout << "Ingrese el nombre del alumno (o -1 para terminar): ";
    cin >> nombre;

    while (nombre != "-1") {
        cout << "Ingrese las cuatro notas del alumno (separadas por espacios): ";
        cin >> nota1 >> nota2 >> nota3 >> nota4;

        int mejorNota = maxMinDeCuatro(nota1, nota2, nota3, nota4, 0);  // Obtener la mejor nota
        int peorNota = maxMinDeCuatro(nota1, nota2, nota3, nota4, 1);   // Obtener la peor nota

        cout << "Mejor nota de " << nombre << ": " << mejorNota << endl;
        cout << "Peor nota de " << nombre << ": " << peorNota << endl;

        if (mejorNota >= 4 && peorNota >= 4) {
            contadorAlumnos4OMas++;
        }

        contadorAlumnos++;

        cout << "Ingrese el nombre del siguiente alumno (o -1 para terminar): ";
        cin >> nombre;
    }

    cout << "Cantidad de alumnos que tuvieron todas sus notas 4 o más: " << contadorAlumnos4OMas << endl;

    return 0;
}
