/*
Diagramar un algoritmo que lea las respuestas de los 10 alumnos de un curso acerca del tema triángulos.  
De cada alumno se tiene la siguiente información: nombre del alumno, longitudes de los tres lados del triángulo (en centímetros) que debe evaluar, su respuesta acerca del perímetro (en metros) y su respuesta acerca del tipo de triángulo, que será 1 si es equilátero, 2 si es isósceles y 3 si es escaleno.  Si para aprobar la evaluación debe tener las dos respuestas correctas, se pide informar:

1) Por cada: su nombre y si aprobó o está insuficiente.
2) Cantidad de alumnos aprobados y porcentaje que representa del total de alumnos.

Función 1: Dados los tres lados de un triángulo (en cmts.) devuelva el perímetro (mts.).

Función 2: Dados los tres lados de un triángulo y su posible tipo (1- 2 - 3), devuelva 1 si el tipo indicado es el correcto y 0 en caso contrario.
*/
#include <iostream>
#include <string>
using namespace std;

// Función para calcular el perímetro de un triángulo en metros
double calcularPerimetro(double lado1, double lado2, double lado3) {
    return (lado1 + lado2 + lado3) / 100.0; // Convertir centímetros a metros
}

// Función para verificar el tipo de triángulo (1: equilátero, 2: isósceles, 3: escaleno)
int verificarTipoTriangulo(double lado1, double lado2, double lado3, int tipo) {
    if (lado1 == lado2 && lado2 == lado3) {
        return (tipo == 1) ? 1 : 0;  // Equilátero
    } else if (lado1 == lado2 || lado1 == lado3 || lado2 == lado3) {
        return (tipo == 2) ? 1 : 0;  // Isósceles
    } else {
        return (tipo == 3) ? 1 : 0;  // Escaleno
    }
}

int main() {
    int aprobados = 0;
    const int totalAlumnos = 10;

    for (int i = 1; i <= totalAlumnos; i++) {
        string nombreAlumno;
        double lado1, lado2, lado3;
        double respuestaPerimetro;
        int respuestaTipoTriangulo;
        bool aprobacion = true;

        cout << "Ingrese el nombre del alumno " << i << ": ";
        cin >> nombreAlumno;
        cout << "Ingrese las longitudes de los tres lados del triángulo (en centímetros): ";
        cin >> lado1 >> lado2 >> lado3;
        cout << "Ingrese la respuesta del alumno acerca del perímetro (en metros): ";
        cin >> respuestaPerimetro;
        cout << "Ingrese la respuesta del alumno acerca del tipo de triángulo (1: equilátero, 2: isósceles, 3: escaleno): ";
        cin >> respuestaTipoTriangulo;

        double perimetroCalculado = calcularPerimetro(lado1, lado2, lado3);
        int tipoVerificado = verificarTipoTriangulo(lado1, lado2, lado3, respuestaTipoTriangulo);

        if (perimetroCalculado != respuestaPerimetro || tipoVerificado != 1) {
            aprobacion = false;
        }

        if (aprobacion) {
            cout << nombreAlumno << " aprobó." << endl;
            aprobados++;
        } else {
            cout << nombreAlumno << " está insuficiente." << endl;
        }
    }

    double porcentajeAprobados = (aprobados / static_cast<double>(totalAlumnos)) * 100;
    cout << "Cantidad de alumnos aprobados: " << aprobados << endl;
    cout << "Porcentaje de aprobados: " << porcentajeAprobados << "%" << endl;

    return 0;
}
