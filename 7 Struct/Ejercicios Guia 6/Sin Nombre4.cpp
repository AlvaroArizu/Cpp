#include <iostream>
using namespace std;

struct Fecha {
    int dia;
    int mes;
    int anio;
};

// Función para verificar si un año es bisiesto
bool esBisiesto(int año) {
    return (año % 4 == 0 && año % 100 != 0) || (año % 400 == 0);
}

// Función para calcular la cantidad de días en un mes
int diasEnMes(int mes, int año) {
    switch (mes) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            return 31;
        case 4: case 6: case 9: case 11:
            return 30;
        case 2:
            return esBisiesto(año) ? 29 : 28;
        default:
            return -1; // Mes inválido
    }
}

// Función para calcular la cantidad de días transcurridos entre dos fechas
int diasTranscurridos(Fecha fecha1, Fecha fecha2) {
    int dias = 0;

    // Suma los días completos de los años entre las dos fechas
    for (int año = fecha1.anio + 1; año < fecha2.anio; año++) {
        dias += esBisiesto(año) ? 366 : 365;
    }

    // Suma los días restantes del año de fecha1
    for (int mes = fecha1.mes + 1; mes <= 12; mes++) {
        dias += diasEnMes(mes, fecha1.anio);
    }
    dias += diasEnMes(fecha1.mes, fecha1.anio) - fecha1.dia;

    // Suma los días transcurridos del año de fecha2
    for (int mes = 1; mes < fecha2.mes; mes++) {
        dias += diasEnMes(mes, fecha2.anio);
    }
    dias += fecha2.dia;

    return dias;
}

int main() {
    Fecha fecha1, fecha2;

    // Ingresa la primera fecha
    cout << "Ingresa la primera fecha (dia mes año): ";
    cin >> fecha1.dia >> fecha1.mes >> fecha1.anio;

    // Ingresa la segunda fecha (asegúrate de que sea posterior a la primera)
    cout << "Ingresa la segunda fecha (dia mes año): ";
    cin >> fecha2.dia >> fecha2.mes >> fecha2.anio;

    int dias = diasTranscurridos(fecha1, fecha2);

    cout << "Días transcurridos entre las dos fechas: " << dias << endl;

    return 0;
}
