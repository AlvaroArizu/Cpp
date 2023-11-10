//Se pide diseñar una función que: dado un número entero, imprima su factorial. Luego generar una función main que lea X números enteros e informe el factorial de cada uno.

#include <iostream>
using namespace std;

// Función para calcular y mostrar el factorial de un número
void calcularFactorial(int num) {
    long factorial = 1;  // Usamos long long para manejar factoriales grandes

    for (int i = 1; i <= num; i++) {
        factorial *= i;
    }

    cout << "El factorial de " << num << " es: " << factorial << endl;
}

int main() {
    int X;  // Cantidad de números para los cuales se calculará el factorial
    cout << "Ingrese la cantidad de números para calcular el factorial: ";
    cin >> X;

    for (int i = 0; i < X; i++) {
        int numero;
        cout << "Ingrese un número entero: ";
        cin >> numero;
        calcularFactorial(numero);
    }

    return 0;
}
