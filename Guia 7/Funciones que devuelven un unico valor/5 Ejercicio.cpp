/*Se pide diseñar un algoritmo que dados N números enteros, informe: cantidad de números pares y suma de los números impares.
Utilizar una función que: dado un número entero devuelva true si dicho número es par o false si es impar.
*/
#include <iostream>
using namespace std;

// Función para verificar si un número es par
bool esPar(int numero) {
    return (numero % 2 == 0);
}

int main() {
    int N;
    cout << "Ingrese la cantidad de números (N): ";
    cin >> N;

    int cantidadPares = 0;
    int sumaImpares = 0;

    for (int i = 0; i < N; i++) {
        int numero;
        cout << "Ingrese un número entero: ";
        cin >> numero;

        if (esPar(numero)) {
            cantidadPares++;
        } else {
            sumaImpares += numero;
        }
    }

    cout << "Cantidad de números pares: " << cantidadPares << endl;
    cout << "Suma de números impares: " << sumaImpares << endl;

    return 0;
}
